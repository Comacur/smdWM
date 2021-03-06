#include "smdWM.h"





monitor_t newMonitor(long int x, long int y, long int width, long int height, int cur_workspace_i, int cur_frame_i){
		monitor_t monitor;	
		monitor.x		= x;
		monitor.y		= y;
		monitor.width		= width;
		monitor.height		= height;
		monitor.cur_workspace_i	= cur_workspace_i;
		monitor.cur_frame_i	= cur_frame_i; 
		return monitor;
}	

int init(){
	con		=	xcb_connect(NULL, NULL);
	screen		=	(xcb_aux_get_screen(con, 0));
	root_width	=	screen->width_in_pixels;
	root_height	=	screen->height_in_pixels;
	root_win	=	screen->root;



int value_list[1] = {XCB_EVENT_MASK_STRUCTURE_NOTIFY | XCB_EVENT_MASK_SUBSTRUCTURE_REDIRECT |\
		   XCB_EVENT_MASK_SUBSTRUCTURE_NOTIFY  | XCB_EVENT_MASK_PROPERTY_CHANGE   | \
		   XCB_EVENT_MASK_FOCUS_CHANGE};


	Gerr		=	xcb_request_check(con, xcb_change_window_attributes_checked(con, root_win, XCB_CW_EVENT_MASK, value_list));	

	newWorkspace("1", 0, 0);
	running		=	true;
	mons[0]		=	newMonitor(0, 0, 1920, 1080, 0, 0);

	if(Gerr) return 1;
	return 0;

}



void readConfig();

void handleEvents();



void handleEvents(){
	while (running){
		xcb_flush(con);
		Gevent = xcb_wait_for_event(con);
		if(Gevent->response_type & ~0x80 == XCB_MAP_REQUEST) {
				handleMapNotify(((xcb_map_request_event_t *)Gevent));
			}
		free(Gevent);
		}
	
	}

int handleMapNotify(xcb_map_request_event_t *ev){
	xcb_get_window_attributes_cookie_t win_at_cookie = xcb_get_window_attributes(con, ev->window);

	xcb_get_window_attributes_reply_t *win_attributes = xcb_get_window_attributes_reply(con, win_at_cookie, NULL);	
	//if(win_attributes->override_redirect || poop == 1 ){
	xcb_map_window(con, ev->window);
	//}
	//else{
	//	createWindow(ev->window);
	//}
	return 0;
}
#include "window.h"
int createWindow(xcb_window_t win){
	window_t newwin = {win, mons[0].cur_frame_i, mons[0].cur_workspace_i, 0, 0, 0, 0, 0, 0, ""};
	int values[2] = {100,100};
	xcb_configure_window(con, win, XCB_CONFIG_WINDOW_X | XCB_CONFIG_WINDOW_Y, values);
	xcb_map_window(con, win);
	return 0;	
     		

}


int main(){
	if (init() == 0 ){
	handleEvents();
	}

	printf("x width  = %ld\n",root_width);	
	printf("x height = %ld\n",root_height);	
	printf("x rootwid = %0x\n",root_win);	

	return 0;
}

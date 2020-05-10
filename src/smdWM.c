#include "smdWM.h"


void init(){
	con = xcb_connect(NULL, NULL);
	screen 		     = (xcb_aux_get_screen(con, 0));
	root_width	     = screen->width_in_pixels;
	root_height	     = screen->height_in_pixels;
	root_win	     = screen->root;
	newWorkspace("1", 0, 0);
	running = true;
}

void readConfig();

void handleEvents();




void handleEvents(){
	while (running)
	Gevent = xcb_wait_for_event(con);
	switch(Gevent->response_type & ~0x80) {
		case XCB_MAP_REQUEST: {
			spawnWindow(((xcb_map_request_event_t *)Gevent));
					}
	
	}
};


int spawnWindow(xcb_map_request_event_t *ev){
	
			
	}
	return 0;
}

int main(){
	init();
	printf("x width  = %ld\n",root_width);	
	printf("x height = %ld\n",root_height);	
	printf("x rootwid = %0x\n",root_win);	

	return 0;
}

#include "common.h"

xcb_connection_t 	*con;
xcb_screen_t     	*screen;
xcb_window_t	 	win;
xcb_generic_event_t	*event;







int main(){
	con = xcb_connect(NULL, NULL);
/*	
	if(!check_connection(con)){
		exit(EXIT_FAILURE);
	}	
*/	
	for(;;){
		printf("display: %d \n",xcb_wait_for_event(con)->response_type);

	}
	
	return 0;
}

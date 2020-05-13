#ifndef __FRAMEH
#include "frame.h"
#define __FRAMEH
#endif


int frame_count = 0;

subframe_t newSubframe(float percent_x, float percent_y, int index){
	subframe_t subframe;
	subframe.percent_x = percent_x;
	subframe.percent_y = percent_y;
	subframe.index 	  = index;
	return subframe;
}

frame_t newFrame(int tiling_method, long int x, long int y, long int width, long int height){
	frame_t frame;
       	frame.id 		= frame_count;
	frame.clients 		= 0;
       	frame.focused 		= 0;
       	frame.tiling_method 	= tiling_method;
       	frame.x 		= x;
       	frame.y			= y;
       	frame.width 		= width;
       	frame.height 		= height;
	frame.subframe[0]	= newSubframe(1.0, 1.0, 0);
	frame_count++;
	return frame;
}

//int	addWindowToFrame(xcb_window_t win, frame_t, int index){
//
//}

#ifndef __FRAMEH
#include "frame.h"
#define __FRAMEH
#endif


int frame_count = 0;

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

int	addWindowToFrame(window_t win, frame_t, int index){
		if()
}

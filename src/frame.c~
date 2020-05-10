#ifndef __FRAMEH
#include "frame.h"
#define __FRAMEH
#endif


int frame_count = 0;

frame_t newFrame(int tiling_method, long int x, long int y, long int width, long int height){
	frame_t frame;
       	frame.id 	= frame_count;
	frame.clients 	= 0;
       	frame.focused 	= 0;
       	frame.tiling_method = tiling_method;
       	frame.x 	= x;
       	frame.y		= y;
       	frame.width 	= width;
       	frame.height 	= height;
	frame_count++;
	return frame;
}



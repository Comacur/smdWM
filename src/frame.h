
#ifndef __COMMONH 
#include "common.h"
#define __COMMONH 
#endif

#ifndef __CONFIGH
#include "config.h"
#define __CONFIGH 
#endif

#ifndef __FRAMEH
#define __FRAMEH
#endif

typedef struct frame_t {
	int 		id;
	int		clients;
	int		focused:1;
	int		tiling_method;
	long int	x;
	long int	y;
	long int	width;
	long int	height;
	xcb_window_t	windows[20];
} frame_t;


frame_t newFrame(int tiling_method, long int x, long int y, long int width, long int height);


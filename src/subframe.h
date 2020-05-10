#ifndef	__COMMONH
#include "common.h"
#define __COMMONH
#endif



typedef struct subframe_t {
	int		index;
	long int	x;
	long int	y;
	float		percent_x;
	float		percent_y;
	xcb_window_t	window;

} subframe_t;



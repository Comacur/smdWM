#include "common.h"
typedef struct window_t {
	xcb_window_t	winid;
	int		frame_i;
	int		workspace_i;
	bool		floating;
	bool		max;
	long int	x;
	long int	y;
	long int	width;
	long int	height;
	char		name[20];
} window_t;



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
	char		*name[20];
} window_t;


window_t newWindow (xcb_window_t winid, int frame_i, int workspace_i, bool floating, bool max, long int x, long int y, long int width, long int height, char name[]){

	window_t window;
	window.winid 		= winid;
	window.frame_i		= frame_i;
	window.workpsace_i	= workspace_i;
	window.floating		= floating;
	window.max		= max;
	window.x		= x;
	window.y		= y;
	window.width		= width;
	window.height		= height;
	strncopy(window.name, name, 20);
	return	window;
}


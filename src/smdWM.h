#ifndef __COMMONH
#include "common.h"
#define __COMMONH
#endif

#ifndef __CONFIGH
#include "config.h"
#define __CONFIGH
#endif

#ifndef __SMDWMH
#define __SMDWMH
#endif

#ifndef __FRAMEH
#include "frame.h"
#define __FRAMEH
#endif
#ifndef __WORKSPACEH
#include "workspace.h"
#define __WORKSPACEH
#endif

typedef struct montitor_t{
	long int	x;
	long int	y;
	long int	width;
	long int	height;
	int		cur_workspace_i;
	int		cur_frame_i;
} monitor_t;

typedef enum bool{false, true} bool;
bool running;
xcb_connection_t 	*con;
xcb_window_t		win;
xcb_screen_t		*screen;
xcb_generic_event_t	*Gevent;
workspace_t	 	workspaces[WORKSPACE_NUMBER];
long int 		root_width;
long int		root_height;
xcb_window_t		root_win;
monitor_t		mons[];

void init();
int  spawnWindow(xcb_create_notify_event_t *ev);
 



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

typedef enum bool{false, true} bool;
bool running;
xcb_connection_t 	*con;
//xcb_window_t		win;
xcb_screen_t		*screen;
xcb_generic_event_t	*Gevent;
//struct workspace 	*workspaces[WORKSPACE_NUMBER];
long int 		root_width;
long int		root_height;
xcb_window_t		root_win;

void init();
int  spawnWindow(xcb_create_notify_event_t *ev);
 



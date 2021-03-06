
#ifndef __COMMONH
#include "common.h"
#define __COMMONH
#endif

#ifndef __FRAMEH
#include "frame.h"
#define __FRAMEH
#endif

#ifndef __CONFIGH
#include "config.h"
#define __CONFIGH
#endif

#ifndef __WORKSPACEH
#define __WORKSPACEH
#endif

typedef struct workspace_t{
	int		id;
	char		name[20];
	int		index;
	int		client_count;
	struct frame_t	frames[10];
} workspace_t;

void newWorkspace(char name[], long int x, long int y);

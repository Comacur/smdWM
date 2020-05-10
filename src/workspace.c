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
#include "workspace.h"
#define __WORKSPACEH
#endif

#ifndef __SMDWMH
#define __SMDWMH
#include "smdWM.h"
#endif

int workspace_count=0;

void newWorkspace(char name[], long int x, long int y){
	workspaces[workspace_count].id = workspace_count;
	strncpy(workspaces[workspace_count].name, name, 20);
	workspaces[workspace_count].index = workspace_count;
	workspaces[workspace_count].client_count = 0;
	workspaces[workspace_count].frames[0] = newFrame(0,x,y,root_width,root_height);
	workspace_count++;
}

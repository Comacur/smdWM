#include "common.h"
#include "workspace.h"

typedef struct { 
	int  id;
	int  client_count;
	int  tiling_scheme;
	int  focused : 1;
	char name[];
} Workspace;

int WORKSPACE_i = 0;

Workspace workSpaces[MAX_WORKSPACES];

void newWorkspace(char name[], int id, int tiling_scheme){
	workSpaces[WORKSPACE_i].id = id;
	workSpaces[WORKSPACE_i].client_count = 0;
	workSpaces[WORKSPACE_i].tiling_scheme = tiling_scheme;
	workSpaces[WORKSPACE_i].focused = 0;
	strcpy(workSpaces[WORKSPACE_i].name, name);

	WORKSPACE_i++;
}



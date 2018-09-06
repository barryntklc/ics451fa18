#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <string.h>

#define SERVER 0
#define CLIENT 1
#define NOPICK -1

int RUNTYPE = NOPICK;

int main(int args, char **argv) {

    char arg_num[256];

    sprintf(arg_num, "%d", args);

    int i;
    // char string[256] = "";

    //gather args
    for (i = 1; i < args; i++) {
        if ((strcmp(argv[i], "-client") == 0) && RUNTYPE == NOPICK) {
            RUNTYPE = CLIENT;
        } else if ((strcmp(argv[i], "-server") == 0) && RUNTYPE == NOPICK) {
            RUNTYPE = SERVER;
        }
    }

    if (RUNTYPE == CLIENT) {
        printf("Starting client...\n");

        // TODO start the client

    } else if (RUNTYPE == SERVER) {
        printf("Starting server...\n");

        // TODO start the server
    } else {
        printf("No mode found. Quitting!");
    }
}

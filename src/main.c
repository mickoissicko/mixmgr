#include "../include/common.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc < 2)
        Help();

    printf("Loading...\n");

    if (
        !strcmp(argv[1], "/aur")
    ){
        if (argv[2] == NULL)
        {
            printf("You need to supply software name\n");
            exit(1);
        }

        char* Command;
        unsigned long Buf = {MAX_BUF};

        snprintf(Command, Buf, "");
    }

    else if (
        !strcmp(argv[1], "/install")
    ){
        printf("Preparing...\n");
        Install();
    }

    else if (
        !strcmp(argv[1], "/download")
    ){
        if (argc < 3)
        {
            printf("No program?\n");
            printf("View the program repository at the MMGR repo list\n");
            printf("You can also download the list via /download mmgr_repo_list\n");
            printf("The list can be seen at: https://mick.gdn/software/mmgr/list\n");

            exit(1);
        }

        Downloader(argv);
    }

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <sys/select.h>

int main(){
	fd_set rfds;
        struct timeval tv;
        int retval;

        FD_ZERO(&rfds);
        FD_SET(0, &rfds);

        tv.tv_sec = 10;
	retval = select(1, &rfds, NULL, NULL, &tv);

        if (retval == -1) {
	        printf("ERROR");
	}
        else if (retval) {
                printf("Data is available now.\n");
	}
        else {
                printf("No data within ten seconds.\n");
	}
        return 0;
}

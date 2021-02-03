#include <stdlib.h>
#include "towers.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    int n = 3;
    int from = 1;
    int dest = 2;
    

    if (argc == 2) {
        n = atoi(argv[1]);
    }

    else if (argc > 2){
	if (atoi(argv[2]) != atoi(argv[3])){
		n = atoi(argv[1]);
		from = atoi(argv[2]);
		dest = atoi(argv[3]);
	}
	else {
		fprintf(stderr, "Please insure that the tower numbers are 1, 2, or 3, and not the same number");
		exit(1);
	}
    }

    towers(n, from, dest);

    exit(0);
}


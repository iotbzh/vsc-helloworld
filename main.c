#include <stdio.h>

int main(int argc, char** argv)
{   
    int i;
    for (i=0; i<argc; i++) {
        printf("Arg %d: %s\n",i,argv[i]);
    }
    printf("Hello world!\n");
    return 0;
}

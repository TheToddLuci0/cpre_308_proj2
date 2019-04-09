#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int i = atoi(argv[1]);
    kill(i, 42);
}

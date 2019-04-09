#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void sighandler(int);

int main () {
   signal(42, sighandler);
    printf("%d\n", getpid());

   while(1) {
      printf("Going to sleep for a second...\n");
      sleep(1); 
   }
   return(0);
}

void sighandler(int signum) {
    if(signum == 42){
        printf("I got the signal!\n");
        exit(1);
    }
}

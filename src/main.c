#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

   if(argc == 1){
      printf("No user message specified - error condition\n");
      exit(1);
   }

   printf("Test Program has completed with user message: %s\n", argv[1]);
   exit(0);
}
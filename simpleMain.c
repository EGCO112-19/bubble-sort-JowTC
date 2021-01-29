#include <stdio.h>

#include <stdlib.h>
#include "bubble.h"
#include "selectsort"

int main(int argc, char * argv[]){
  printf("There are %d argument\n",argc);
    int *a, N, i;
    for(i=0;i<argc;i++){
      printf("argv %d:%s\n",i,argv[i]);

    }
    N=argc-1;
    a = (int*)malloc(N*sizeof(int));
    for(i = 1; i<argc; i++){
        
        a[i-1]=atoi(argv[i]);
    //atoiคือเปลี่ยนค่าจาก argument เป็น integer
    }
    bubble(a,N);
    //selectsort(a,N);
    return 0;
}
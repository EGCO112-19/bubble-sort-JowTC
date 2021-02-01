#include <stdio.h>
#include <stdlib.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

int main(int argc, char * argv[]){
  printf("There are %d argument\n",argc);
    int *a, N, i;
    for(i=0;i<argc;i++){
      printf("argv %d:%s\n",i,argv[i]);

    }
    N=argc-1;
    a = (int*)malloc(sizeof(int)*N);
    for(i = 1; i<argc; i++){
        
        a[i-1]=atoi(argv[i]);
    //atoiคือเปลี่ยนค่าจาก argument เป็น integer
    }
    if(argv[1]=="bubble"){
      bubble(a,N);
      break;
    }
       if(argv[1]=="selection"){
      selection(a,N);
      break;
    }
     if(argv[1]=="insertion"){
      insertion(a,N);
      break;
    }


    return 0;
}
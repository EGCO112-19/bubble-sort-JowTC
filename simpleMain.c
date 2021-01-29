#include <stdio.h>
#include <stdlib.h>
#include "bubble.h"

int main(int argc, char * argv[]){
    int *a, N, i;
    printf("How many numbers:");
    scanf("%d",&N);
    a = (int*)malloc(N*sizeof(int));
    for(i = 0; i<N; i++){
        printf("Enter integer of array: ");
        scanf("%d", a+i);
    }
    bubble(a,N);
    return 0;
}
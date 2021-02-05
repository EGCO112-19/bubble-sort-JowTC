//
//  main.c
//  First Program
//
//  Created by Mingmanas Sivaraksa on 31/12/2563 BE.
//

#include <stdio.h>
struct node
{
    int value;
    struct node *next;
};

int main() {
    struct node *head, a,b,c;
    
    a.value=5;
    b.value=7;
    c.value=9;
    
    head=&a;// head->a
    a.next=&b; // a->b
    b.next=&c; // b->c ->xx
    c.next=NULL; //head->a.next->b.next->c.next->NULL
    
    /*
     1. link head->a->b->c
        เชื่อมกันด้วย pointer
     2. print ทุกค่า ด้วย head
        printf("%d ", head-> ....);
     3. ใช้ loop ****
     */
printf("a=%d b=%d c=%d\n",a.value,b.value,c.value);
    printf("a=%d ",head->value);
    printf("b=%d ",head->next->value);
    printf("c=%d\n ",head->next->next->value);
    
    struct node *t;
    int i;
    t=head; //t=&a;
   /* for(i=0;i<3;i++){
        printf("%3d",t->value);
        t=t->next;
    }*/
    
    while(t/*!=NULL */){
       printf("%3d",t->value);
        t=t->next;
      
    }
    
    printf("\n");
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
typedef struct poly{
int coeff,expo;
struct poly *next;
}node;

void create(int c,int ex,node **temp){
    node *r,*z;
    z=*temp;
    if(z==NULL){
        r=(node*)malloc(sizeof(node));
        r->coeff=c;
        r->expo=ex;
    *temp=r;
    r->next=(node*)malloc(sizeof(node));
    r=r->next;
    r->next=NULL;
    }
    else{
        r->coeff=c;
        r->expo=ex;
        r->next=(node*)malloc(sizeof(node));
        r=r->next;
        r->next=NULL;
    }
}
void main(){
  node *poly1=NULL,*poly2=NULL,*poly=NULL;
  create(5,2,&poly1);
}
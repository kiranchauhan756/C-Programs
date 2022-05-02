#include<stdio.h>
#include<stdlib.h>

typedef struct llkist{
    int coeff;
    int varDeg;
    struct llkist *next; 
}poly;

poly *head=NULL,*temp,*ptr;

void InsertExp(poly **head,poly **temp){
      scanf("%d %d",&(*temp)->coeff,&(*temp)->varDeg);
      (*temp)->next=*head;
      *head=*temp;
}
void Traversal(poly *head,poly *temp,int term){
 printf("The experssion is\n");
   temp=head;
  for(int i=1;i<=term;i++){
   while(temp!=NULL){
       if(temp->next!=NULL){
       printf("%dX^%d + ",temp->coeff,temp->varDeg);
       }
       else{
            printf("%dX^%d ",temp->coeff,temp->varDeg); 
       }
       temp=temp->next;
   }
  }
}
void main(){
  int term;
  printf("Enter the number of terms of expression\n");
  scanf("%d",&term);
  for(int i=1;i<=term;i++){
      temp=(poly*)malloc(sizeof(poly));
       printf("Enter the coeffient,variable and degree of var of term %d\n",i);
     InsertExp(&head,&temp);
  }
   Traversal(head,temp,term);
   
}

#include<stdio.h>
#include<stdlib.h>
typedef struct llklist{
    int coeff;
    int varDeg;
    struct llklist *next;
}poly;

poly *head=NULL,*temp,*poly1=NULL,*poly2=NULL,*ptr=NULL;

void InsertExp(poly **head,poly **temp){
      scanf("%d %d",&(*temp)->coeff,&(*temp)->varDeg);
      (*temp)->next=*head;
      *head=*temp;
}
void Addition(poly **temp,poly **poly1,poly **poly2,poly **ptr){
   while((*poly1)->next && (*poly2)->next){
       if ((*poly1)->varDeg > (*poly2)->varDeg) {
            (*ptr)->varDeg = (*poly1)->varDeg;
            (*ptr)->coeff = (*poly1)->coeff;
            *poly1 =(*poly1)->next;
        }
 
        // If power of 2nd polynomial is greater then 1st,
        // then store 2nd as it is and move its pointer
        else if ((*poly1)->varDeg < (*poly2)->varDeg) {
            (*ptr)->varDeg = (*poly2)->varDeg;
            (*ptr)->coeff =(* poly2)->coeff;
            *poly2 = (*poly2)->next;
        }
 
        // If power of both polynomial numbers is same then
        // add their coefficients
        else {
            (*ptr)->varDeg = (*poly1)->varDeg;
            (*ptr)->coeff = (*poly1)->coeff + (*poly2)->coeff;
            *poly1 = (*poly1)->next;
            *poly2 = (*poly2)->next;
        }
 
        // Dynamically create new node
        (*ptr)->next = (poly*)malloc(sizeof(poly));
        *ptr = (*ptr)->next;
        (*ptr)->next = NULL;
    }
    while ((*poly1)->next || (*poly2)->next) {
        if ((*poly1)->next) {
            (*ptr)->varDeg = (*poly1)->varDeg;
            (*ptr)->coeff = (*poly1)->coeff;
            *poly1 = (*poly1)->next;
        }
        if ((*poly2)->next) {
            (*ptr)->varDeg = (*poly2)->varDeg;
            (*ptr)->coeff = (*poly2)->coeff;
            *poly2 = (*poly2)->next;
        }
        (*ptr)->next= (poly*)malloc(sizeof(poly));
        *ptr = (*ptr)->next;
        (*ptr)->next = NULL;
   }
}
void show(struct Node* node)
{
    while (node->next != NULL) {
        printf("%dx^%d", node->coeff, node->pow);
        node = node->next;
        if (node->coeff >= 0) {
            if (node->next != NULL)
                printf("+");
        }
    }
}

void main(){
    int express,term;
    printf("Enter the number of expressions to be add\n");
    scanf("%d",&express);
  for(int i=1;i<=express;i++){
 printf("Enter the number of terms of expression %d\n",i);
  scanf("%d",&term);
  for(int i=1;i<=term;i++){
      temp=(poly*)malloc(sizeof(poly));
       printf("Enter the coeffient,variable and degree of var of term %d\n",i);
     InsertExp(&head,&temp);
  }
  Addition(&temp,&poly1,&poly2,&ptr);
  }
}
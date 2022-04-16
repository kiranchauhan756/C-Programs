#include<stdio.h>
 struct Employee{
    int id;
    char name[20];
    float salary;
};struct Employee emp[5];
void main(){
    int i;
   for(i=1;i<=5;i++){
    printf("Enter the details of emp %d\n",i);
    scanf("%d%s%f",&emp[i].id,emp[i].name,&emp[i].salary);
   }
   for(i=1;i<=5;i++){
    printf(" \nthe details of emp %d\n",i);
    printf("%d\t %s\t %f",emp[i].id,emp[i].name,emp[i].salary);
   }
}
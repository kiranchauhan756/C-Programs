#include<stdio.h>
void main(){
    int n;
    printf("Enter the year\n");
    scanf("%d",&n);
    if(n%4==0 && (n%100!=0)||(n%400==0))
    printf("The year is leap year");
    else
    printf("The year is not a leap year");
}
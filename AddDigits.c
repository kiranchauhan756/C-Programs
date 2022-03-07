#include<stdio.h>
#include<math.h>
void factorial(int n,long fact);
void power(int x,int y);
void count(int p);
void main(){
    int ch,n,p;
    int x,y;
long fact=1;
    printf("Enter your choice : 1.Find factorial\n2.Power of x to y\n3.Count digits of num");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        factorial(n,fact);
        break;
        case 2:
        power(x,y);
        break;
        case 3:
        count(p);
        break;
        default:
        printf("Invalid choice \n");
    }
}
void factorial(int n,long fact){
    printf("Enter the num\n");
    scanf("%d",&n);
for(int i=1;i<=n;i++){
            fact=fact*i;          
        }
printf("Factorial=%ld",fact);
}
void power(int x,int y){
    double r;
    printf("Enter the base and pow\n");
    scanf("%d%d",&x,&y);
    r=pow(x,y);
    printf("%lf",r);
}
void count(int p){
    int count=0,rem;
    printf("Enter the digit\n");
    scanf("%d",&p);
    while(p!=0){
rem=p%10;
count++;
p=p/10;
    }
    printf("%d",count);
}
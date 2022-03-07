//Add two complex numbers 
#include<stdio.h> 
typedef struct complex{
    float real;
    float imag;
}complex;
void addition(complex num1,complex num2,complex *);
int main(){
    complex num1,num2,value;
    printf("Enter real and imag parts of first complex num\n");
    scanf("%f%f",&num1.real,&num1.imag);
      printf("Enter real and imag parts of first complex num\n");
    scanf("%f%f",&num2.real,&num2.imag);
    addition(num1,num2,&value);
    printf("result=%.1f+%.1fi",value.real,value.imag);
    return 0;
}
void  addition(complex num1,complex num2,complex *temp){
    temp->real=num1.real+num2.real;
    temp->imag=num1.imag+num2.imag;
}


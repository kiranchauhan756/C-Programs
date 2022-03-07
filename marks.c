#include<stdio.h>
#include<stdlib.h>
typedef struct result{
    char name[50];
    int age;
    int semester;
    int marks[5];
}res;
void main(){
    res results[3];
    int i,n=10;
    void inputMarks(int[] );
    void inputResult(res*);
    int findSum(res);
    void printMarks(int[]);
    void printResult(res*,int);
void StudentWithHighestmarks(res[],int);
void TotalMarksOfStudents(res[],int);
void StudentsWithMorethen50(res[],int);
for(i=0;i<n;i++){
    printf("%d.\n",i+1);
    inputResult(&results[i]);
    
}
    


}

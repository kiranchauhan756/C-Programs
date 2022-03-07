#include<stdio.h>
#include<string.h>
void InputString(char a[20],char b[20]);
void Length(char a[20],int l);
void CopyString(char a[20],char c[20]);
void CompareString(char a[20],char b[20]);
void ConcatenateString(char a[20],char b[20]);
void RevString(char d[20],char a[20]);
void main(){
    char a[20],b[20],c[20],d[20];
    int l;
    InputString(a,b);
    Length(a,l);
    CopyString(c,b);
    CompareString(a,b);
    RevString(d,a);
    ConcatenateString(a,b);
}
void InputString(char a[20],char b[20]){
 printf("Enter string\n");
    scanf("%s%s",a,b);
}
 void Length(char a[20],int l){
 l=strlen(a);
 printf("Length of string :%d\n",l);
}
void CopyString(char c[20],char b[20]){
    strcpy(c,b);
    puts(c);
    puts(b);
}
void CompareString(char a[20],char b[20]){
    if(strcmp(a,b)==0)
    printf("Strings are same\n");
    else
    printf("Strings are  not same\n");
}
void RevString(char d[20],char a[20]){
   strcpy(d,a);
    strrev(d);
    puts(d);
}
void ConcatenateString(char a[20],char b[20]){
    printf("%s",strcat(a,b));
}

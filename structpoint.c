#include<stdio.h>
#include<string.h>
struct book{
    int book_id;
    char book_name[100];
};
void main(){
    struct book *b1;
    b1->book_id=100;
    strcpy(b1->book_name,"c programming");
    printf("book_id=%d\t book_name=%s\n",b1->book_id,b1->book_name);
}

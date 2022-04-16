#include<stdio.h>
#include<string.h>
struct book{
    char book_author[100];
    char book_name[100];
};
void main(){
    struct book *book1;
strcpy(book1->book_author,"dennis ritchie");
 strcpy(book1->book_name,"c programming");
 printf(" book_author=%s\n",book1->book_author);  
 printf("book_name=%s",book1->book_name);

}


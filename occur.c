//memory allocation difference between structure and union
#include<stdio.h>
union uniJob{
	char name[32];  //32 byte highest
float salary;
int workerNo;
}unijob;
struct strJob{
	char name[32];   //32 bytes
float salary;     //4 byte
int workerNo;     //4 byte
}strjob;
int main(){
	printf("size of union=%d bytes\n",sizeof(unijob));
	printf("size of structure=%d bytes",sizeof(strjob));
return 0;	
	}

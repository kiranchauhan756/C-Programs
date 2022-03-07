#include<stdio.h>
void main(){
int m;
scanf("%d",&m);
int a[m],count[m],count1;
for(int i=0;i<m;i++)
scanf("%d",a[i]);
for(int i=0;i<m;i++){
    switch(a[i]){
case 1:
count1=0;
count[0]=count1++;
printf("%d",count[0]);
break;
case 2:
count1=0;
count[1]=count1++;
printf("%d",count[1]);
break;
case 3:
count1=0;
count[2]=count1++;
printf("%d",count[2]);
break;
case 4:
count1=0;
count[3]=count1++;
printf("%d",count[3]);
break;
case 5:
count1=0;
count[4]=count1++;
printf("%d",count[4]);
break;
        }}


}
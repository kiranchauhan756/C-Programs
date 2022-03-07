#include<stdio.h>
enum month{
    jan=1,
    feb,mar,apr,may,jun,jul,
    aug,sep,oct,nov,dec
};
void main(){
    int dd,mm,yy;
    printf("enter DOB\n");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    if(mm>=mar && mm<=jun)
    printf("You are born in summer season\n");
    else if(mm>=jul && mm<=oct)
    printf("You are born in rainy season\n");
        else if(mm>=nov && mm<=jan)
    printf("You are born in winter season\n");
}
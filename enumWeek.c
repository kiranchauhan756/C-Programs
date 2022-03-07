#include<stdio.h>
enum week{
    mon=1,
    tue,wed,thu,fri,sat,sun
};
void main(){
    int day;
    printf("enter day num\n");
    scanf("%d",&day);
    if(day==1)
    printf("Mondays are bad\n");
    else if(day>=2 && day<=4)
    printf("Midweeks are so-so\n");
        else if(day==5)
    printf("Fridays are better\n");
        else if(day==6 || day==7)
    printf("weekends are best\n");
}
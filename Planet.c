#include<stdio.h>
enum planet{
    mer=1,
    ven,earth,mar,jup,sat,ura,nep
};
void main(){
    int PlanetNum;
    printf("enter Planet num\n");
    scanf("%d",&PlanetNum);
    if(PlanetNum>=1 && PlanetNum<=3)
    printf("Planet is near\n");
    else if(PlanetNum>=4 && PlanetNum<=6)
    printf("Planet is  far \n");
        else if(PlanetNum==7 || PlanetNum==8)
    printf("Planet is  very far\n");
       
}
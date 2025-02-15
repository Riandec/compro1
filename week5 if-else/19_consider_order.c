#include<stdio.h>
void main(){
int x,y;
scanf("%d %d",&x,&y);
int m,n;
scanf("%d %d",&m,&n);
int pwood,lwood,pleft,lleft,pwant,lwant;
    pwood=(m*2)+(n*1);
    lwood=(m*6)+(n*4);
    pleft=x-pwood;
    lleft=y-lwood;
    pwant=pwood-x;
    lwant=lwood-y;
    if(x>=pwood && y>=lwood){
        printf("Yes %d %d",pleft,lleft);
    }else if(x>=pwood && y<lwood){
        printf("No 0 %d",lwant);
    }else if(x<pwood && y>=lwood){
        printf("No %d 0",pwant);
    }else{
        printf("No %d %d",pwant,lwant);
    }
}

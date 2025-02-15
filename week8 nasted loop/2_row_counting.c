#include<stdio.h>
void main(){
    int nr,nc,count=1;
    scanf("%d%d",&nr,&nc);

    for(int r=0;r<nr;r++){
        for(int c=0;c<nc;c++){
            printf("%d ",count);
            count++;
        }
    printf("\n");
    }
}

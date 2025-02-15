#include<stdio.h>
void main(){
    int nr,nc;
    scanf("%d%d",&nr,&nc);

    for(int r=0;r<=nr;r++){
        for(int c=0;c<=nc;c++){
            printf("(%d, %d) ",r,c);
        }
    printf("\n");
    }
}

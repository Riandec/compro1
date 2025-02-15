#include<stdio.h>
void main(){
    int nr,nc;
    scanf("%d%d",&nr,&nc);
    int a[nr][nc];

    for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(int j=0;j<nc;j++){
        for(int i=0;i<nr;i++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

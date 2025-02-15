#include<stdio.h>
void main(){
    int nr,nc;
    scanf("%d%d",&nr,&nc);
    int arr[nr][nc];

    for(int r=0;r<nr;r++){
        for(int c=0;c<nc;c++){
            arr[r][c]=0;
        }
    }
    // assign
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        int r,c;
        scanf("%d%d",&r,&c);
        arr[r-1][c-1]=i+1;
    }
    // display
    for(int r=0;r<nr;r++){
        for(int c=0;c<nc;c++){
            printf("%d ",arr[r][c]);
        }
        printf("\n");
    }
}

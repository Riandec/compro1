#include<stdio.h>
void main(){
    int nr,nc;
    scanf("%d%d",&nr,&nc);
    char arr[nr][nc];
    // initialization
    for(int r=0;r<nr;r++){
        for(int c=0;c<nc;c++){
            arr[r][c]='_';
        }
    }
    // assign x
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        arr[x-1][y-1]='x';
    }
    // output
    for(int r=0;r<nr;r++){
        for(int c=0;c<nc;c++){
            printf("%c",arr[r][c]);
        }
        printf("\n");
    }
}

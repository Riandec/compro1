#include<stdio.h>
void main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n][n];
    // input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // printf("|(%d,%d)-(%d,%d)|",i,j,j,i);
            // printf("|%d-%d|",arr[i][j]);
            sum+=abs(arr[i][j]-arr[j][i]);
        }
    }
    printf("%d",sum/2);
}

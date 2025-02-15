#include<stdio.h>
void main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n+1];
    for(int i=1;i<=n;i++){
        arr[i]=0;
    }

    for(int i=0;i<k;i++){
        int v;
        scanf("%d",&v);
        arr[v]++;
    }

    int maxscore=0,maxscore_ind=0;
    for(int j=1;j<=n;j++){
        if(arr[j]>maxscore){
            maxscore=arr[j];
            maxscore_ind=j;
        }
    }
    printf("%d\n%d",maxscore_ind,maxscore);
}

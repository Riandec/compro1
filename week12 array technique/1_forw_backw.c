#include<stdio.h>
void main(){
    int n,sum=0;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int m;
    scanf("%d",&m);

    for(int i=0;i<n;i++){
        if(m>0){
            sum=arr[i]+m;
            printf("%d ",sum);
        }
    }

    for(int i=n-1;i>=0;i--){
        if(m<0){
            sum=arr[i]+m;
            printf("%d ",sum);
        }
    }
}

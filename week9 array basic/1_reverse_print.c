#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int ind=0;ind<n;ind++){
        scanf("%d",&arr[ind]);
    }
    for(int ind=n-1;ind>=0;ind--){
        printf("%d ",arr[ind]);
    }
}

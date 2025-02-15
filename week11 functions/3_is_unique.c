#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int isUnique=1;
    for(int j=0;j<n;j++){
        int x=arr[j];
        int count=0;
        for(int i=j+1;i<n;i++){
            if(x==arr[i]){
                count++;
            }
        }
        if(count>0){
            isUnique=0;
            break;
        }
    }
    printf("%d",isUnique);
}

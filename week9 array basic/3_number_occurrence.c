#include<stdio.h>
int a[2500000];
void main(){
    int n,x,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(a[i]==x){
            printf("%d ",i+1);
            count++;
        }
    }
        if(count==0){
            printf("0");
        }
}

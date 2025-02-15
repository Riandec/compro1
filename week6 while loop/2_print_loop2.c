#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid input");
    }else{
        int i=1;
        while(i<=n){
            printf("%d\n",i);
            i++;
        }
    }
}

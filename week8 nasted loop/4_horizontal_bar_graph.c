#include<stdio.h>
void main(){
    int n;

    while(1){
        scanf("%d",&n);
        if(n<=0){
            break;
        }
        for(int column=1;column<=n;column++){
            printf("*");
        }
        printf("\n");
    }
}

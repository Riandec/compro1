#include<stdio.h>
void main(){
    int x,y;
    scanf("%d%d",&x,&y);

    if(x>y){
        printf("Invalid input");
    }else{
        int i=x;
        while(i>=x && i<=y){
            printf("%d ",i);
            i++;
        }
    }
}

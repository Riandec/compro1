#include<stdio.h>
void main(){
    int x,y,z,result;
    scanf("%d%d%d",&x,&y,&z);

    if(z==1){
        printf("%d",result=x+y);
    } else if(z==2){
        printf("%d",result=x-y);
    } else if(z==3){
        printf("%d",result=x*y);
    } else if(z==4){
        if(y==0){
                printf("cannot divide by zero");
        } else {
            printf("%d",result=x/y);
        }
    } else if(z==5){
        if(y==0){
            printf("cannot divide by zero");
        } else {
        printf("%d",result=x%y);
        }
    }
}

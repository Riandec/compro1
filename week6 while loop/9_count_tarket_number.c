#include<stdio.h>
void main(){
    int count=0,tarket;
    scanf("%d",&tarket);
    while(1){
        int x;
        scanf("%d",&x);

        if(x==0){
            break;
        }
        if(x==tarket){
            count+=1;
        }
    }
        if(count==0){
            printf("None");
        }else{
            printf("%d",count);
        }
}

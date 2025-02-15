#include<stdio.h>
void main(){
    int i=1,n=8,max=0,min=999999;
    while(i<=n){
        int x;
        scanf("%d",&x);

        if(x>0){
            if(x>max){
                max=x;
            }
            if(x<min){
                min=x;
            }
        }
        i++;
    }
    printf("%d\n%d",max,min);
}

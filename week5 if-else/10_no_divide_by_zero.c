#include<stdio.h>
void main(){
    float x,y,z;
    scanf("%f%f%f",&x,&y,&z);
    float result;

    if(z!=0){
        result=(x+y)/z;
        printf("%f",result);
    } else {
        printf("cannot divide by zero");
    }
}

#include<stdio.h>
void main(){
    int x,y,z,result;
    scanf("%d%d%d",&x,&y,&z);
    int result_x=x/3, result_y=y/4, result_z=z/2;

    if(result_x<result_y && result_x<result_z){
        result=result_x;
    }else if(result_y<result_x && result_y<result_z){
        result=result_y;
    }else{
        result=result_z;
    }
    printf("%d %d %d %d",result,x-result*3,y-result*4,z-result*2);
}

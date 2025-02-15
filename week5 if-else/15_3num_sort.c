#include<stdio.h>
void main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);

    if(x<y&&x<z&&y<z){
        printf("%d %d %d",x,y,z);
    }else if(y<x&&y<z&&x<z){
        printf("%d %d %d",y,x,z);
    }else if(z<x&&z<y&&y<x){
        printf("%d %d %d",z,y,x);
    }else if(x<z&&x<y&&z<y){
        printf("%d %d %d",x,z,y);
    }else if(y<z&&y<x&&z<x){
        printf("%d %d %d",y,z,x);
    }else if(z<x&&z<y&&x<y){
        printf("%d %d %d",z,x,y);
    }
}

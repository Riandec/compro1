#include<stdio.h>
void main(){
    int k,k1,k2;
    scanf("%d%d%d",&k,&k1,&k2);
    int s1,s2;
    scanf("%d%d",&s1,&s2);
    int g;
    scanf("%d",&g);

    if(k1<k && s1>=9 && g==1){
        printf("1");
    }else if(k2<k && s2>=9 && g==2){
        printf("2");
    }else if(s1>=9 && k1<k){
        printf("1");
    }else if(s2>=9 && k2<k){
        printf("2");
    }else if(k1==k && k2<k && s2>=9 && g==1){
        printf("2");
    }else if(k2==k && k1<k && s1>=9 &&g==2){
        printf("1");
    }else{
        printf("0");
    }
}

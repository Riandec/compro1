#include<stdio.h>
void main(){
    for(int i=1; i<=7; i++){
        int water,sugar,result;
        scanf("%d%d",&water,&sugar);
        int result_w=water/250, result_s=sugar/15;

        if(result_w<result_s){
            result=result_w;
        }else{
            result=result_s;
        }
        if(water-result*250>0){
            printf("%d water\n",result);
        }else{
            printf("%d\n",result);
        }
    }
}

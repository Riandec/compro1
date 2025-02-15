#include<stdio.h>
void main(){
    int target,consec=0,max_consec=0,count=0;
    scanf("%d",&target);

    while(1){
        int x;
        scanf("%d",&x);
        if(x==0){
            break;
        }
        if(x==target){
            consec++;
            if(consec>max_consec){
                max_consec=consec;
            }
            count++;
        }else{
            consec=0;
        }
    }
    printf("%d\n%d",max_consec,count);
}

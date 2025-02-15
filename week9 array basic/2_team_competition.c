#include<stdio.h>
void main(){
    int n,ts1=0,ts2=0;
    scanf("%d",&n);
    int a[n],b[n];
    //input
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    //compute
    for(int count=0;count<n;count++){
        if(a[count]>b[count]){
            ts1+=2;
        }else if(b[count]>a[count]){
            ts2+=2;
        }else if(a[count]==b[count]){
            ts1+=1;
            ts2+=1;
        }
    }
    //output
    if(ts1>ts2){
        printf("Team 1 wins\n");
        printf("Score %d to %d",ts1,ts2);
    }else if(ts2>ts1){
        printf("Team 2 wins\n");
        printf("Score %d to %d",ts2,ts1);
    }else{
        printf("Draw game\n");
        printf("Score %d to %d",ts1,ts2);
    }
}

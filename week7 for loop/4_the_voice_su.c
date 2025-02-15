#include<stdio.h>
void main(){
    int N,K,K1=0,K2=0;
    scanf("%d%d",&N,&K);

    for(int i=1; i<=N; i++){
        int gender,score1,score2;
        scanf("%d%d%d",&gender,&score1,&score2);

        if(score1>=9 && gender==1 && K1<K){
            printf("%d 1\n",i);
            K1++;
        }else if(score2>=9 && gender==2 && K2<K){
            printf("%d 2\n",i);
            K2++;
        }else if(score1>=9 && K1<K){
            printf("%d 1\n",i);
            K1++;
        }else if(score2>=9 && K2<K){
            printf("%d 2\n",i);
            K2++;
        }
    }
}

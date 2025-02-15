#include<stdio.h>
void main(){
    int A=1,B=1,C=1,N;
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        int day;
        scanf("%d",&day);

        if(A<=B && A<=C){
            printf("A\n");
            A+=day;
        }else if(B<=A && B<=C){
            printf("B\n");
            B+=day;
        }else{
            printf("C\n");
            C+=day;
        }
    }
}

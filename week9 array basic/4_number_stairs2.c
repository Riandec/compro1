#include<stdio.h>
void main(){
    int n=0;
    int arr[501];
    while(1){
        int x;
        scanf("%d",&x);
        if(x>=10||x<0){
            break;
        }
        arr[n]=x;
        n++;
    }

    int nAsterisk=1,nspace=n-1;
    for(int r=0;r<n;r++){
        for(int c=0;c<nspace;c++){
            printf(" ");
        }
        nspace--;
        for(int c=0;c<nAsterisk;c++){
            printf("%d",arr[r]);
        }
        nAsterisk++;
        printf("\n");
    }
}

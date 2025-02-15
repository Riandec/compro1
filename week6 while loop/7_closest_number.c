#include<stdio.h> // #include<limits.h>
void main(){
    int target, min=999999, min_x; // mindiff=INT_MAX
    scanf("%d",&target);
    int i=1, n=8;
    while(i<=n){
        int x;
        scanf("%d",&x);
        int diff = x-target; // abs(x-target)
        if(diff<0){
            diff=-1*diff;
        }
        if(diff<min){
            min=diff;
            min_x=x;
        }
        // printf("diff%d min%d\n",diff,min);
        i++;
    }
    printf("%d",min_x);
}

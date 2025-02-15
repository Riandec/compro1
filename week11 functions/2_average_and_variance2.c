#include<stdio.h>
int arr[8];
double average(int n){
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    double avg=sum/n;
    return avg;
}

double variance(double avg,int n){
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=(arr[i]-avg)*(arr[i]-avg);
    }
    double vrc=sum/(n-1);
    return vrc;
}

void main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //average
    double avg=average(n);
    //variance
    double vrc=variance(avg,n);

    printf("%.2lf %.2lf",avg,vrc);
}


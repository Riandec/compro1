#include<stdio.h>
typedef struct{
    int score[9];
} student;

void main(){
    int n,k,max_sumscore=0,max_sumscore_ind=0;
    scanf("%d%d",&n,&k);
    student student_array[n];
    for(int i=0;i<n;i++){
        int sum_score=0;
        for(int j=0;j<k;j++){
        scanf("%d",&student_array[i].score[j]);
        sum_score+=student_array[i].score[j];
        }
        if(sum_score>max_sumscore){
            max_sumscore=sum_score;
            max_sumscore_ind=i;
        }
    }
    int max_quizscore[k];
    for(int i=0;i<k;i++){
        max_quizscore[i]=0;
    }
    for(int j=0;j<k;j++){
        for(int i=0;i<n;i++){
            if(student_array[i].score[j]>max_quizscore[j]){
                max_quizscore[j]=student_array[i].score[j];
            }
        }
    }
    //printf("\n");
    for(int i=0;i<k;i++){
        printf("%d",max_quizscore[i]);
    }
    printf("\n%d",max_sumscore);
}

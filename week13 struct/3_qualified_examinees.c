#include<stdio.h>
typedef struct{
    char id[6];
    int score;
} student;

void main(){
    int n;
    scanf("%d",&n);
    student student_array[n];
    double sum=0;

    for(int i=0;i<n;i++){
        scanf("%s%d",student_array[i].id,&student_array[i].score);
        sum+=student_array[i].score;
    }

    double avg=sum/n;
    int count=0;
    for(int i=0;i<n;i++){
        if(student_array[i].score>=avg){
            count++;
        }
    }
    printf("%d\n",count);

    for(int i=0;i<n;i++){
        if(student_array[i].score>=avg){
            printf("%s\n",student_array[i].id);
        }
    }
}

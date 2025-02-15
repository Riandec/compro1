#include<stdio.h>
typedef struct{
    char id[9];
    char name[31];
    char surname[51];
    int year;
} student;
void main(){
    int n;
    scanf("%d",&n);
    student arr_student[n];
    for(int i=0;i<n;i++){
        scanf("%s%s%s%d" //s is string
          ,&arr_student[i].id,&arr_student[i].name
          ,&arr_student[i].surname,&arr_student[i].year);
    }

    int target_year;
    scanf("%d",&target_year);
    int count=0;

    for(int i=0;i<n;i++){
        if(arr_student[i].year==target_year){
        printf("%s %s %s\n",
               arr_student[i].id,arr_student[i].name,arr_student[i].surname);
               count++;
        }
    }
    if(count==0){
        printf("None");
    }
}

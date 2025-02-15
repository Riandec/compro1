#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            scanf("%d",&arr[r][c]);
        }
    }
    //center
    int npeak=0;
    for(int cenR=1;cenR<n-1;cenR++){
        for(int cenC=1;cenC<n-1;cenC++){
            //printf("certer %d,%d\n",cenR,cenC);

            //side area
            int count=0;
            for(int r=cenR-1;r<=cenR+1;r++){
                for(int c=cenC-1;c<=cenC+1;c++){
                    //printf("%d ",arr[r][c]);
                    if(arr[cenR][cenC]>arr[r][c]){
                        count++;
                    }
                }
                //printf("\n");
            }
            if(count==8){
                npeak++;
                //printf("%d %d %d\n",arr[cenR][cenC],cenR,cenC);
            }
        }
    }
    printf("%d\n",npeak);

    for(int cenR=1;cenR<n-1;cenR++){
        for(int cenC=1;cenC<n-1;cenC++){

            int count=0;
            for(int r=cenR-1;r<=cenR+1;r++){
                for(int c=cenC-1;c<=cenC+1;c++){
                    if(arr[cenR][cenC]>arr[r][c]){
                        count++;
                    }
                }
            }
            if(count==8){
                //npeak++;
                printf("%d %d %d\n",arr[cenR][cenC],cenR,cenC);
            }
        }
    }
}

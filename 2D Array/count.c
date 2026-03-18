#include <stdio.h>
int main(){
    int a[3][3];
    int i,j;
    int postiveCnt=0,negativeCnt=0,neutralCnt=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nElements of matrix are:- \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j]>0){
                postiveCnt++;
            }
            else if(a[i][j]<0){
                negativeCnt++;
            }
            else{
                neutralCnt++;
            }
        }
    }
    printf("\nNumber of postive elements:- %d",postiveCnt);
    printf("\nNumber of negative elements:- %d",negativeCnt);
    printf("\nNumber of zeros in matrix:- %d",neutralCnt);
    return 0;
}
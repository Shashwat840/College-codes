#include <stdio.h>
int main(){
    int a[3][3];
    int i,j,max;
    printf("\nEnter the elements of matrix :- ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    max = a[0][0];
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(max < a[i][j]){
                max = a[i][j];
            }
        }
    }
    printf("\nThe max element in array is:- %d",max);
    return 0;
}
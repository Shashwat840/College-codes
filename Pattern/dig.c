#include <stdio.h>
int main(){
    int i,j,k;
    int dig =0,n=5;
    for(i=1;i<=n;i++){
        dig++;
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for (j=1;j<=i;j++)
        {
            printf("%d ",dig);
        }
        printf("\n");
    }
    return 0;
}
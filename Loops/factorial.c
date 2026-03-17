#include <stdio.h>
int main(){
    int multi = 1;
    int i,no;
    printf("\nEnter number:- ");
    scanf("%d",&no);
    for(i=1;i<=no;i++){
        multi = multi*i;
    }
    printf("Factorial of %d = %d",no,multi);
    return 0;
}
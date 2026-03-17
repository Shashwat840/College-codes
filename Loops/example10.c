#include <stdio.h>
int main(){
    int a;
    float sum =0;
    printf("\nEnter the end point:- ");
    scanf("%d",&a);
    for (int i = 1; i <= a; i++)
    {
        sum = sum + (1.0/i);
    }
    printf("\nSum = %.2f",sum);
    return 0;
}
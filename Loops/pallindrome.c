#include <stdio.h>
int main(){
    int num,r=0,no;
    int sum =0;
    printf("\nEnter number:- ");
    scanf("%d",&num);
    no = num;
    while(num>0){
        r = num%10;
        sum = sum*10 + r;
        num = num/10;
    }   
    if(sum == no){
        printf("\n%d is a pallindrome number",no);
    }
    else{
        printf("\n%d is not a pallindrome number",no);
    }
    return 0;
}
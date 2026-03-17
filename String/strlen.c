//Find length of string without strlen
#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    int len=0;
    printf("\nEnter string:- ");
    gets(str);
    for(int i =0; str[i]!= '\0';i++){
        len++;
    }
    printf("\nLength of string is:- %d",len);
    return 0;
}
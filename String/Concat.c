//Make a program to concatenate two strings without using library function.
#include <stdio.h>
#include <string.h>
int main(){
    char str1[20],str2[20],str3[40];
    printf("\nEnter first string:- ");
    gets(str1);
    printf("\nEnter second string:- ");
    gets(str2);
    int i=0,j=0;
    while(str1[i]!='\0'){
        str3[i]=str1[i];
        i++;
    }
    while(str2[j]!='\0'){
        str3[i]=str2[j];
        i++;
        j++;
    }
    str3[i]='\0';
    printf("\nConcatenated string is:- %s",str3);
    return 0;
}
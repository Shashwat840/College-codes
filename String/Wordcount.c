#include <stdio.h>
#include <string.h>

int main(){
    int len,count=0,i;
    char str[30];
    printf("\nEnter string:- ");
    gets(str);
    len = strlen(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("\nNumber of words in a string are:- %d",count);
    return 0;
}
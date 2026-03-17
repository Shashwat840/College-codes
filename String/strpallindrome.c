#include <stdio.h>
#include <string.h>
int main(){
    char str[20],rev[20];
    int len,i=0,j=0;
    printf("\nEnter string :- ");
    gets(str);
    len = strlen(str);
    for(i=len-1;str[i]!= '\0';i--){
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';
    if(strcmp(str,rev)==0){
        printf("\nIt is a pallindrome string...");
    }else{
        printf("\nIt is not a pallindrome string...");
    }
   return 0; 
}
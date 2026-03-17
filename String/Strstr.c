#include <stdio.h>
#include <string.h>
int main(){
    int search[10] , found[10];
    printf("\nEnter the string:- ");
    gets(search);
    printf("\nEnter the string you want to search:- ");
    gets(found);
    if(strstr(search,found)==NULL){
        printf("\nString not found..");
    }else{
        printf("\nString found...");
    }
}
#include <stdio.h>
int main(){
    int evenCount=0,oddCount=0;
    for(int i =1;i<=10;i++){
        if(i%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }   
    printf("\nNumber of even elements:- %d",evenCount);
    printf("\nNumber of odd count:- %d",oddCount);
    return 0;
}
#include <stdio.h>

void printString(char arr[]);

int main (){

char firstname[] = "meher";
char middlename[] = "nigar";
char lastname[]="puspo";

printString(firstname);
printString(middlename);
printString(lastname);


return 0 ;


}

void printString(char arr[]){
    for(int j = 0 ; arr[j] != 0 ; j++){
        printf("%c",arr[j]);
    }
printf(" ");
}

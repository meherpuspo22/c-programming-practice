#include <stdio.h>
//declare/prototype
void namaste();
void bonjur();

//function call
int main(){
    printf("enter f for French and i for Indian:");
    char ch ;
    scanf("%c",&ch);

    if (ch=='i'){
        printf("namaste\n");
    }
    else {
        printf("bonjur");
    }


    return 0 ;
}

// decleration 
void namaste(){
    printf("namaste!\n");

}

void bonjur(){
    printf("bonjur!\n");


}
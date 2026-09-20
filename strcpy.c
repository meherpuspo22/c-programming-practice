#include<stdio.h>
#include<string.h>

int main(){
char oldstr[] ="oldstring";
char newstr[] = "newstring";
strcpy(oldstr,newstr);

//printf("%s",oldstr);
puts(oldstr);

return 0 ; 

}
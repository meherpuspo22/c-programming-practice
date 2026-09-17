#include <stdio.h>

float convertTemp(float celcius);

int main (){

float fahr = convertTemp(37);
printf("fahr is =%.3f",fahr);

return 0;

}
float convertTemp(float celcius){
    float fahr = celcius * (9.0/5.0) + 32 ;
    return fahr ;

}
#include <stdio.h>

float calcPercentage(float math ,float chem ,float phy);

int main(){
    float  percentage = calcPercentage(90.0,98.0,97.0);
    printf("percentage is =%.2f ", percentage); 


}

float calcPercentage(float math ,float chem, float phy){
    float percentage = ((math + chem + phy)/300.0 )*100 ; 
    return percentage ;
}
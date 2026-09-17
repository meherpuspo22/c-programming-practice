#include<stdio.h>

float calcPercen(float math, float phy ,float chem);

int main(){
float math = 98;
float phy = 99;
float chem = 96;
float percen = calcPercen(math,phy,chem);
printf("%.3f",percen);
return 0;

}
float calcPercen(float math ,float phy ,float chem){

float percen = ((math+phy+chem)/300)*100 ;
return percen;

}
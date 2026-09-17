#include<stdio.h>


void area_of_circle();
void area_of_rectan();
void area_of_sqr();

int main (){

    
area_of_circle();
area_of_rectan();
area_of_sqr();


    return 0;
}

void area_of_circle(){
    
    float r =4.00;
        printf("circle area is =%.3f\n",3.1416*r*r);
}
void area_of_rectan(){
     int a = 5;
     int b = 6;

    printf("rectan area is =%d\n",a*b);

}
void area_of_sqr(){
    int m = 3;
    
    printf("area is =%d\n",m*m);

}
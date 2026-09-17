#include <stdio.h>

float areacircle(float rad);
float arearectan(float a, float b);
float areasqr(float side );

int main (){
    float r = 5.00;
    printf("area of circle is =%.3f\n",areacircle(r));

    float a= 6;
    float b = 7;
    printf("area of rectan is =%.3f\n",arearectan(a,b));

    float i = 4;
    printf("area of sqr is=%f\n",areasqr(i));


}

float areacircle(float rad){
    return 3.14*rad*rad;
}
float arearectan(float a, float b){
    return a*b;

}
float areasqr(float side ){
    return side*side;

}

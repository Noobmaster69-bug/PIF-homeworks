#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    float delta;
    float x1;
    float x2;
    printf("ax^2 + bx + c =0 \na= ");
    scanf("%f",&a);
    printf("b= ");
    scanf("%f",&b);
    printf("c= ");
    scanf("%f",&c);
    delta=b*b-4*a*c;
    x1=(-b-sqrt(delta))/(2*a);
    x2=(-b+sqrt(delta))/(2*a);
    printf("x1= %.4f \nx2= %.4f",x1,x2);
}
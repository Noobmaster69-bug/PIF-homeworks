#include <stdio.h>
typedef struct 
{
    double real;
    double image;
}complex;

 complex sum(complex a,complex b){
    complex c;
    c.real=a.real+b.real;
    c.image=a.image+b.image;
    return c;
}
complex difference(complex a,complex b){
    complex c;
    c.real=a.real-b.real;
    c.image=a.image-b.image;
    return c;
}
complex product(complex a, complex b){
    complex c;
    c.real=a.real*b.real-a.image*b.image;
    c.image=a.real*b.image+a.image*b.real;
    return c;
}
void print(complex a){
    printf("%f+j*%f",a.real,a.image);
}
int main(){
    complex a;
    a.real=3;
    a.image=2;
    complex b;
    b.real=1;
    b.image=5;
   print(product(a,b));
}

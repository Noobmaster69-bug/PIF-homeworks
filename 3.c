#include <stdio.h>
int main(){
    int a;
 	printf("nhap so tien: ");
 	scanf("%d",&a);
 	printf("so dong tien nho nhat: %d",a/10+(a%10)/5 +(a%5)/2 + a%2);
}
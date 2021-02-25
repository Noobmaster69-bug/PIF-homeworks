#include <stdio.h>

int main(){
 	double y,i,x,factor;
 	y=1;
 	factor=1;
 	x=1;
 	for (i=1; i<11;i++){
 	    x=x*2;
		factor=factor*i;
	    y+=x/factor;
	}	
	printf("e^2 = %.4lf", y);
 }
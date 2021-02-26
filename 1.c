#include <stdio.h>
int main(){
    int a;
    printf("nhap chieu cao: ");
    scanf("%d",&a);
    for(int i=0; i<a; i++){
    	printf("\n       ");
    	for(int j=0; j<a-i;j++){
             printf(" ");
    	}
    for(int j=0; j<2*i+1;j++){
             printf("#");
    	}
    }
}

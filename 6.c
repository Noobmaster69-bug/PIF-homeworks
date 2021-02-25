#include <stdio.h>
#include <string.h>
int main(){
 	char a[100],kt;
 	int len,st=0,skt=0;
 	printf("nhap chuoi: ");
 	gets(a);
 	len= strlen(a);
 	printf("nhap ki tu: ");
 	scanf("%c",&kt);
 	if(a[0]!=' ') st=1;
  	for(int i=0;i<len;i++){
	    if((a[i]==' ') && (a[i+1]!=' '))  st++;
	    if(a[i]==kt) skt++;
	}
	if(a[len-1]==0x20) st--;
	printf("so tu: %d \n",st);
	printf("so ki tu '%c': %d ",kt,skt);
 
}
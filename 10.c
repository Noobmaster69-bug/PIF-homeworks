#include<stdio.h>
#include<string.h>
#include<ctype.h>
void decoder(char* str,int len,char n){
    for(int i=0;i<len;i++){
        if(islower(str[i])) str[i]=(str[i]-'a'+n)%26+'a';
        else if(isupper(str[i])) str[i]=(str[i]-'A'+n)%26+'A';
    }
}
void encoder(char* str,int len,char n){
    decoder(str,len,26-n);
}
int main(){
    //char str[]="THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG"; //test
    char str[100];
    printf("nhap chuoi: ");
    gets(str);
    encoder(str,strlen(str),3);
    printf("%s\n",str);
    decoder(str,strlen(str),3);
    printf("%s\n",str);
}
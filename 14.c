#include <stdbool.h>
#define MAX 100
typedef struct{
    int top;
    int data[MAX];
} stack;
int isEmpty(stack a){
    return(a.top==0);
}
int isFull(stack a){
    return (a.top==MAX);
}
void push(stack a,int data){
    a.data[a.top]=data;
    a.top++;
}
int pull(stack a){
    a.top--;
    return a.data[a.top+1];
}
int main(){
    
}
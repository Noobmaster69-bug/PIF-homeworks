#include <stdio.h>

// 4 5
int max(int *a,int size){
    int max=a[0];
    for (long int i=0;i<size;i++){
        if(max<a[i]) max=a[i];
    }
    return max;
}
int min(int* a,int size){
    int min=a[0];
    for (long int i=0;i<size;i++){
        if(min>a[i]) min=a[i];
    }
    return min;
}
int sum(int* a,int size){
    int sum=0;
    for(int i=0;i<size;i++)
        sum+=a[i];
    return sum;
}
float avg(int* a,int size){
    return ((float)sum(a,size))/((float)size);
}

// 7-8
typedef enum {false,true} bool;
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void bubble_sort(int* a,int size){
    bool haveswaped;
    do{
        haveswaped=false;
        for(int i=0;i<size-1;i++){
            if(a[i]>a[i+1]) {
                swap(&a[i],&a[i+1]);
                haveswaped=true;
            }
        }
    } while(haveswaped);
    
}
int min_i(int* a,int size){
    int min_i=0;
    int min=a[0];
    for (int i=0;i<size;i++){
        if(min>a[i]) {
            min=a[i];
            min_i=i;
        }
    }
    return min_i;
}
void selection_sort(int* a,int size){
    for(int i=0;i<size;i++){
        swap(&a[i],&a[min_i(&a[i],size-i)+i]);
    }
}
void print(int* a,int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[10]={2134,234,54,654,23,424,53,124,54,1};
    int b[10]={2134,234,54,654,23,424,53,124,54,1};
    printf("max= %d\n",max(a,10));
    printf("min= %d\n",min(a,10));
    printf("sum= %d\n",sum(a,10));
    printf("avg= %f\n",avg(a,10));
    selection_sort(a,10);
    bubble_sort(b,10);
    print(a,10);
    printf("\n");
    print(b,10);

}
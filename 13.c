#include <stdio.h>
typedef struct{
    double m[100][100];
    int col;
    int row;
} matrix;
void print(matrix a){
    if((a.col==0)&&(a.row==0)) printf("demention error");
    else{
        for(int i=0;i<a.row;i++){
            for (int j=0;j<a.col;j++){
                printf("%5.2f ",a.m[i][j]);
            }
            printf("\n");
        }
    }
}
matrix transpose(matrix a){
    matrix c;
    if (a.col!=a.row){
        c.col=0;
        c.row=0;
        return;
    }
    else{
        c.col=a.col;
        c.row=a.row;
        for (int i = 0; i < a.col; i++) {
            for (int j = 0; j < c.row; j++) {
            c.m[i][j]=a.m[j][i];
            }
        }   
        return c;
    }
}
int main(){
    matrix b;
    b.row=3;
    b.col=3;
    b.m[0][0]=-2;
    b.m[0][1]=3;
    b.m[0][2]=1;
    b.m[1][0]=-4;
    b.m[1][1]=0;
    b.m[1][2]=3;
    b.m[2][0]=2;
    b.m[2][1]=-3;
    b.m[2][2]=4;
    print(b);
    printf("-----------------\n");
    print(transpose(b));
}
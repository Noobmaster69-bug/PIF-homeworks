#include <stdio.h>
typedef struct{
    double m[100][100];
    int col;
    int row;
} matrix;
matrix sum(matrix a,matrix b){
    matrix c;
    if ((a.col!=b.col)&(a.row!=b.row)){
        c.col=0;
        c.row=0; //this is demention error when print matrix to the screen
        return c;
    } 
    else{
        c.col=a.col;
        c.row=a.row;
        for(int i=0;i<c.col;i++){
            for (int j=0;j<c.row;j++){
                c.m[i][j]=a.m[i][j]+b.m[i][j];
            }
        }
        return c;
    }
}
matrix difference(matrix a,matrix b){
    matrix c;
    if ((a.col!=b.col)&(a.row!=b.row)){
        c.col=0;
        c.row=0;
        return c;
    } 
    else{
        c.col=a.col;
        c.row=a.row;
        for(int i=0;i<c.col;i++){
            for (int j=0;j<c.row;j++){
                c.m[i][j]=a.m[i][j]-b.m[i][j];
            }
        }
        return c;
    }
}
matrix product(matrix a,matrix b){
    matrix c;
    if (a.col!=b.row){
        c.col=0;
        c.row=0;
        return c;
    }
    else{
        c.col=b.col;
        c.row=a.row;
        for(int i=0;i<a.row;i++){
            for(int j=0;j<b.col;j++){
                c.m[i][j]=0;
            }
        }
        for(int i=0;i<c.row;i++){
            for(int j=0;j<c.col;j++){
                for(int k=0;k<a.col;k++){
                    c.m[i][j]+=a.m[i][k]*b.m[k][j];
                }
            }
        }
        return c;
    }

}
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
int main(){
    matrix a;
    a.row=2;
    a.col=3;
    a.m[0][0]=1;
    a.m[0][1]=3;
    a.m[0][2]=-2;
    a.m[1][0]=4;
    a.m[1][1]=0;
    a.m[1][2]=-3;
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
    print(product(a,b));
}
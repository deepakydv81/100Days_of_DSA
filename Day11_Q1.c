#include<stdio.h>

//Problem: Write a program to perform addition of two matrices having the same dimensions. The sum of two matrices is obtained by adding corresponding elements of the matrices.

void matrix_addition(int x,int y,int arr1[x][y],int arr2[x][y]){
    int arr[x][y];
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            arr[i][j]=arr1[i][j]+arr2[i][j];
        }   
    }
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int arr1[x][y];
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    int arr2[x][y];
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    
    matrix_addition(x,y,arr1,arr2);
    return 0;
    
}
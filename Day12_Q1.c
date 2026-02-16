#include<stdio.h>
/*Problem: Write a program to check whether a given matrix is symmetric. A matrix is said to be 
symmetric if it is a square matrix and is equal to its transpose (i.e., element at position [i][j] is equal to element at position [j][i] for all valid i and j).
*/

void symmetric(int size,int colsize,int arr[][100]){
    int symmetry=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < colsize; j++){
            if (arr[i][j]!=arr[j][i]){
                symmetry=1;
                break;}
        }
    }
    
    if (symmetry==0)
    {
        printf("Yes");
    }
    else{
        printf("no");
    }
    
}

int main() {
    int matSize,matColSize;
    scanf("%d %d",&matSize,&matColSize);

    int Arr[matSize][100];
    for (int i = 0; i < matSize; i++)
    {
        for (int j = 0; j < matColSize; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }
    symmetric(matSize,matColSize, Arr);
}
#include<stdio.h>


int isToeplitzMatrix(int matrixSize, int matrixColSize,int matrix[][100]) {
    
    int m=matrixSize;
    int n = matrixColSize;
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(matrix[i][j] != matrix[i - 1][j - 1]){
                return 0;
            }}}

    return 1;
}
int main(){
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
    
    printf("%d",isToeplitzMatrix(matSize, matColSize,Arr));

}

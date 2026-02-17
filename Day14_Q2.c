#include<stdio.h>

void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    
    int n = matrixSize;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        int left = 0, right = n - 1;
        while (left < right) {
            int temp = matrix[i][left];
            matrix[i][left] = matrix[i][right];
            matrix[i][right] = temp;
            left++;
            right--;
        }
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

    rotate(Arr,matSize,matColSize);
}
#include<stdio.h>
#include<stdbool.h>
//

int main() {

    int matSize;
    scanf("%d",&matSize);

    int Arr[matSize][matSize];
    for (int i = 0; i < matSize; i++)
    {
        for (int j = 0; j < matSize; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }


    bool isIdentity = true;
    
    for (int i = 0; i < matSize && isIdentity; i++) {
        for (int j = 0; j < matSize; j++) {
            if (i == j) {
                if (Arr[i][j] != 1) {
                    isIdentity = false;
                    break;
                }
            } else {
                if (Arr[i][j] != 0) {
                    isIdentity = false;
                    break;
                }
            }
        }
    }
    
    printf("%s\n", isIdentity ? "Identity Matrix" : "Not an Identity Matrix");
    
}
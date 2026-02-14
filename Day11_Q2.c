#include<stdio.h>

void transpose(int x,int y,int arr[x][y]){
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d ",arr[j][i]);
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

    transpose(x,y,arr1);
    return 0;
}
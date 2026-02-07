#include<stdio.h>

void move_zero(int arr[],int size){


    int pos=0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]!=0)
        {
            arr[pos++]=arr[i];
        }
    }

    while (pos < size) {
        arr[pos++] = 0;
    }


    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}

int main() {


    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter values of array : ");
    for (int i = 0; i < size; i++){
        scanf("%d",&arr[i]);    }
    
    move_zero(arr,size);

    return 0;
}
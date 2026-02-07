#include<stdio.h>
//Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

void Dubli_remove(int arr[],int size){
    int temp;
    for (int i = 0; i < size; i++)
    {
        int count=0;
        temp=arr[i];
        for (int j = i; j < size; j++)
        {
            if (arr[j]==temp)
            {
                count++;
            }
        }
        if (count==1)
        {
            printf("%d  ",arr[i]);
        }
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
    Dubli_remove(arr,size);
    return 0;
}
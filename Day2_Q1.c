#include<stdio.h>

//Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int Index;
    scanf("%d",&Index);
    size--;
    for (int i = Index-1; i <size; i++)
    {
        arr[i]=arr[i+1];
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    


    return 0;
}
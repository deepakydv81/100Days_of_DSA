#include<stdio.h>

//Problem
/*Write a C program to insert an element x at a given 1-based position pos in an array of n integers.
 Shift existing elements to the right to make space.*/

int main() {
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter values of array : ");
    for (int i = 0; i < size; i++){
        scanf("%d",&arr[i]);    }
    int value,index;
    printf("Enter the value you want to add : ");
    scanf("%d",&value);
    printf("Enter the index where you want to assign the value : ");
    scanf("%d",&index);
    size++;
    for (int i = size-1; i>index; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=value;
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}
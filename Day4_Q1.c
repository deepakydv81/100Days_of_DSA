#include<stdio.h>
//Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.
void Reverse_array(int arr[],int size){
    int start=0;
    int end=size-1;
    int c;
    while(start<=end){
        c=arr[end];
        arr[end]=arr[start];
        arr[start]=c;
        start++;
        end--;
    }
}

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    Reverse_array(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

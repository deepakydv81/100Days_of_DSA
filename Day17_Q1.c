//Problem: Write a program to find the maximum and minimum values present in a given array of integers.
#include <stdio.h>

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    int max=-10000000;
    int min=TMP_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }
    
    printf("Minimum : %d\n",min);
    printf("Maximum : %d\n",max);
    return 0;
}
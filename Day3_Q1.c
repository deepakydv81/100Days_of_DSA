#include<stdio.h>
//Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

void Linear_search(int arr[],int size,int key){
    int compare=1;
    int index;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            index=i;
            break;
        }
        compare++;
    }
    printf("Found at index : %d , Compare %d times",index,compare);
}

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
    Linear_search(arr,size,key);

    return 0;
}
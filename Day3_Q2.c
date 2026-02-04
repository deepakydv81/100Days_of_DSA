#include<stdio.h>

long long missingNum(int *arr, int size) {
    long long sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    long long Expected_sum=((long long)(size+1)*(size+2))/2;
    long long Value=Expected_sum-sum;
    return Value;
}


int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",missingNum(arr,size));
    return 0;
}
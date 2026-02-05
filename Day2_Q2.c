#include<stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int max_diff=prices[0],j=0;
    for(int i=0;i<pricesSize;i++){
        if(prices[i]<max_diff){
            max_diff=prices[i];
        }
        if(prices[i]-max_diff>j){
            j=prices[i]-max_diff;
        }
    }
    return j;
}


int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("%d",maxProfit(arr,size));
    return 0;
}
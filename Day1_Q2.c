#include<stdio.h>
#include<stdlib.h>
//Q2
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int x,y;
    int* ot=malloc(2*sizeof(int));
    *returnSize=2;
    for(int i=0;i<numsSize;i++){
        for(int j=i;j<numsSize;j++){
            if(nums[i]+nums[j]==target && i!=j){
                ot[0]=i;
                ot[1]=j;
                return ot;
            }
        }
    }
    return NULL;
}

int main() {
    int size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter values of array : ");
    for (int i = 0; i < size; i++){
        scanf("%d",&arr[i]);    }
    int target;
    printf("Enter the target : ");
    scanf("%d",&target);

    int returnsize;
    int* result =twoSum(arr,size,target,&returnsize);
    
    if (result != NULL) {
        printf("Index: %d, %d\n", result[0], result[1]);
    } else {
        printf("No solution found.\n");
    }


    return 0;
}
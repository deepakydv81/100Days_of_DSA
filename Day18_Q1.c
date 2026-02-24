#include <stdio.h>
#include <stdlib.h>

void reverse(int* nums, int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

int* rotateArray(int* nums, int numsSize, int k, int* returnSize) {
    *returnSize = numsSize;
    int* result = (int*)malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        result[i] = nums[i];
    }

    k = k % numsSize;

    reverse(result, 0, numsSize - 1);

    reverse(result, 0, k - 1);
    
    reverse(result, k, numsSize - 1);

    return result;
}

int main() {
    int size;
    scanf("%d",&size);
    int nums[size];
    for (int i = 0; i < size; i++){
        scanf("%d",&nums[i]);
    }
    
    int n = size, k ;
    scanf("%d",&k);
    int returnSize;
    int* rotated = rotateArray(nums, n, k, &returnSize);

    for (int i = 0; i < returnSize; i++) {
        printf("%d ", rotated[i]);
    }
    free(rotated);
    return 0;
}
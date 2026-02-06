#include<stdio.h>
#include<stdlib.h>

void removeElement(int* nums, int numsSize, int val) {
    int* out=malloc(numsSize*sizeof(int));
    int j=0;
    for(int i=0;i<numsSize;i++){
        if(val!=nums[i]){
            out[j++]=nums[i];
        }
    }
    
    for (int i = 0; i < j; i++) {
        printf("%d ", out[i]);
    }
    printf("\n");

    free(out);
    
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

    removeElement(arr,size,target);
    return 0;
}
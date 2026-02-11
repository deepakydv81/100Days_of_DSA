#include<stdio.h>
#include<stdlib.h>

/*void intersection(int arr1[],int size1,int arr2[],int size2){
    int arr[20];
    int x=0;
    int* visited = calloc(size2, sizeof(int));


    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if ( !visited[j]   &&  arr1[i]==arr2[j])
            {
                arr[x]=arr1[i];
                x++;
                visited[j] = 1; 
                break;          

            }
        }
        
    }
        for (int i = 0; i < x; i++)
        {
            printf("%d ",arr[i]);
        }
    
}*/

/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

    int* arr=malloc(sizeof(int) * nums1Size);
    int x=0;
    int *visited = calloc(nums2Size,sizeof(int));
    for(int i=0;i<nums1Size;i++){
        for(int j=0;j<nums2Size;j++){
            if( !visited[j] && nums1[i]==nums2[j]){
                arr[x]=nums1[i];
                x++;
                visited[j]=1;
                break;
            }
        }
    }
    *returnSize=x;
    free(visited);
    return arr;
}

    

int main() {
    int size1;
    scanf("%d",&size1);
    int arr1[size1];
    for (int i = 0; i < size1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    int size2;
    scanf("%d",&size2);
    int arr2[size2];
    for (int i = 0; i < size2; i++)
    {
        scanf("%d",&arr2[i]);
    }


    printf(arr1,size1,arr2,size2,0);

    return 0;
}
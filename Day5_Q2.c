#include<stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}


int main() {
    int m,n;
    scanf("%d %d",&m,&n);

    int arr1[m];
    for (int i = 0; i<m; i++)
    {
        scanf("%d",&arr1[i]);
    }
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr2[i]);
    }


    return 0;
}
#include <stdio.h>

//Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

void merge(int arr1[],int m,int arr2[],int n){
    int arr[m+n];
    int i=0,j=0;
    int k=0;
    while (i<m && j<n)
    {
        if (arr1[i]>=arr2[j])
        {
            arr[k++]=arr2[j++];
        }
        else{
            arr[k++]=arr1[i++];}
    }

    while (i < m) {
        arr[k++] = arr1[i++];
    }


    while (j < n) {
        arr[k++] = arr2[j++];
    }

    
    for (int i = 0; i < (m+n); i++)
    {
        printf("%d ",arr[i]);
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

    merge(arr1,m,arr2,n);
 
    return 0;
}
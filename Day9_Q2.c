#include<stdio.h>

void reverseString(char str[],int size){
    char c;
    int end=size-1,start=0;
    while (start<=end)
    {
        c=str[end];
        str[end]=str[start];
        str[start]=c;
        end--;
        start++;
    }
    printf("%s",str);
}

int main() {


    char str[50];
    scanf("%s",str);
    int size;
    scanf("%d",&size);
    reverseString(str,size);
    

    return 0;

}
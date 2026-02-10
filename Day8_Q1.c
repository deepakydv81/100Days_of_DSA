#include<stdio.h>

int powerr(int n,int x){
    if (x==0)
    {   return 1;   }
    return n*powerr(n,x-1);
}

int main() {
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);

    int x;
    printf("Enter exponent : ");
    scanf("%d",&x);

    printf("%d",powerr(a,x));
    return 0;
}
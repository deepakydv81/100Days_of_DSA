#include<stdio.h>


bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
        return (n & (n - 1)) == 0;
}

int main() {

    int n;
    scanf("%d",&n);

    printf("%d",ispower(n));
    return 0;
}
#include<stdio.h>


int fib(int n){
    if(n<=0){
        return n;
    }
    int a=0,b=1;
    int c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}

int main() {
    int x;
    scanf("%d",&x);
    printf("%d",fib(x));
}
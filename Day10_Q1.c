#include<stdio.h>
#include<string.h>
//Problem: Read a string and check if it is a palindrome using two-pointer comparison.

void palindrome(char s[]){
    int palindrome=1;
    int start=0;
    int end = strlen(s) -1;
    while (start<=end)
    {
        if (s[start]!=s[end])
        {
            palindrome=0;
            break;
        }
        start++;
        end--;
    }
    if (palindrome==1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    
}

int main() {

    char s[100];
    scanf("%s",s);
    palindrome(s);

    return 0;
}

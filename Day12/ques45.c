#include <stdio.h>

int palindrome(int n){int rev=0,t=n;while(t){rev=rev*10+t%10;t/=10;}return rev==n;}
int main(){int n;scanf("%d",&n);printf(palindrome(n)?"Palindrome":"Not Palindrome");}
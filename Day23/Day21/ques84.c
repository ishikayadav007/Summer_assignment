#include <stdio.h>
#include <string.h>
int main(){char s[200];fgets(s,200,stdin);int n=strlen(s);if(s[n-1]=='\n')n--;for(int i=n-1;i>=0;i--)putchar(s[i]);}
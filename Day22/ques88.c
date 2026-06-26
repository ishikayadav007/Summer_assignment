#include <stdio.h>
#include <string.h>
int main(){char s[200],t;fgets(s,200,stdin);int n=strlen(s)-1;for(int i=0;i<n/2;i++){t=s[i];s[i]=s[n-1-i];s[n-1-i]=t;}printf("%s",s);}
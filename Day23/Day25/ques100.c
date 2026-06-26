#include <stdio.h>
#include <string.h>
int main(){char s[200];fgets(s,200,stdin);int n=strlen(s);printf("%d",n>0?n-1:0);}
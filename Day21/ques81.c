#include <stdio.h>
#include <string.h>
int main(){char s[200];fgets(s,200,stdin);printf("%lu",strlen(s)-1);}
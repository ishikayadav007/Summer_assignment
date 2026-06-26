#include <stdio.h>
#include <string.h>
int main(){char s[200];fgets(s,200,stdin);for(int i=0;s[i];i++)if(s[i]>='0'&&s[i]<='9')putchar(s[i]);}
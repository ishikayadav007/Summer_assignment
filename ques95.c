#include <stdio.h>
#include <string.h>
int main(){char s[200];fgets(s,200,stdin);for(int i=0;s[i];i++)if(s[i]==' ')s[i]='_';printf("%s",s);}
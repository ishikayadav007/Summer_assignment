#include <stdio.h>
#include <string.h>
int main(){char s[200],ch;fgets(s,200,stdin);scanf(" %c",&ch);int c=0;for(int i=0;s[i];i++)if(s[i]==ch)c++;printf("%d",c);}
#include <stdio.h>
#include <string.h>
int main(){char s[200],ch;fgets(s,200,stdin);scanf(" %c",&ch);for(int i=0;s[i];i++)if(s[i]==ch){printf("%d",i);return 0;}printf("-1");}
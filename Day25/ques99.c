#include <stdio.h>
#include <string.h>
int main(){char s[200];fgets(s,200,stdin);char m=127;for(int i=0;s[i]&&s[i]!='\n';i++)if(s[i]<m)m=s[i];printf("%c",m);}
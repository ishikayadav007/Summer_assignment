#include <stdio.h>
#include <string.h>
int main(){char s[200];fgets(s,200,stdin);int n=strlen(s);for(int i=0;i<n;i++)if(s[i]>='A'&&s[i]<='Z')s[i]+=32;else if(s[i]>='a'&&s[i]<='z')s[i]-=32;printf("%s",s);}
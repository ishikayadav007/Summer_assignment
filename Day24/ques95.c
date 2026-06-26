#include <stdio.h>
#include <string.h>
int main(){char s[200];fgets(s,200,stdin);int n=strlen(s);for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(s[i]>s[j]){char t=s[i];s[i]=s[j];s[j]=t;}printf("%s",s);}
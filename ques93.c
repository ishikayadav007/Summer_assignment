#include <stdio.h>
int main(){char s[200];int f[256]={0};fgets(s,200,stdin);for(int i=0;s[i];i++)f[(unsigned char)s[i]]++;for(int i=0;i<256;i++)if(f[i])printf("%c:%d\n",i,f[i]);}
#include <stdio.h>
#include <string.h>
int main(){char s[200];fgets(s,200,stdin);int d=0,l=0;for(int i=0;s[i];i++){if(s[i]>='0'&&s[i]<='9')d++;if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))l++;}printf("Letters=%d Digits=%d",l,d);}
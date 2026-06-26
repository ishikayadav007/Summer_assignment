#include <stdio.h>
#include <string.h>
int main(){char s[200];fgets(s,200,stdin);int l=0,r=strlen(s)-2,p=1;while(l<r){if(s[l++]!=s[r--]){p=0;break;}}printf(p?"Palindrome":"Not Palindrome");}
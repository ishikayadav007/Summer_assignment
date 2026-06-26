#include <stdio.h>
#include <ctype.h>
int main(){char s[200];int v=0,c=0;fgets(s,200,stdin);for(int i=0;s[i];i++){char ch=tolower(s[i]);if(ch>='a'&&ch<='z'){if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')v++;else c++;}}printf("Vowels=%d Consonants=%d",v,c);}
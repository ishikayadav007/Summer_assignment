#include <stdio.h>
#include <string.h>
int main(){char a[100],b[100];fgets(a,100,stdin);fgets(b,100,stdin);a[strcspn(a,"\n")]=0;b[strcspn(b,"\n")]=0;printf("%d",strcmp(a,b)==0);}
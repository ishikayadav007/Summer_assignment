#include <stdio.h>
int main(){char s[200];fgets(s,200,stdin);int w=0,in=0;for(int i=0;s[i];i++){if(s[i]!=' '&&s[i]!='\n'&&!in){w++;in=1;}else if(s[i]==' ')in=0;}printf("%d",w);}
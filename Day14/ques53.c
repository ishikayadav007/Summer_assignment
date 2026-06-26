#include <stdio.h>
int main(){int n,a[100],x;scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);for(int i=0;i<n;i++)if(a[i]==x){printf("%d",i);return 0;}printf("-1");}
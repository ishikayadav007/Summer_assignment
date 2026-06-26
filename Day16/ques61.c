#include <stdio.h>
int main(){int n,a[100],sum=0;scanf("%d",&n);for(int i=0;i<n-1;i++){scanf("%d",&a[i]);sum+=a[i];}printf("%d",n*(n+1)/2-sum);}
#include <stdio.h>
int main(){int n,a[100],sum=0;scanf("%d",&n);for(int i=0;i<n;i++){scanf("%d",&a[i]);sum+=a[i];}printf("Sum=%d\nAverage=%.2f",sum,(float)sum/n);}
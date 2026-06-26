#include <stdio.h>

int perfect(int n){int sum=1;for(int i=2;i<=n/2;i++) if(n%i==0) sum+=i; return sum==n && n!=1;}
int main(){int n;scanf("%d",&n);printf(perfect(n)?"Perfect":"Not Perfect");}
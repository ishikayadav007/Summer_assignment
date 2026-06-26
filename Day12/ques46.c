#include <stdio.h>

int armstrong(int n){int t=n,s=0,d;while(t){d=t%10;s+=d*d*d;t/=10;}return s==n;}
int main(){int n;scanf("%d",&n);printf(armstrong(n)?"Armstrong":"Not Armstrong");}
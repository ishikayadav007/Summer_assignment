#include <iostream>
#include <vector>
using namespace std;int main(){int n;cin>>n;vector<int>a(n);for(int&i:a)cin>>i;int s=0;for(int x:a)s+=x;cout<<"Sum="<<s<<"\n";}
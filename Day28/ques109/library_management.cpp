#include <iostream>
#include <vector>
using namespace std;struct Book{int id;string title;};
int main(){vector<Book>b;int n;cin>>n;for(int i=0;i<n;i++){Book x;cin>>x.id>>x.title;b.push_back(x);}for(auto &x:b)cout<<x.id<<" "<<x.title<<"\n";}
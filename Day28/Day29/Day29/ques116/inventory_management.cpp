#include <iostream>
#include <vector>
using namespace std;struct Item{int id,qty;string name;};
int main(){vector<Item>v;int n;cin>>n;for(int i=0;i<n;i++){Item t;cin>>t.id>>t.name>>t.qty;v.push_back(t);}for(auto &x:v)cout<<x.id<<" "<<x.name<<" "<<x.qty<<"\n";}
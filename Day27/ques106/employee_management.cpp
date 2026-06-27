#include <iostream>
#include <vector>
using namespace std;
struct Employee{int id;string name;};
int main(){vector<Employee> e;int n;cin>>n;for(int i=0;i<n;i++){Employee x;cin>>x.id>>x.name;e.push_back(x);}for(auto &x:e)cout<<x.id<<" "<<x.name<<"\n";}
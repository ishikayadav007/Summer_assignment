#include <iostream>
#include <vector>
using namespace std;struct Employee{int id;string name;};int main(){vector<Employee>v;int n;cin>>n;while(n--){Employee e;cin>>e.id>>e.name;v.push_back(e);}for(auto &x:v)cout<<x.id<<" "<<x.name<<"\n";}
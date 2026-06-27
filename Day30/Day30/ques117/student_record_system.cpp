#include <iostream>
#include <vector>
using namespace std;struct Student{int id;string name;};int main(){vector<Student>v;int n;cin>>n;while(n--){Student s;cin>>s.id>>s.name;v.push_back(s);}for(auto &x:v)cout<<x.id<<" "<<x.name<<"\n";}
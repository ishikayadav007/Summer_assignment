#include <iostream>
#include <vector>
using namespace std;
struct Student{int id;string name;float marks;};
int main(){vector<Student> s;int n;cout<<"Students: ";cin>>n;for(int i=0;i<n;i++){Student t;cin>>t.id>>t.name>>t.marks;s.push_back(t);}for(auto &x:s)cout<<x.id<<" "<<x.name<<" "<<x.marks<<"\n";}
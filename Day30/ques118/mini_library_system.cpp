#include <iostream>
#include <vector>
using namespace std;struct Book{int id;string title;};int main(){vector<Book>v;int n;cin>>n;while(n--){Book b;cin>>b.id>>b.title;v.push_back(b);}for(auto &x:v)cout<<x.id<<" "<<x.title<<"\n";}
#include <iostream>
#include <vector>
using namespace std;struct Contact{string name,phone;};
int main(){vector<Contact>c;int n;cin>>n;for(int i=0;i<n;i++){Contact x;cin>>x.name>>x.phone;c.push_back(x);}for(auto &x:c)cout<<x.name<<" "<<x.phone<<"\n";}
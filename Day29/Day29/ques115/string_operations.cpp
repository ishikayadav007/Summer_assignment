#include <iostream>
#include <algorithm>
using namespace std;int main(){string s;getline(cin,s);cout<<"Length="<<s.size()<<"\n";reverse(s.begin(),s.end());cout<<s;}
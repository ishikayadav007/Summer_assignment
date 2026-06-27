#include <iostream>
#include <string>
using namespace std;
int main(){string a;int score=0;
cout<<"Capital of India? ";cin>>a;if(a=="Delhi"||a=="delhi")score++;
cout<<"2+2? ";cin>>a;if(a=="4")score++;
cout<<"Score: "<<score<<"/2";
return 0;}
#include <iostream>
using namespace std;
int main(){double bal=10000;int ch;double amt;
do{cout<<"\n1.Deposit\n2.Withdraw\n3.Balance\n4.Exit\nChoice: ";cin>>ch;
switch(ch){
case 1:cin>>amt;bal+=amt;break;
case 2:cin>>amt;if(amt<=bal) bal-=amt; else cout<<"Insufficient\n";break;
case 3:cout<<"Balance: "<<bal<<endl;break;
}}while(ch!=4);return 0;}
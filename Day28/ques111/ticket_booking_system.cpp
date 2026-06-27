#include <iostream>
using namespace std;int main(){int seats=10,b;cout<<"Seats:"<<seats<<"\n";cin>>b;if(b<=seats){seats-=b;cout<<"Booked\nRemaining:"<<seats;}else cout<<"Not enough seats";}
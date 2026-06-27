#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){srand(time(0));int target=rand()%100+1,g;
cout<<"Number Guessing Game\n";
do{cout<<"Enter guess: ";cin>>g;
if(g<target) cout<<"Too Low\n";
else if(g>target) cout<<"Too High\n";
else cout<<"Correct!\n";
}while(g!=target);return 0;}
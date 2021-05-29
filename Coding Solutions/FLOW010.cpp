//Dev Wadhwa
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T!=0)
	{
	    char ch;
	    cin>>ch;
	    ch=tolower(ch);                         //Case is changed so that 'B' and 'b' get converted to 'b' thus reducing lines of code
	    switch(ch)
	    {
	        case 'b':
	        cout<<"BattleShip\n";
	        break;
	        case 'c':
	        cout<<"Cruiser\n";
	        break;
	        case 'd':
	        cout<<"Destroyer\n";
	        break;
	        case 'f':
	        cout<<"Frigate\n";
	        break;
	    }
	    T--;
	}
	return 0;
}

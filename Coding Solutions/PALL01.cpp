//Dev Wadhwa
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T!=0)
	{
	    string n,rev;
	    cin>>n;
	    rev=string(n.rbegin(),n.rend());              //To reverse the string
	    if(n==rev)
	    cout<<"wins\n";
	    else
	    cout<<"loses\n";
	    T--;
	}
	return 0;
}

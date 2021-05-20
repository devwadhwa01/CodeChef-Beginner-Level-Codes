//Dev Wadhwa
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T!=0)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a+b+c!=180)
	    cout<<"NO\n";
	    else
	    cout<<"YES\n";
	    T--;
	}
	return 0;
}

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
	    if((a>=b && b>=c) || (c>=b&&b>=a))
	    cout<<b<<endl;
	    if((b>=c && c>=a) || (a>=c&&c>=b))
	    cout<<c<<endl;
	    if((c>=a&&a>=b) || (b>=a&&a>=c))
	    cout<<a<<endl;
	    T--;
	}
	return 0;
}

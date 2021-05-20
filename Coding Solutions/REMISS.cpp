//Dev Wadhwa
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T!=0)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a>b)
	    cout<<a;
	    else
	    cout<<b;
	    cout<<" "<<a+b<<endl;
	    T--;
	}
	return 0;
}

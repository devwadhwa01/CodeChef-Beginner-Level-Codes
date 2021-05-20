//Dev Wadhwa
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T!=0)
	{
	    int n;
	    cin>>n;
	    int fact=1;
	    for(int i=n;i>=1;i--)
	    {
	        fact*=i;
	    }
	    cout<<fact<<endl;
	    T--;
	}
	return 0;
}

//Dev Wadhwa
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T!=0)
	{
	    int n,flag=1;
	    cin>>n;
	    if(n<=1)
	    flag=0;
	    else
	    {
	        for(int i=2;i<n;i++)
	        {
	            if(n%i==0)
	            {
	                flag=0;
	                break;
	            }
	        }
	    }
	    if(flag==0)
	    cout<<"no\n";
	    else
	    cout<<"yes\n";
	    T--;
	}
	return 0;
}

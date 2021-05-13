//Dev Wadhwa
#include <iostream>
using namespace std;
#include<string.h>

int main() {
	int T;
	cin>>T;
	while(T!=0)
	{
	    char n[50];
	    cin>>n;
	    int c=0;
	    for(int i=0;i<strlen(n);i++)
	    {
	        if(n[i]=='4')
	        {
	            c++;
	        }
	    }
	    cout<<c<<"\n";
	    T--;
	}
	return 0;
}


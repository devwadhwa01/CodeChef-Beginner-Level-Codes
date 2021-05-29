//Dev Wadhwa
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T!=0)
	{
	    int n,c=0,i=0;
	    cin>>n;
	    int notes[]={100,50,10,5,2,1};
	    while(n!=0)
	    {
	        c+=n/notes[i];
          n%=notes[i];
	        i++;
	    }
	    cout<<c<<endl;
	    T--;
	}
	return 0;
}

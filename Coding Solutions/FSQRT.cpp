//Dev Wadhwa
#include <iostream>
using namespace std;
#include<math.h>          //To be able to use sqrt()
int main() {
	int T;
	cin>>T;
	while(T!=0)
	{
	    int n;
	    cin>>n;
	    cout<<round(sqrt(n))<<endl;
	    T--;
	}
	return 0;
}

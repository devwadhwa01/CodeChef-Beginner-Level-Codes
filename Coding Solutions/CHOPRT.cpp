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
        cout<<">\n";
        else if(a<b)
        cout<<"<\n";
        else
        cout<<"=\n";
        T--;
    }
	return 0;
}

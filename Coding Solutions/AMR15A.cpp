//Dev Wadhwa
#include <iostream>
using namespace std;

int main() {
    int n,even=0,odd=0;
    cin>>n;
    int weapon[n];
    for(int i=0;i<n;i++)
    {
        cin>>weapon[i];
        if(weapon[i]%2==0)
        even++;
        else
        odd++;
    }
    if(even>odd)
    cout<<"READY FOR BATTLE";
    else
    cout<<"NOT READY";
	return 0;
}

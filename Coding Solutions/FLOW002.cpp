//Dev Wadhwa
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);             //For Fast I/O
    cin.tie(NULL);                                //For Fast I/O
    int T;
    cin>>T;
    while(T!=0)
    {
        int a,b;
        cin>>a>>b;
        cout<<a%b<<"\n";
        T--;
    }
    return 0;
}

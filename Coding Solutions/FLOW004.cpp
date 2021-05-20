//Dev Wadhwa
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T!=0)
    {
        char n[50];
        cin>>n;
        cout<<(int)n[0]-48 + (int)n[strlen(n)-1]-48 <<"\n";             //While conversion to int, 1 becomes 49, 2 becomes 50, and so on, hence 48 is subtracted
        T--;
    }
    return 0;
}

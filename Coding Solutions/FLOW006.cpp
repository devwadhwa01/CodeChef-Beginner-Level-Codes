//Dev Wadhwa
#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T!=0)
    {
        int n,sum=0;
        cin>>n;
        for(int i=0;i<7;i++)
        {
            sum=sum+n%10;
            n=n/10;
        }
        cout<<sum<<endl;
        T--;
    }
    return 0;
}

//Dev Wadhwa
#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>                 //Used to increase precision as 100 factorial has more than 150 digits, 'int' cannot store it
using namespace boost::multiprecision;                      //Used to increase precision as 100 factorial has more than 150 digits, 'int' cannot store it
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T!=0)
    {
        int n;
        cpp_int fact=1;                                     //cpp_int is used instead of int (check header file)
        cin>>n;
        if(n!=0)
        {
            for(int i=1;i<=n;i++)
            {
                fact=fact*i;
            }
        }
        cout<<fact<<"\n";
        T--;
    }
    return 0;
}

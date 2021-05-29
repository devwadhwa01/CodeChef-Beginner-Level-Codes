//Dev Wadhwa
#include <iostream>
using namespace std;

int sum_func(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    sum+=i;
    return sum;
}

int main() {
    int T;
    cin>>T;
    while(T!=0)
    {
        int d,n;
        cin>>d>>n;
        for(int i=0;i<d;i++)
        {
            n=sum_func(n);
        }
        cout<<n<<endl;
        T--;
    }
	return 0;
}

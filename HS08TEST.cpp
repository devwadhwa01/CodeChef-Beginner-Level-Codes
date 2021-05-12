#include <iomanip>
#include <iostream>
using namespace std;

int main() 
{
	int amt;
	float initial, final;
	cin>>amt>>initial;
	if(amt%5==0 && amt<=(initial-0.5))
	{
	  final=initial-0.5-amt;
	  cout<<fixed;
	  cout<<setprecision(2);
	  cout<<final;
	}
	else
	{
	  cout<<fixed;
	  cout<<setprecision(2);
	  cout<<initial;
	}
	return 0;
}

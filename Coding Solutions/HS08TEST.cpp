//Dev Wadhwa
#include <iomanip>					//To be able to use fixed and setprecision()
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
	  cout<<fixed;					//To round off to 2 decimal places
	  cout<<setprecision(2);			//To round off to 2 decimal places
	  cout<<final;					//To round off to 2 decimal places
	}
	else
	{
	  cout<<fixed;					
	  cout<<setprecision(2);			
	  cout<<initial;
	}
	return 0;
}

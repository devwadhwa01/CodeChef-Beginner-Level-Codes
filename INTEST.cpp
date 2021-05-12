//Dev Wadhwa
#include <bits/stdc++.h>   //Used for Fast I/O
using namespace std;       
int main() {
	ios_base::sync_with_stdio(false);       //Used for Fast I/O
	cin.tie(NULL);                          //Used for Fast I/O
  int n, k;
	cin >>n>>k;
	int ans=0;
	for (int i=0;i<n;i++) {
		int t;
		cin >> t;
		if (t % k == 0) {
			ans++;
		}		
	}
  cout << ans << "\n";		
	return 0;
}

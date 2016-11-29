#include<bits/stdc++.h>

using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--) {
		long long int n, b, m, ans = 0;
		cin>>n>>b>>m;
		while(n > 0) {
			if(n % 2 == 0) {
				ans += (n / 2) * m;
				n /= 2;
			} else {
				ans = ans + (((n + 1) / 2) * m);
				n = n - ((n + 1) / 2);
			}
			ans += b;
			m = m * 2;
		}
		cout<<ans - b<<endl;
	}
	return 0;
}


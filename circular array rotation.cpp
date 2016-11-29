#include<bits/stdc++.h>

using namespace std;

int main() {

	int n, k, q, i;
	cin >> n >> k >> q;
	int a[n];
	
	for(i = 0 ; i < n ; i++) 
		cin >> a[i];
	
	while(q--) {
		int p;
		cin >> p;
		p = p + k - 1;
		if(p >= n) {
			p = p - (n - 1);
		}
		cout << a[p] << endl;
	}
	
	return 0;
}


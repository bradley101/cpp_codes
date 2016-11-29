#include<bits/stdc++.h>

using namespace std;

int main() {

	int t;
	scanf("%d",&t);
	while(t--) {
		int n, i;
		scanf("%d",&n);
		long long int a[n], sum = 0, diff, sum1;
		
		for(i = 0 ; i < n ; i++) {
			scanf("%lld",&a[i]);
			sum += a[i];
		}
		
		bool done = false;
		
		if(n == 2) {
			cout << a[0] << endl;
			done = true;
		} else {
			for ( i = 0 ; i < n ; i++ ) {
				diff = i > 1 ? (a[0] - a[1]) : i == 0 ? (a[1] - a[2]) : (a[0] - a[2]);
				
				diff = abs(diff);
				
				if(i == 0) {
					sum1 = (n - 1) * (a[1] + ((n - 1) * diff)) / 2;
					if(sum - a[i] == sum1) {
						cout << a[i] << endl;
						done = true;
						break;
					}
				} else {
					sum1 = (n - 1) * (a[0] + ((n - 1) * diff)) / 2;
					if(sum - a[i] == sum1) {
						cout << a[i] << endl;
						done = true;
						break;
					}
				}
			}
		}
		if(!done) {
			cout << "-1" << endl;
		}
	}
	return 0;
}


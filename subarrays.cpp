#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int n, k, i, j;
	cin>>n;
	long long int a[n];
	for(i = 0 ; i < n ; i++) {
		cin>>a[i];
	}
	cin>>k;
	for(i = 0 ; i <= (n - k) ; i++) {
		long long int maxn = LONG_MIN;
		for(j = 0 ; j < k ; j++) {
			if(a[i + j] > maxn) {
				maxn = a[i + j];
			}
		}
		cout<<maxn<<" ";
	}
	cout<<endl;
	return 0;
}

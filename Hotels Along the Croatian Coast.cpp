#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int n, m;
	cin>>n>>m;
	long long int a[n], s = 0, e;
	long long int ans = 0, num;
	
	for(s = 0 ; s < n ; s++) {
		cin>>a[s];
	}
	
	s = 0;
	
	for(s = 0 ; s < n ; s++) {
		if(a[s] <= m) {
			ans = a[s];
			break;
		}
	}
	
	for(e = s + 1 ; e < n ; e++) {
		if(ans + a[e] <= m) {
			ans += a[e];
		} else {
			break;
		}
	}
	
	num = ans;
	
	while(s < n && e < n) {
		num = num - a[s];
		while(num + a[e] <= m) {
			num += a[e];
			e++;
		}
		
		if(ans < num && num <= m) {
			ans = num;
		}
		s++;
	}
	
	cout<<ans<<endl;
	return 0;
}

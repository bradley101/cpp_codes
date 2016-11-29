//       ACCEPTED SPOj 14-09-2016

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		long long int a, b;
		cin>>a;
		for(b = 0 ; b <= pow(10, 12) && (b * b) <= a ; b++) {
			double x = sqrt(a - (b * b));
			if(x == ceil(x)) {
				cout<<"Yes"<<endl;
				break;
			}
		}
		if(b * b > a) {
			cout<<"No"<<endl;
		}
	}
}

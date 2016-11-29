#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int sum = +1, n = +1, c = +2;
	for(int i = 1 ; i <= (1001/2) ; i++) {
		for(int j = 1 ; j <= 4 ; j++) {
			n = n + c;
			sum = sum + n;
		}
		c = c * 2;
	}
	cout<<sum;
	return 0;
}

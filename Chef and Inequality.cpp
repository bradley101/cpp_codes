#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;

lli getno(lli a, lli b) {
	return b - a + 1;
}

lli getsum(lli a, lli b, lli n) {
	return (n / 2) * (a + b);
}

int main() {

	int t;
	cin >> t;
	while(t--) {
		lli a, b, c, d, ans = 0;
		cin >> a >> b >> c >> d;
		if (d < a) {
			ans = 0;
		} else {
			if (b < c) {
				ans = (b - a + 1) * (d - c + 1);
			} else {
				if (a < c) {
					ans = (c - a) * (d - c + 1);
					ans += getsum(d - c, d - b, b - c + 1);
				} else if (a == c) {
					if (b < d) {
						ans = getsum(d - a, d - b, b - a + 1);
					} else if (b == d) {
						ans = getsum(b - a, 1, b - a);
					} else {
						ans = getsum(d - a, 1, d - a);
					}
				} else {
					if (d == a) {
						//     c     d=a     b
						ans = 0;
					} else if (d < a) {
						//     c     d      a      b
						ans = 0;
					} else {
						//     c     a      d      b
						if (b > d) {
							ans = getsum(d - a, 1, d - a);
						} else if (b == d) {
							//     c      a      b=d
							ans = getsum(b - a, 1, b - a);
						} else {
							//     c      a      b      d
							ans = getsum(d - a, d - b, b - a + 1);
						}
 					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}


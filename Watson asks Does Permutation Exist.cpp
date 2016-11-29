#include<bits/stdc++.h>

#define in(n) scanf("%d",&n)
#define inl(n) scanf("%ld",&n)
#define inll(n) scanf("%lld",&n)
#define ins(s) scanf("%s",s)
#define out(n) printf("%d",n)
#define outl(n) printf("%ld",n)
#define outll(n) printf("%lld",n)
#define outs(n) printf("%s",s)
#define br printf("\n")

#define max(x, y) x>y?x:y
#define min(x, y) x<y?x:y
typedef long long int lli;
using namespace std;
int main() {

	int t;
	in(t);
	while(t--) {
		int n, i;
		in(n);
		lli a[n];
		for(i = 0 ; i < n ; i += 1) {
			inll(a[i]);
		}
		sort(a, a + n);
		bool correct = true;
		for(i = 0 ; i < n - 1; i += 1) {
			if(abs(a[i] - a[i + 1])> 1) {
				correct = false;
				break;
			}
		}
		if(correct) {
			printf("YES");
		} else {
			printf("NO");
		}
		br;
	}

	return 0;
}



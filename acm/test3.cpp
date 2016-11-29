#include<stdio.h>
#include<math.h>
#include<string.h>

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

int main() {

	int t;
	in(t);
	while(t--) {
		lli d;
		inll(d);
		lli sum = 0;
		int a[15000] = {0};
		int k = 14999;
		while(d > 0) {
			if(d > 9) {
				d = d - 9;
				a[k--] = 9;
			} else {
				a[k] = d;
				d = 0;
			}
		}
		int l = k, c = 1;
		for(k = 14999 ; k >= 0 ; k--) {
			if(a[k] == 9) {
				if(c == 1) {
					a[k] = 0;
				}
			} else {
				a[k]++;
				c = 0;
				break;
			}
		}
		for( ; k < 15000 ; k += 1) {
			sum += a[k];
		}
		outll(sum);
		br;
	}

	return 0;
}



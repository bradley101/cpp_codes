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
		int n, i, j, k;
		in(n);
		int a[n];
		for(i = 0 ; i < n ; i+= 1) {
			in(a[i]);
		}
		for(i = 0 ; i < n ; i += 1) {
			for(j = 0 ; j < n ; j += 1) {
				if(i == j) continue;
				for(k = 0 ; k < n ; k += 1) {
					if(a[i] * a[j] == a[k]) {
						break;
					}
				}
				if(k == n) {
					break;
				}
			}
			if(j < n) {
				break;
			}
		}
		if(i < n) {
			printf("no");
		} else {
			printf("yes");
		}
		br;
	}
	
	return 0;
}


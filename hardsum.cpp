#include<stdio.h>
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

	int t, n, m, i, j, k, sumr, sumc, min_sumr, min_sumc, min_sum;
	in(t);
	int a[1001][1001], sum[1001][1001];
	while(t--) {
		in(n);
		in(m);
		
		for(i = 0 ; i < n ; i += 1) {
			for(j = 0 ; j < m ; j += 1) {
				in(a[i][j]);
				sum[i][j] = 0;
			}
		}
		min_sum = 9999;
		for(i = 0 ; i < n ; i += 1) {
			for(j = 0 ; j < m ; j += 1) {
				sumr = sumc = 0;
				min_sumr = min_sumc = 9999;
				for(k = 0 ; k < n ; k += 1) {
					sumr = sumr + a[k][j];
					min_sumr = min(min_sumr, sumr);
				}
				for(k = 0 ; k < m ; k += 1) {
					sumc = sumc + a[k][j];
					min_sumc = min(min_sumc, sumc);
				}
				sum[i][j] = min_sumr + min_sumc - a[i][j];
				min_sum = min(min_sum, sum[i][j]);
			}
		}
		out(min_sum);
		br;
	}

	return 0;
}


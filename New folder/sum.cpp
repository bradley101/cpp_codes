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

	int t, n, m, i, j, k, min_sum_left, min_sum_right, min_sum_top, min_sum_bottom, sum_left, sum_right, sum_top, sum_bottom;
	in(t);
	int a[1001][1001], sum[1001][1001], min_sum;
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
				sum_top = sum_left = sum_right = sum_bottom = 0;
				min_sum_left = min_sum_right = min_sum_top = min_sum_bottom = 9999;
				
				for(k = j - 1 ; k >= 0 ; k -= 1) {
					sum_left += a[i][k];	
					min_sum_left = min(min_sum_left, sum_left);
				}
				for(k = j + 1; k < m ; k += 1) {
					sum_right += a[i][k];
					min_sum_right = min(min_sum_right, sum_right);
				}
				for(k = i + 1 ; k < n ; k += 1) {
					sum_bottom += a[k][j];
					min_sum_bottom = min(min_sum_bottom, sum_bottom);
				}
				for(k = i - 1 ; k >= 0 ; k -= 1) {
					sum_top += a[k][j];
					min_sum_top = min(min_sum_top, sum_top);
				}
				min_sum = min(min_sum, min_sum_left + min_sum_right + min_sum_top + min_sum_bottom + a[i][j]);
			}
		}
		out(min_sum);
		br;
	}

	return 0;
}


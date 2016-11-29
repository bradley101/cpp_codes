#include<stdio.h>

long min(long x, long y) {
	return x<y?x:y;
}

int main() {

	long t;
	scanf("%ld",&t);
	int n, m;
	long a[1005][1005], i, j, k, rs, cs, mrs, mcs, mc;
	while(t--) {
		scanf("%d %d",&n,&m);
		for(i = 0 ; i < n ; i += 1) {
			for(j = 0 ; j < m ; j += 1) {
				scanf("%ld",&a[i][j]);
				//m[i][j] = a[i][j];
			}
		}
		if(n >= 3 && m >= 3) {
			for(i = 1 ; i < n ; i += 1) {
				for(j = 1 ; j < m ; j += 1) {
					mrs = 999999;
					mcs = 999999;
					rs = 0;
					cs = 0;
					for(k = 0 ; k < n ; k += 1) {
						rs += a[k][j];
						mrs = min(mrs, rs);
					}
					for(k = 0 ; k < m ; k += 1) {
						cs += a[i][k];
						mcs = min(mcs, rs);
					}
					mrs -= a[i][j];
					mcs -= a[i][j];
					mc = min(mc, mrs + mcs);
				}
			}
			printf("%ld\n",mc);
		}
	}
	return 0;
}


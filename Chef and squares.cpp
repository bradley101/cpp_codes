#include<stdio.h>
#include<math.h>
#include<iostream>
#include<map>
#include<algorithm>
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
using namespace std;
int main() {

	int t;
	in(t);
	int mat[500][500];
	
	while(t--) {
		int n;
		in(n);
		int i, j, x = -1, y = -1, c = 0;
		for(i = n ; i >= 1 ; i -= 1) {
			x = 0;
			y = c;
			c = c + 1;
			for(j = 1 ; j <= n ; j += 1) {
				mat[x][y] = i;
				x = (x + 1) % n;
				y = (y + 1) % n;
			}
		}
		for(i = 0 ; i < j ; i += 1) {
			for(j = 0 ; j < n ; j += 1)
				cout << mat[i][j] << " ";
			cout << endl;
		}
	}

	return 0;
}



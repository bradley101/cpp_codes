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

typedef long long int lli;
using namespace std;
int a1[10005], n1, a2[10005], n2, inter[20010];

int bsearch(int x) {
	int s = 0, m, e = n2 - 1;
	m = (s + e) / 2;
	while(s < e && a2[m] != x) {
		if(a2[m] < x) {
			s = m + 1;
		} else {
			e = m - 1;
		}
		m = (s + e) / 2;
	}
	if(a2[m] == x) return m;
	return -1;
}

void calcintersec() {
	int i, p;
	for(i = 0 ; i < 20009 ; i += 1)	inter[i] = -1;
	for(i = 0 ; i < n1 ; i += 1) {
		p = bsearch(a1[i]);
		if(p == -1) continue;
		if(a1[i] < 0) {
			inter[abs(a1[i]) + 10000] = p;
		} else {
			inter[a1[i]] = p;
		}
	}
}

int solve(int x, int y, int row, int val) {
	if(row == 0 && x == n1 - 1) 
		return val + a1[x];
	if(row == 1 && y == n2 - 1) 
		return val + a2[x];
		
	
	if(row == 0 && inter[a1[x]] != -1) {
		return  max(solve(x, x + 1, 1, val + a1[x]), solve(x + 1, y, 0, val + a1[x]));
	} else if(row == 1 && inter[a2[y]] != -1) {
		return  max(solve(y + 1, y, 0, val + a2[x]), solve(y + 1, y, 1, val + a2[x]));
	} else {
		if(row == 0) 
			return solve(x + 1, y, 0, val + a1[x]);
		else 
			return solve(x, y + 1, 1, val + a2[y]);
	}
	
}

int main() {

	while(1) {
		int i;
		in(n1);
		if(n1 != 0) {
			for(i = 0 ; i < n1 ; i += 1) {
				in(a1[i]);
			}
			in(n2);
			for(i = 0 ; i < n2 ; i += 1) {
				in(a2[i]);
			}
			calcintersec();
			cout << max(solve(0, 0, 0, 0), solve(0, 0, 1, 0)) << endl;
			
		} else {
			break;
		}
	}
	return 0;
}



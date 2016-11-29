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
	
	int n, m, i;
	in(n);
	in(m);
	int a[n], spindex[100001] = {0};
	for(i = 0 ; i < n ; i += 1) {
		in(a[i]);
		spindex[a[i]] = 1;
	}
	std::map<int, string> fn, fs;
	//map<int, string>::iterator it;
	for(i = 0 ; i < m ; i += 1) {
		int x, p;
		string str;
		in(x);
		in(p);
		cin >> str;
		if(spindex[x] == 0) {
			fn[p] = str;
		} else {
			fs[p] = str;
		}
	}
	for(map<int, string>::reverse_iterator it = fs.rbegin() ; it != fs.rend() ; it++) {
		cout << it->second << endl;
	}
	for(map<int, string>::reverse_iterator it = fn.rbegin() ; it != fn.rend() ; it++) {
		cout << it->second << endl;
	}
	return 0;
}



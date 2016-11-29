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
	while(t--) {
		int *f1, *f2;
		f1 = (int*)malloc(500000 * sizeof(int));
		f2 = (int*)malloc(500000 * sizeof(int));
		memset(f1, 0, 500000);
		memset(f2, 0, 500000);
		
		string s;
		cin >> s;
		int len = s.size(), i, j, c;
		if(len % 2 == 0) {
			int l1 = 500000 - 1, l2 = 500000 - 1, r1 = 500000 - 1, r2 = 500000 - 1;
			for(i = len / 2 - 1 ; i >= 0 ; i -= 1) {
				f1[l1--] = s[i] - '0';
			}
			l1++;
			for(i = len - 1; i >= len / 2 ; i -= 1) {
				f2[l2--] = s[i] - '0';
			}
			l2++;
			r2 = l2;
			while(f1[r1] == f2[r2] && r1 >= l1 && r2 <= l2) {
				r1--;
				r2++;
			}
			if(r1 < l1 || r2 > l2) {
				c = 1;
				for(i = 500000 - 1 ; i >= l1 && c == 1 ; i -= 1) {
					f1[i] += c;
					c = f1[i] / 10;
					f1[i] %= 10;
				}
				if(c == 1) {
					l1--;
					f1[l1] = 1;
				}
				i = l1;
				j = 500000 - 1;
				while(i < 500000 - 1) {
					f2[j--] = f1[i++];
				}
				l2 = j + 1;
			}
			else if(f1[r1] < f2[r2]) {
				f1[r1]++;
				f2[r2] = f1[r1];
				for(i = r1 + 1 ; i < 500000 ; i += 1) {
					f1[i] = 0;
				}
				for(i = l2 ; i < r2 ; i += 1) {
					f2[i] = 0;
				}
				i = r1 - 1;
				j = r2 + 1;
				while(i >= l1 && j < 500000) {
					f2[j++] = f1[i--];
				}
			} else {
				i = l1;
				j = 500000 - 1;
				while(i < r1 && j > r2) {
					f2[j] = f1[i];
					j--;
					i++;
				}
				f2[r2] = f1[r1];
			}
			for(i = l1 ; i < 500000 ; i += 1)
				cout << f1[i];
			for(i = l2 ; i < 500000 ; i += 1)
				cout << f2[i];
				
		} else {
			if(len == 1) {
				if(s[0] == '9')
					cout << "11" << endl;
				else
					cout << (char)((int)s[0] + 1) << endl;
				continue;
			}
			int mid = s[len / 2] - '0';
			int l1 = 500000 - 1, l2 = 500000 - 1, r1 = 500000 - 1, r2 = 500000 - 1;
			for(i = len / 2 - 1 ; i >= 0 ; i -= 1) {
				f1[l1--] = s[i] - '0';
			}
			l1++;
			for(i = len - 1; i >= len / 2 + 1 ; i -= 1) {
				f2[l2--] = s[i] - '0';
			}
			l2++;
			r2 = l2;
			while(f1[r1] == f2[r2]) {
				r1--;
				r2++;
			}
			if(r1 < l1 || r2 > l2) {
				mid++;
				c = mid / 10;
				mid %= 10;
				if(c == 1) {
					i = 500000 - 1;
					while(i >= l1 && c == 1) {
						f1[i]++;
						c = f1[i] / 10;
						f1[i] %= 10;
						i--;
					}
					if(c == 1) {
						l1--;
						f1[l1] = 1;
					}
					i = 500000 - 2;
					j = i + 1;
					while(i >= l1) {
						f2[j++] = f1[i--];
					}
				}
			} else if(f1[r1] < f2[r2]) {
				mid++;
				c = mid / 10;
				mid %= 10;
				if(c == 1) {
					i = 500000 - 1;
					while(i >= l1 && c == 1) {
						f1[i]++;
						c = f1[i] / 10;
						f1[i] %= 10;
						i--;
					}
					if(c == 1) {
						l1--;
						f1[l1] = 1;
						mid = -1;
					}
					i = 500000 - 2;
					j = i + 1;
					while(i >= l1) {
						f2[j++] = f1[i--];
					}
				}
			} else {
				i = l1;
				j = 500000 - 1;
				while(i < r1 && j > r2) {
					f2[j] = f1[i];
					j--;
					i++;
				}
				f2[r2] = f1[r1];
			}
			for(i = l1 ; i < 500000 ; i += 1)
				cout << f1[i];
			if(mid != -1) cout << mid;
			//cout << (mid != -1)? mid : "";
			for(i = l2 ; i < 500000 ; i += 1)
				cout << f2[i];
				
		}
		cout << endl;
	}
	return 0;
}



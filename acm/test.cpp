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
		int x1, x2, y1, y2;
		in(x1);
		in(y1);
		in(x2);
		in(y2);
		if(x1 == x2) {
			if(y1 < y2) {
				printf("up");
			} else {
				printf("down");
			}
		} else if(y1 == y2) {
			if(x1 < x2) {
				printf("right");
			} else {
				printf("left");
			}
		} else {
			printf("sad");
		}
			
		br;
	}
	
	return 0;
}


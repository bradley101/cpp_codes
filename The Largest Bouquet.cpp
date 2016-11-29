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

//#define max(x, y) x>y?x:y
#define min(x, y) x<y?x:y
typedef long long int lli;
using namespace std;
int main() {

	int t;
	in(t);
	while(t--) {
		lli mg, my, mrd, og, oy, ord, pg, py, prd;
		inll(mg);
		inll(my);
		inll(mrd);
		lli m = mg + my + mrd;
		inll(og);
		inll(oy);
		inll(ord);
		lli o = og + oy + ord;
		inll(pg);
		inll(py);
		inll(prd);
		lli p = pg + py + prd;
		lli max1 = 0, max2 = 0;
		lli green, yellow, red, maple, poplar, olive;
		
		green = (mg > 0 && og > 0 && pg > 0)?(mg + og + pg):0;
		if(green % 2 == 0) {
			if(mg > 1 || og > 1 || pg > 1) {
				green--;
			} else {
				green = 0;
			}
		}
		
		yellow = (my > 0 && oy > 0 && py > 0)?(my + oy + py):0;
		if(yellow % 2 == 0) {
			if(my > 1 || oy > 1 || py > 1) {
				yellow--;
			} else {
				yellow = 0;
			}
		}
		
		red = (mrd > 0 && ord > 0 && prd > 0)?(mrd + ord + prd):0;
		if(red % 2 == 0) {
			if(mrd > 1 || ord > 1 || prd > 1) {
				red--;
			} else {
				red = 0;
			}
		}
		
		maple = (mg > 0 && my > 0 && mrd > 0)?(mg + my + mrd):0;
		if(maple % 2 == 0) {
			if(mg > 1 || my > 1 || mrd > 1) {
				maple--;
			} else {
				maple = 0;
			}
		}
		
		olive = (og > 0 && oy > 0 && ord > 0)?(og + oy + ord):0;
		if(olive % 2 == 0) {
			if(og > 1 || oy > 1 || ord > 1) {
				olive--;
			} else {
				olive = 0;
			}
		}
		
		poplar = (pg > 0 && py > 0 && prd > 0)?(pg + py + prd):0;
		if(poplar % 2 == 0) {
			if(pg > 1 || py > 1 || prd > 1) {
				poplar--;
			} else {
				poplar = 0;
			}
		}
		
		max1 = (red > yellow)?(red > green)?red:green:(yellow > green)?yellow:green;
		max2 = (maple > olive)?(maple > poplar)?maple:poplar:(olive > poplar)?olive:poplar;
		outll(max(max1, max2));
		br;
	}

	return 0;
}



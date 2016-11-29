#include<stdio.h>

int main() {

	int n, i;
	scanf("%d",&n);
	int a[n];
	for ( i = 0 ; i < n ; i+= 1) {
		scanf("%d",&a[i]);
	}
	int no = 0, ne = 0;
	for(i = 0 ; i < n ; i += 1) {
		if(a[i] % 2 == 0) {
			ne ++;
		} else {
			no++;
		}
	}
	if(ne > no) {
		printf("READY FOR BATTLE\n");
	} else {
		printf("NOT READY\n");
	}
	return 0;
}


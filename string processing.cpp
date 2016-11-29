#include<stdio.h>
#include<string.h>

int main() {

	int t, i, len;
	scanf("%d",&t);
	char s[1010];
	while(t--) {
		scanf("%s",s);
		len = strlen(s);
		int sum = 0;
		for(i = 0 ; i < len ; i+= 1) {
			sum += (s[i] >= '0' && s[i] <= '9')?(s[i] - 48):0;
		}
		printf("%d\n",sum);
	}
	return 0;
}


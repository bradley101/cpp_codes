#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int a[], int start, int end, int item) {
	int mid = (start + end) / 2;
	while(start < end && a[mid] != item) {
		if(item < a[mid]) {
			end = mid - 1;
		} else {
			start = mid + 1;
		}
		mid = (start + end) / 2;
	}
	if(a[mid] == item) {
		return true;
	}
	return false;
}
int main() {
	int n, d, i;
	cin>>n>>d;
	int a[n];
	int count = 0;
	for(i = 0 ; i < n ; i++) {
		cin>>a[i];
	}
	for(i = 0 ; i < n ; i++) {
		if(binarySearch(a, 0, n-1, a[i] + d) && binarySearch(a, 0, n-1, a[i] + d + d)) {
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
/*   1 2 4 5 7 8 10,    s=0 e=6 


*/

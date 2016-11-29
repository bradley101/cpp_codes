#include<bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--) {
		int i, n;
		cin>>n;
		int a[n][200], l, j;
		
		int points[n];
		int distinct[n];
		int len[n];
		for(i = 0 ; i < n ; i++) {
			cin>>len[i];
			for(j = 0 ; j < len[i] ; j++) {
				cin>>a[i][j];
			}
			distinct[i] = 0;
		}
		for(i = 0 ; i < n ; i++) {
			l = len[i];
			points[i] = l;
			int type[] = {0, 0, 0, 0, 0, 0};
			for(j = 0 ; j < l ; j++) {
				if(type[a[i][j] - 1] == 0) {
					distinct[i]++;
				}
				type[a[i][j] - 1]++;
			}
			if(distinct[i] == 4) 
				points[i]++;
			else if(distinct[i] == 5)
				points[i]+=2;
			else if(distinct[i] == 6)
				points[i]+=4;
			//cout<<distinct[i]<<" ";
		}
		int max = INT_MIN, winner = -1;
		for(i = 0 ; i < n ; i++) {
			if(points[i] > max) {
				max = points[i];
				winner = i;
			} else if(points[i] == max) {
				winner = -1;
			}
		}
		if(winner == -1) {
			cout<<"tie"<<endl;
		} else if(winner == 0) {
			cout<<"chef"<<endl;
		} else {
			cout<<winner + 1<<endl;
		}
		//cout<<max<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n], b[n], i;
    
    for(i = 0 ; i < n ; i++) {
        cin>>a[i];
    }
    
    for(i = 0 ; i < n ; i++) {
        cin>>b[i];
    }
    
    int idxb[20001] = {-1};
    
    for(i = 0 ; i < n ; i++) {
        if(b[i] < 0) {
            b[i] -= 10000;
        }
        idxb[b[i]] = i;
    }
    
    int minD = INT_MAX, minN = INT_MAX, indb;
    bool eq = false;
    
    for(i = 0 ; i < n ; i++) {
        if(a[i] < 0) {
            indb = idxb[a[i] + 10000];
        } else {
            indb = idxb[a[i]];
        }
        if(abs(i - indb) < minD) {
            minD = abs(i - indb);
            minN = a[i];
            eq = false;
        } else if(abs(i - indb) == minD) {
            if(minN > a[i]) {
                minN = a[i];
                eq = true;
            }
        }
    }
    cout<<(eq?minN:minD)<<endl;
    return 0;
}


#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, k;
		cin >> n >> k;
		int a[n*n+5];
		for (int i=0; i<n*n; i++) cin >> a[i];
		sort(a, a+n*n);
		cout << a[k-1] << endl;
	}
}
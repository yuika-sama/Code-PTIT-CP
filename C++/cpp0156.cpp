#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int t; cin >> t;
	while (t--){
		long long b, p; cin >> b >> p;
		long long d = 0;
		        /*
	    T/c d?ng du: x % p = 1 th� x^2 % p = 1
	    Nh?n th?y(coi nhu t�nh ch?t cngdc): x % p == 1 th� (x + p*i) % p == 1
	    V?i m?i x t/m, ta t�m last l� s? l?n nh?t c� d?ng (x + p*i) c�n t.m last % p == 1
	    Nhu v?y s? t�nh du?c s? lu?ng s? t/m trong do?n [x, last]
	    */
		for (long long i = 1; i<p; i++){
			if ((i*i)%p == 1){
				long long last = i+p*(b/p);
				if (last>b){
					last -= p;
				}
				d+=(last-i)/p + 1;
			}
		}
		cout << d << endl;
	}
}


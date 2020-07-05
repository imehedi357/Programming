/************************************/
/* NoobM							*/
/* File Name : cp.cpp				*/
/* Date : 26.06.2020 02:01:42 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <long long> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

int mod = 1000000007;

int fact(int n) {
	int res = 1;
	for(int i = 2; i <= n; i++) res *= i;
	return res;
}

int nCr(int n, int r) {
	return fact(n) / (fact(r) * fact(n - r));
}
void solve() {
	int n;
	cin >> n;
	
	if(n == 1) {
		cout << 0 << endl;
		return;
	}
	if(n == 2) {
		cout << 3 << endl;
		return;
	}
	if(n == 3) {
		cout << 6 << endl;
		return;
	}
	ll counter = 1;
	
	for(int i = 0; i < n - 3; i++) {
		counter = (counter * 3) % mod;
	}
	
	ll c = (counter * 3) % mod;
	counter = (counter * 4) % mod;
	
	cout << (c + counter) % mod << endl;
}

 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
	
	int t = 1;
	//cin >> t;
	
	while (t--) {
		solve();
	}
    return 0;
}

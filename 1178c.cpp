/************************************/
/* NoobM							*/
/* File Name : 1178c.cpp				*/
/* Date : 29.06.2020 03:55:25 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>
#define mod 998244353

using namespace std;

void solve() {
	int w, h;
	cin >> w >> h;
	
	ll ans = 1;
	
	for(int i = 0; i < w + h; i++) {
		ans = (ans * 2) % mod;
	}
	
	cout << ans << endl;
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

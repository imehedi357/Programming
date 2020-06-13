/************************************/
/* NoobM							*/
/* File Name : 1366b.cpp				*/
/* Date : 11.06.2020 20:54:07 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

void solve() {
	ll n, x, m;
	cin >> n >> x >> m;
	
	ll minrange = n + 1;
	ll maxrange = -1;
	
	rr(i, m) {
		ll j, k;
		cin >> j >> k;
		
		if(x >= j && x <= k) {
			minrange = min(j, minrange);
			maxrange = max(k, maxrange);
			
		}
		else if((j >= minrange && j <= maxrange) || (k >= minrange && k <= maxrange)){
			maxrange = max(k, maxrange);
			minrange = min(j, minrange);
		}
	}
	if(maxrange - minrange + 1 < 0) cout << 1 << endl;
	else cout << maxrange - minrange + 1 << endl;
}
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
	
	int t = 1;
	cin >> t;
	
	while (t--) {
		solve();
	}
    return 0;
}

/************************************/
/* NoobM							*/
/* File Name : hc.cpp				*/
/* Date : 21.06.2020 19:26:07 +06	*/
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
	int n;
	cin >> n;
	
	vi(n, a);
	
	vii psum(n+5, 0);
	//psum[1] = a[0];
	for(int i = 1; i <= n; i++) {
		psum[i] = psum[i - 1] + a[i - 1];
	}
	
	int q;
	cin >> q;
	
	rr(i, q) {
		int l, r;
		cin >> l >> r;
		
		cout << psum[r] - psum[l - 1] << endl;
	}
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

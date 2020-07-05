/************************************/
/* NoobM							*/
/* File Name : 1371c.cpp				*/
/* Date : 01.07.2020 20:04:59 +06	*/
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
	ll a, b, n, m;
	cin >> a >> b >> n >> m;
	
	ll total = n + m;
	ll totalc = a + b;
	
	if(total > totalc) cout << "No" << endl;
	else {
		ll mn, mx;
		if(a < b) {
			mn = a;
			mx = b;
		}
		else{
			mn = b;
			mx = a;
		}
		
		if(mn >= m) cout << "Yes" << endl;
		else cout << "No" << endl;
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

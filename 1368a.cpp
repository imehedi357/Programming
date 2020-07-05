/************************************/
/* NoobM							*/
/* File Name : 1368a.cpp				*/
/* Date : 18.06.2020 20:58:39 +06	*/
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
	ll a, b, n;
	cin >> a >> b >> n;
	
	int mx = max(a, b);
	int mn = min(a, b);
	
	int counter = 0;
	
	while(mx <= n) {
		mn += mx;
		ll temp = mx;
		mx = mn;
		mn = temp;
		counter++;
	}
	
	cout << counter << endl;
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

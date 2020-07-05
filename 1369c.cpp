/************************************/
/* NoobM							*/
/* File Name : 1369c.cpp				*/
/* Date : 23.06.2020 21:05:50 +06	*/
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
	int n, k;
	cin >> n >> k;
	
	vi(n, a);
	vi(k, w);
	
	sort(a.rbegin(), a.rend());
	sort(w.rbegin(), w.rend());
	
	int l = 0;
	int r = n - 1;
	
	ll sum = 0;
	
	for(int x : w) {
		if(x == 1) {
			sum += (ll)((ll)2 * (ll)a[l]);
			l++;
		}
	}
	
	for(int x : w) {
		if(x > 1) {
			sum += (ll)a[l];
			l++;
			sum += (ll)a[r];
			r = r - (x - 1);
		}
	}
	
	cout << sum << endl;
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

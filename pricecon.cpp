/************************************/
/* NoobM							*/
/* File Name : pricecon.cpp				*/
/* Date : 08.06.2020 19:42:12 +06	*/
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
	
	int cost = 0;
	
	vii p(n);
	
	rr(i, n) {
		int x;
		cin >> x;
		
		if(x > k) {
			int los = x - k;
			cost += los;
		}
	}
	
	cout << cost << endl;
	
	
	
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

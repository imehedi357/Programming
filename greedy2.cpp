/************************************/
/* NoobM							*/
/* File Name : greedy2.cpp				*/
/* Date : 18.06.2020 16:00:37 +06	*/
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
	
	vector<tuple<int, int, int>> seg(n);
	
	rr(i, n) {
		int u, v;
		cin >> u >> v;
		
		int l = v - u;
		
		seg.push_back({l, u, v});
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

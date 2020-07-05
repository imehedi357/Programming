/************************************/
/* NoobM							*/
/* File Name : bipartitr.cpp				*/
/* Date : 14.06.2020 22:55:31 +06	*/
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
	int n, m;
	cin >> n >> m;
	
	vector<vii> g(n);
	vii color(n, -1);
	
	rr(i, n) {
		int u, v; 
		cin >> u >> v;
		
		--u, --v;
		
		g[u].push_back(v);
		g[v].push_back(u);
		
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

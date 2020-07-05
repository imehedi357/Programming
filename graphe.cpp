/************************************/
/* NoobM							*/
/* File Name : graphe.cpp				*/
/* Date : 05.07.2020 17:02:23 +06	*/
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
	
	vector<vii> g(n, vii (n, 0)), gl(n + 1);
	
	rr(i, n) {
		int x;
		cin >> x;
		
		rr(j, x) {
			int v;
			cin >> v;
			--v;
			g[i][v] = 1;
		}
	}
	
	rr(i, n) {
		rr(j, n) cout << g[i][j] << " ";
		cout << endl;
	}
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

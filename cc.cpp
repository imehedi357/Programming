/************************************/
/* NoobM							*/
/* File Name : cc.cpp				*/
/* Date : 22.06.2020 21:42:37 +06	*/
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
	
	int m[n][n];
	
	vii row(n);
	vii column(n);
	
	int mx = -2;
	
	rr(i, n) {
		rr(j, n) {
			cin >> m[i][j];
		}
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

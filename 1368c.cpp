/************************************/
/* NoobM							*/
/* File Name : 1368c.cpp				*/
/* Date : 19.06.2020 02:58:59 +06	*/
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
	cout << 3 * n + 4 << endl;
	cout << 0 << " " << 2 << endl;
	cout << 0 << " " << 1 << endl;
	rr(i, n) {
		cout << i + 1 << " " << 1 << endl;
		cout << i + 1 << " " << 2 << endl;
		cout << i + 1 << " " << 3 << endl;
	}
	
	cout << n + 1 << " " << 2 << endl;
	cout << n + 1 << " " << 1 << endl;
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

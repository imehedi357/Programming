/************************************/
/* NoobM							*/
/* File Name : 276c.cpp				*/
/* Date : 22.06.2020 20:13:43 +06	*/
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
	
	vi(n,a);
	
	int k = 0;
	
	ll counter = 0;
	
	for(int i = 0; i < n; i++) {
		counter += abs((ll)a[i] - (ll)k);
		k = a[i];
	}
	
	cout << counter << endl;
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

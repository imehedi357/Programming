/************************************/
/* NoobM							*/
/* File Name : 1366a.cpp				*/
/* Date : 11.06.2020 20:36:35 +06	*/
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
	long long a, b;
	cin >> a >> b;
	
	ll k = a + b;
	k = k / 3;
	
	ll mn = min(k, a);
	mn = min(b, mn);
	
	
	cout << mn << endl;
	
	
	
	
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

/************************************/
/* NoobM							*/
/* File Name : 1266a.cpp				*/
/* Date : 04.07.2020 03:43:56 +06	*/
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
	ll n;
	cin >> n;
	if(n <= 14) cout << "NO" << endl;
	else if(n % 14 >=1 && n % 14 <= 6) cout << "YES" << endl;
	else cout << "NO" << endl;
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

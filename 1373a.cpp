/************************************/
/* NoobM							*/
/* File Name : 1373a.cpp				*/
/* Date : 25.06.2020 20:37:26 +06	*/
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
	ll a, b, c;
	cin >> a >> b >> c;
	
	ll abp = a * b;
	
	int ans2 = -1;
	int ans1 = -1;
	
	if(abp > c) {
		ans2 = b;
	}
	
	//double bp = (double)c / double(b);
	 
	if(a < c) {
		ans1 = 1;
	}
	
	cout << ans1 << " " << ans2 << endl;
	
	
	
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

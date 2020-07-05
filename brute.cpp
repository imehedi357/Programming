/************************************/
/* NoobM							*/
/* File Name : ccl.cpp				*/
/* Date : 03.07.2020 20:21:24 +06	*/
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
	
	ll sum = 0;
	
	ll cur = 0;
	
	rr(i, n) {
		ll x;
		cin >> x;
		if(i == 0) {
			cur = x;
			continue;
		}
		if(x > cur) sum += (x - cur) - 1;
		else if(x < cur) sum += (cur - x) - 1;
		
		cur = x;
	}
	
	cout << sum << endl;
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

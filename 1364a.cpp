/************************************/
/* NoobM							*/
/* File Name : 1364a.cpp				*/
/* Date : 13.06.2020 21:10:11 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <long long> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

void solve() {
	ll n, x;
	cin >> n >> x;
	
	vector <long long> a(n);
	
	rr(i, n) {
		long long k;
		cin >> k;
		
		a[i] = k % x;
	}
	
	int ans = -1;
	
	ll sum = 0;
	
	for(int i = 0; i < n; i++) {
		sum += a[i];
		
		if(sum % x != 0) {
			ans = max(ans, i + 1);
		}
		
	}
	
	sum = 0;
	int kl = 0;
	
	for(int i = n - 1; i >= 0; i--) {
		kl++;
		sum += a[i];
		
		if(sum % x != 0) {
			ans = max(ans, kl);
		}
		
	}
	
	cout << ans << endl;
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

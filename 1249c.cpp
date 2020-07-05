/************************************/
/* NoobM							*/
/* File Name : 1249c.cpp				*/
/* Date : 29.06.2020 03:30:11 +06	*/
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
	
	vector<ll> nums(32);
	
	ll lower = 1;
	
	rr(i, 32) {
		nums[i] = pow(3, i);
		if(num[i] <= n) {
			lower = num[i];
		}
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

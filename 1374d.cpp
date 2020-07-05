/************************************/
/* NoobM							*/
/* File Name : 1374d.cpp				*/
/* Date : 28.06.2020 21:33:48 +06	*/
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
	int n, k;
	cin >> n >> k;
	
	vii a(n);
	vector<long long> required;
	map <long long, long long> mp;
	
	rr(i, n) {
		ll x;
		cin >> x;
		if(x % k == 0) a[i] = 0;
		else {
			a[i] = k - (x % k);
			mp[a[i]]++;
			required.push_back(a[i] + k * (mp[a[i]] - 1));
		}
	}
	
	sort(required.begin(), required.end());
	if(required.empty()) cout << 0 << endl;
	else cout << required.back() + 1<< endl;
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

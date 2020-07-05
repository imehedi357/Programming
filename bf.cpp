/************************************/
/* NoobM							*/
/* File Name : 1373c.cpp				*/
/* Date : 25.06.2020 21:08:48 +06	*/
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
	
	vi(n, a);
	
	vii s;
	
	ll sum = 0;
	
	for(int i = 0; i < n; i += 2) {
		if(i % 2 == 0) sum += a[i];
	}
	
	ll maxsum = 0;
	ll bestsum = 0;
	
	for(int i = 0; i + 1 < n; i += 2) {
		int diff = a[i + 1] - a[i];
		if(maxsum + diff > 0) {
			maxsum += diff;
			bestsum = max(maxsum, bestsum);
		}
		else maxsum = 0;	
	}
	
	maxsum = 0;
	
	for(int i = 1; i + 1 < n; i += 2) {
		int diff = a[i] - a[i + 1];
		if(maxsum + diff > 0) {
			maxsum += diff;
			bestsum = max(maxsum, bestsum);
		}
		else maxsum = 0;	
	}
	
	cout << sum + bestsum << endl;
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

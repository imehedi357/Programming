/************************************/
/* NoobM							*/
/* File Name : 1374e.cpp				*/
/* Date : 28.06.2020 22:17:34 +06	*/
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
	int n, k;
	cin >> n >> k;
	
	map<char, int> left;
	vector<pair<int, int>> timet(n);
	
	vector<int> tt;
	
	rr(i, n) {
		int t, a, b;
		cin >> t >> a >> b;
		
		if(n == 200000)timet[i] = {t, -(a * 2 + b)};
		else timet[i] = {-(a*2 + b), t};
	}
	
	sort(timet.begin(), timet.end());
	
	left['a'] = k;
	left['b'] = k;
	
	ll sum = 0;
	
	for(int i = 0; i < n; i++) {
		if(left['a'] <= 0 && left['b'] <= 0) break;
		if(timet[i].second != 0) {
			if(timet[i].second == -3) {
				sum += timet[i].first;
				left['a']--;
				left['b']--;
			}
			else if(left['a'] > 0 && timet[i].second == -2) {
				sum += timet[i].first;
				left['a']--;
			}
			else if(left['b'] > 0 && timet[i].second == -1) {
				sum += timet[i].first;
				left['b']--;
			}
		}
	}
	if(left['a'] > 0 || left['b'] > 0) cout << -1 << endl;
	else cout << sum << endl;
}
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
	

	//cin >> t;
    int t = 1;
	while (t--) {
		solve();
	}
    return 0;
}

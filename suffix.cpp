/************************************/
/* NoobM							*/
/* File Name : suffix.cpp				*/
/* Date : 30.06.2020 17:15:32 +06	*/
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
	string s;
	cin >> s;
	
	s += '$';
	
	vector<pair<string, int>> k;
	
	int n = s.size();
	
	for(int i = 0; i < n; i++) {
		k.push_back({s.substr(i,n), i});
	}
	
	sort(k.begin(), k.end());
	
	for(auto x : k) {
		cout << x.second << " ";
	}
	
	cout << endl;
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

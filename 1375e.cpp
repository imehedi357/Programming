/************************************/
/* NoobM							*/
/* File Name : 1375e.cpp				*/
/* Date : 05.07.2020 20:50:13 +06	*/
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
	vector<pair<int, int>> ans;
	
	for(int i = 0; i < n; i++) {
		int small = a[i];
		int k = -1;
		for(int j = i + 1; j < n; j++) {
			if(a[j] < small) {
				small = a[j];
				k = j;
			}
		}
		
		if(k != -1) {
			ans.push_back({i + 1, k + 1});
			swap(a[i], a[k]);
		}
	}
	
	//pvec(a);
	
	if(ans.empty()) cout << 0 << endl;
	else {
		cout << ans.size() << endl;
		for(auto x : ans) {
			cout << x.first << " " << x.second << endl;
		}
	}
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

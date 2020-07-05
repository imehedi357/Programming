/************************************/
/* NoobM							*/
/* File Name : 1375d.cpp				*/
/* Date : 04.07.2020 22:07:40 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(k, a.size()) cout << a[k] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

void solve() {
	int n;
	cin >> n;
	
	vi(n, a);
	
	set<int> ser;
	map<int, int> mp;
	map<int, bool> fixed;
	
	int mex = 0;
	vector<int> ans;
	
	for(int x : a) {
		ser.insert(x);
		mp[x]++;
	}
	
	while(true) {
		bool ok = false;
		for(int i = 0; i < n - 1; i++) {
			if(a[i+1] > a[i]) continue;
			ok = true;
		}
		
		if(!ok) break;
		
		int kj = 0;
		while(mp[kj]) kj++;	
		mex = kj;
		
		if(mex < n) {
			int kl = a[mex];
			a[mex] = mex;
			fixed[mex] = true;
			mp[mex]++;
			mp[kl]--;
			ans.push_back(mex + 1);
		}
		
		else {
			for(int it = n - 1; it >= 0; it--) {
				if(!fixed[it]) {
					int kl = a[it];
					a[it] = mex;
					mp[mex]++;
					mp[kl]--;
					ans.push_back(it + 1);
					fixed[it] = true;
					break;
				}
			}
		}
		
		//bug(mex);
		//pvec(a);
		
		
	}
	
	
	cout << ans.size() << endl;
	
	for(int x : ans) cout << x << " ";
	cout << endl;
	
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

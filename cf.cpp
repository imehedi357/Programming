/************************************/
/* NoobM							*/
/* File Name : cf.cpp				*/
/* Date : 01.07.2020 17:33:05 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

int cost(int l, int r, string a, string b) {
	if(a[--l] == b[--r]) return 0;
	else return 1;
}

int edit(string a, string b) {
    int n = a.size();
    int m = b.size();
    
    vector<vector<int>> dp(n+5, vii (m + 5));
    
    for(int i = 0; i <= n; i++) dp[i][0] = i;
    for(int i = 0; i <= m; i++) dp[0][i] = i;
    
    for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			dp[i][j] = min(dp[i - 1][j] + 1, dp[i - 1][j -1] + cost(i, j, a, b));			
			dp[i][j] = min(dp[i][j - 1] + 1, dp[i][j]);			
		}
		
	}
    
	//cout << dp[n][m] << endl;
	
    return dp[n][m];
	
}

void solve() {
	int n, q;
	cin >> n >> q;
	
	vector<string> a(n);
	vector<string> x(q);
	map <string, bool> aa;
	
	rr(i, n) {
		cin >> a[i];
		aa[a[i]] = true;
	}
	
	rr(i, q) {
		cin >> x[i];
	}
	
	for(string l : x) {
		int ans = 100000;
		string an = l;
		if(aa[l] == true) {
			cout << l << endl;
			continue;
		}
		for(string k : a) {
			int c = edit(l, k);
			if(c < ans) {
				an = k;
				ans = c;
			}
		}
		cout << an << endl;
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

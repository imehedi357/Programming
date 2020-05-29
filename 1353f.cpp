/*
 * NoobM
 * File Name : 1353f.cpp
 * Date : 14.05.2020 22:50:59 +06
 * Version : 1.0
 * 
 * Copyright 2020 Mehedi <imehedi357@gmail.com>
 * Shahjalal University of Science & Technology 
 * 
 * Geany 1.36
 * 
 */

#include <bits/stdc++.h>

#define rep(i, a, b) \
    for (int i = int(a); i < int(b); i++)
#define rr(i, b)  for (int i = 0; i < int(b); i++)
#define vina vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl

using namespace std;


long long dp[105][105];
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;
    
    while (t--) {
		long long n, m;
		cin >> n >> m;
		
		long long a[n][m];
		
		rr(i, n){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
				//a[i][j] -= a[0][0];
				dp[i][j] = 0;
			}
		}
		
		
		
		dp[0][0] = 0;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				if(i == 0 && j == 0) break;
				if(i == 0) {
					dp[i][j] += dp[i][j - 1] + abs(a[i][j] - a[i][j - 1] -1);
					a[i][j] = a[i][j - 1] + 1;
				}
				else if(j == 0) {
					dp[i][j] += dp[i - 1][j] + abs(a[i][j] - a[i - 1][j] -1);
					a[i][j] = a[i - 1][j] + 1;
				}
				
				else {
					dp[i][j] += min(dp[i][j - 1] + abs(a[i][j] - a[i][j - 1] -1), dp[i - 1][j] + abs(a[i][j] - a[i - 1][j] -1));
				}
			}
		}
		
		rr(i, n) {
			rr(j, m)
				cout << dp[i][j] << " ";
				
			cout << endl;
		}
	}

    return 0;
}

/*
 * NoobM
 * File Name : edit.cpp
 * Date : 20.05.2020 02:16:10 +06
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
#define rr(i, b) \
    for (int i = 0; i < int(b); i++)
#define vina vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl

using namespace std;

int dp[105][105];
string a, b;

int cost(int l, int r) {
	if(a[--l] == b[--r]) return 0;
	else return 1;
}
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    
    cin >> a >> b;
    
    int n = a.size();
    int m = b.size();
    
    for(int i = 0; i <= n; i++) dp[i][0] = i;
    for(int i = 0; i <= m; i++) dp[0][i] = i;
    
    for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			dp[i][j] = min(dp[i - 1][j] + 1, dp[i - 1][j -1] + cost(i, j));			
			dp[i][j] = min(dp[i][j - 1] + 1, dp[i][j]);			
		}
		
	}
    
	cout << dp[n][m] << endl;
	
    return 0;
}

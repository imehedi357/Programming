/*
 * NoobM
 * File Name : 189a.cpp
 * Date : 23.05.2020 02:53:58 +06
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
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    int a, b, c;
    cin >> a >> b >> c;
    
    vector <int> dp(n + 5, 0);
    //dp[a] = 1;
    //dp[b] = 1;
    //dp[c] = 1;
    
    int mx = max(a, b);
    mx = max(mx, c);
    
    for(int i = 1; i <= n; i++) {
		int j = 0, k = 0, l = 0;
		
		if(i - a >= 0 && (dp[i - a] || i == a)) j = dp[i - a] + 1;
		if(i - b >= 0 && (dp[i - b] || i == b)) k = dp[i - b] + 1;
		if(i - c >= 0 && (dp[i - c] || i == c)) l = dp[i - c] + 1;
		
		dp[i] = max(j, k);
		dp[i] = max(l, dp[i]);
		
		
	}
    //pvec(dp);
    
	cout << dp[n] << endl;
	
    return 0;
}

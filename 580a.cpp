/*
 * NoobM
 * File Name : 580a.cpp
 * Date : 23.05.2020 02:37:52 +06
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
    
    vina;
    
    vector<int> dp(n + 10, 1);
    
    dp[0] = 1;
    int k = 1;
    
    for(int i = 1; i < n; i++) {
		k = 1;
		while(a[i] >= a[i - 1] && i < n) {
			k++;
			dp[i] = max(dp[i - 1], k);
			i++;
		}
		  
		dp[i] = max(dp[i - 1], k);
	}
	
	cout << dp[n - 1] << endl;

    return 0;
}

/*
 * NoobM
 * File Name : 368b.cpp
 * Date : 07.06.2020 01:36:36 +06
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
    
    int n, m;
    cin >> n >> m;
    
    vector <int> dp(n + 5, 0);
    //set <int> s;
    vector <bool> vis(100001, 0);
    
    vector <int> k(n);
    
    rr(i, n) {
		cin >> k[n - i - 1];		
	}
    
    for(int i = 1; i <= n; i++) {
		int x = k[i - 1];
		
		if(vis[x] == true) {
			dp[i] = dp[i - 1];
		}
		else {
			vis[x] = true;
			dp[i] = dp[i - 1] + 1;
		}		
	}
	
	while(m--) {
		int x;
		cin >> x;
		cout << dp[n + 1 - x]<< endl;
		
	}
	//pvec(dp);

    return 0;
}

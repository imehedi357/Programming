/*
 * NoobM
 * File Name : 706b.cpp
 * Date : 07.06.2020 00:22:06 +06
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
    
    vector <int> dp (100001, 0);
    
    while(n--) {
		int x;
		cin >> x;
		dp[x]++;		
	}
	int k = 0;
	for(int i = 1; i <= 100000; i++) {
		k += dp[i];
		dp[i] = k;
	}
    
    int q;
    cin >> q;
    
    while(q--) {
		int x;
		cin >> x;
		if(x > 100000) cout << dp[100000] << endl;
		else cout << dp[x] << endl;
		
		
	}

    return 0;
}

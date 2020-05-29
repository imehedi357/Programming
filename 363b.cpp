/*
 * NoobM
 * File Name : 363b.cpp
 * Date : 13.05.2020 03:59:43 +06
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
    
    int n, k;
    cin >> n >> k;
    
    vector <int> v(n);
    vector <long long> prefix(n + 2, 0);
    vector <long long> cheap(n + 2, 0);
    
    rep(i, 1, n + 1) {
		cin >> v[i - 1];
		
		prefix[i] = v[i - 1] + prefix[i - 1];
	}
	
    long long mn = 2e9 + 7;
    int ans = 1;
    
    for(int i = 0; i <= n - k; i++) {
		long long sum = prefix[i + k] - prefix[i];
		
		mn = min(sum, mn);
		
		if(sum == mn) ans = i+1;
	}
	
	
	
	cout << ans << endl;
	
    return 0;
}

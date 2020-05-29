/*
 * NoobM
 * File Name : 455a.cpp
 * Date : 23.05.2020 03:53:13 +06
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
	long long n;
	cin >> n;
	
	map<long long, long long > cnt;
	vector<long long > a(n);
	
	rr(i, n) {
		cin >> a[i];
		cnt[a[i]]++;
	}
	
	vector <long long> dp(1e5 + 5, 0);
	
	dp[0] = 0;
	dp[1] = cnt[1];
	
	
	for(long long i = 2; i <= 1e5 + 4; i++) {
		dp[i] = max(dp[i - 1] , dp[i - 2] + cnt[i]*i);		
	}
	
	cout << dp[1e5 + 4] << endl;
    return 0;
}

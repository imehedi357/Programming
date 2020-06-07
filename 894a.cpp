/*
 * NoobM
 * File Name : 894a.cpp
 * Date : 07.06.2020 00:56:18 +06
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
    
	string s;
	cin >> s;
	
	int n = s.size();
	
	int counter = 0;
	
	vector<int> dp (n + 5, 0);
	vector<int> suf (n + 5, 0);
	
	for(int i = 0; i < n; i++) {
		
		if (i > 0) dp[i] = dp[i - 1];
		if(s[i] == 'Q') dp[i]++;
	}
	int k = 0;
	for(int i = n - 1; i >= 0; i--) {
		
		suf[i] = suf[i + 1];
		if(s[i] == 'Q') suf[i]++;
		
		k++;
	}
	
	for(int i = 0; i < n; i++) {
		if(s[i] == 'A')	counter += (dp[i] * suf[i]);
	}
	
	cout << counter << endl;
	//pvec(dp);
	//pvec(suf);

    return 0;
}

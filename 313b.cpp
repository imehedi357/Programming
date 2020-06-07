/*
 * NoobM
 * File Name : 313b.cpp
 * Date : 07.06.2020 01:26:20 +06
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
    
    vector <int> prefix (n + 5, 0);
    
    for(int i = 1; i < n; i++) {
		prefix[i] = prefix[i - 1];
		if(s[i] == s[i - 1]) prefix[i]++;
	}
	
	int m;
	cin >> m;
	
	while (m--) {
		int l, r;
		cin >> l >> r;
		l--, r--;
		
		cout << prefix[r] - prefix[l] << endl;
		
	}

    return 0;
}

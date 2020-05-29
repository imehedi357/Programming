/*
 * NoobM
 * File Name : 433b.cpp
 * Date : 13.05.2020 03:32:13 +06
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
    
    vector <int> v(n);
    vector <long long> prefix(n + 2, 0);
    vector <long long> cheap(n + 2, 0);
    
    rep(i, 1, n + 1) {
		cin >> v[i - 1];
		
		prefix[i] = v[i - 1] + prefix[i - 1];
	}
	
	sort(v.begin(), v.end());
	rep(i,1, n + 1) {
		cheap[i] = v[i - 1] + cheap[i - 1];
	}
	
	int m;
	cin >> m;
	
	rr(i, m) {
		int a, l , r;
		cin >> a >> l >> r;
		
		if(a == 1) cout << prefix[r] - prefix[l - 1] << endl;
		else cout << cheap[r] - cheap[l - 1] << endl;
	}   

    return 0;
}

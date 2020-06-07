/*
 * NoobM
 * File Name : 1365c.cpp
 * Date : 07.06.2020 21:39:03 +06
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
    
    map <int, int> f;
    map <int, int> s;
    
    rr(i, n) {
		int x;
		cin >> x;
		
		f[x] = i;
	}
	rr(i, n) {
		int x;
		cin >> x;
		
		s[x] = i;
	}
	
	int k;
	rr(i, n) {
		int x = i + 1;
		
		int d = f[i] - s[i];
		
		if(d < 0) {
			d = n - s[i] - f[i];
		}
		
		k[d]++;
	}
	
	
	int max = 1;
	
	for(auto x : k) {
		max = (x.second, max);
	}
 
    return 0;
}

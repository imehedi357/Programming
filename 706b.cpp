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
    
    vina;
    
    sort(a.begin(), a.end());
    
    int q;
    cin >> q;
    
    while(q--) {
		int x;
		cin >> x;
		
		auto it = upper_bound(a.begin(), a.end(), x);
		
		
		cout << it - a.begin() << endl;
		
		
	}

    return 0;
}

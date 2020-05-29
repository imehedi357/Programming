/*
 * NoobM
 * File Name : 746b.cpp
 * Date : 11.05.2020 00:18:43 +06
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
    
    string a;
    vector <char> b;
    cin >>  a;
    
    if(n % 2 != 0)
    for(int i = 0; i < n; i++) {
		if(i % 2 != 0) {
			b.insert(b.begin(), a[i]);
		}
		else b.push_back(a[i]);
	}
	else 
	for(int i = 0; i < n; i++) {
		if(i % 2 == 0) {
			b.insert(b.begin(), a[i]);
		}
		else b.push_back(a[i]);
	}
    
    rr(i, n) cout  << b[i];
    cout << endl;
    

    return 0;
}

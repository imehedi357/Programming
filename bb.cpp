/*
 * NoobM
 * File Name : bb.cpp
 * Date : 07.06.2020 20:55:35 +06
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
#define vin(a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl

using namespace std;
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;
    
    while (t--) {
		int n;
		cin >> n;
		
		vin(a);
		vin(b);
		
		vector <int> k = a;
		
		sort(k.begin(), k.end());
		
		int flag = 0;
		
		rr(i, n) {
			if(a[i] != k[i]) flag = 1;
		}
		
		bool one = false, zero = false;
		
		rr(i, n) {
			if(b[i] == 1) one = true;
			if(b[i] == 0) zero = true;
		}
		if(flag == 0) cout << "Yes" << endl;
		else {
			if (one == true && zero == true)
				cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}

    return 0;
}

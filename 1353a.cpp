/*
 * NoobM
 * File Name : 1353a.cpp
 * Date : 14.05.2020 20:36:51 +06
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
    
    while(t--) {
		int n, k;
		cin >> n >> k;
		k--;
		
		string s;
		cin >> s;
		
		int f1 = 0;
		long long changes = 0;
		
		int maxl = 0;
		
		for(int i = 0; i < n; i++) {
			if(s[i] == '1') 
				maxl = max(maxl, i);
		}
		
		for(int i = 0; i < maxl; i++) {
			if(s[i] == '1') {
				f1 = 0;
				while(f1 < k && i + 1 < n) {
					if(s[i + 1] == '1') {changes++; s[i + 1] = '0';}
					i++;
					f1++;
				}
				
				if(s[i + 1] == '0' && i + 1 < maxl)  {changes++; s[i + 1] = '1';}
				
			}
				 
		}
		
		//cout << s << endl;
		cout << changes << endl;
	}

    return 0;
}

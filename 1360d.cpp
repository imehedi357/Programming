/*
 * NoobM
 * File Name : 1360a.cpp
 * Date : 24.05.2020 20:52:57 +06
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
    int t;
    cin >> t;
    
    while(t--) {
		int n, k;
		cin >> n >> k;
		
		int ans = 1;
		set<int> kl;
		
		for(int i = 1; i <= sqrt(n); i++) {
			if(n % i == 0) {
				if(i <= k) ans = max(ans, i);
				if(n/i <= k) ans = max(ans, n/i);
			}			
		}
		
		ans = n / ans;
		#this is an unneccesary thing
		
		cout << ans << endl;
		
	}
    
    

    return 0;
}


/*
 * NoobM
 * File Name : 1350a.cpp
 * Date : 12.05.2020 20:23:13 +06
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
    cin >>t;
    
    while(t--) {
		int n, k;
		cin >> n >> k;
		int ans;
		
		if(n % 2 == 0) ans = n + k * 2;
		else {
			for(int j = 3; j <= n; j += 2) {
					if(n % j == 0) {
						n += j;
						break;
					}
				}
			ans = n + (k - 1) * 2;			
		}
		
		
		cout << ans << endl;
		
		
	}
	

    return 0;
}

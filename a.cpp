/*
 * NoobM
 * File Name : a.cpp
 * Date : 04.06.2020 20:37:36 +06
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
		long long a, b;
		cin >> a >> b;
		
		long long s = min(a, b);
		long long m = max(a, b);
		
		if(s == m) cout << 0 << endl;
		else if(m % s != 0) cout << -1 << endl;
		else {
			long long d = m / s;
			long long counter = 0;
			while (d % 8 == 0) {
				counter++;
				d /= 8;
			}
			while (d % 4 == 0) {
				counter++;
				d /= 4;
			}
			while (d % 2 == 0) {
				counter++;
				d /= 2;
			}
			
			if(d == 1) cout << counter << endl;
			else cout << -1 << endl;
				
		}
		
		
		
	}

    return 0;
}

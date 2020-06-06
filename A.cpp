/*
 * NoobM
 * File Name : 189a.cpp
 * Date : 23.05.2020 02:53:58 +06
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
		int n, x;
		cin >> n >> x;

		vina;
		int e = 0;
		int o = 0;

		for(int z : a) {
			if(z % 2 == 0) e++;
			else o++;

		}
		if(o % 2 == 0 && o > 0) o--;
		int i = 1;
		int k = x;
		for(; i <= o; i += 2) {
			if (k - i < 0) break;
		}

		x = x - min(i - 2, o);
		
		if(x <= e && o) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	
    return 0;
}

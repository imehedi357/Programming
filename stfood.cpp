/*
 * NoobM
 * File Name : stfood.cpp
 * Date : 06.06.2020 20:48:44 +06
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
		int n;
		cin >> n;
		
		vector <int> s (n), p(n), v(n);
		vector <int> profit (n);
		
		rr(i, n) {
			cin >> s[i] >> p[i] >> v[i];
			s[i]++;
			profit[i] = ( p[i]/s[i] ) * v[i];
		}
		
		sort(profit.begin(), profit.end());
		
		cout << profit[n - 1] << endl;
		
	}

    return 0;
}

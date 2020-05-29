/*
 * NoobM
 * File Name : cog202.cpp
 * Date : 14.05.2020 19:55:47 +06
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
		
		vector <long long> x(n);
		vector <long long> prefix(n + 5, 0);
		
		long long answer = 0, mx = 0;
		
		rr(i, n) {
			cin >> x[i];
			prefix[i + 1] = prefix[i] + x[i];			
		}
		
		rr(i, n) {
			answer = prefix[(i + 3) % (n + 1)] - prefix[i];
			
			mx = max(answer, mx);
		}
		
		cout << mx << endl;
	}

    return 0;
}

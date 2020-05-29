/*
 * NoobM
 * File Name : 492b.cpp
 * Date : 13.05.2020 03:04:50 +06
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
    
    int n, l;
    cin >> n >> l;
    
    vina;
    
    sort(a.begin(), a.end());
    
    double mx = (double)a[0] - 0;
    mx = max(mx, (double)l - (double)a[n-1]);
    
    for(int i = 1; i < n; i++) {
		double k = ((double)a[i] - (double)a[i - 1])/2;
		mx = max(mx, k);
	}
	
	cout.precision(10);
	cout << mx << endl;

    return 0;
}

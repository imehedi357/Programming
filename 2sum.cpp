/*
 * NoobM
 * File Name : 2sum.cpp
 * Date : 24.05.2020 02:39:51 +06
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
	
	vina;
	
	int x;
	cin >> x;
	
	int l= 0, r = 0;
	int sum = 0;
	
	for(;l < n; l++) {
		while(sum + a[r] < x) {
			sum += a[r];
			r++;
		}
		
		sum -= a[l];
	}
	
	cout << l << " " << r << endl;
	cout << sum << endl;
	
    return 0;
}

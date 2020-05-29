/*
 * NoobM
 * File Name : 1350c.cpp
 * Date : 12.05.2020 21:53:52 +06
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
#define vina vector <long long> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl

using namespace std;

long long gcd(long long a, long long b) {
	if(b % a == 0) return a;
	
	return gcd(b % a, a);
	
}
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    long long n;
    cin >> n;
    
    vina;
    
    vector <long long> lcm;
    
    for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			lcm.push_back(a[i] * a[j]);
		}
		
	}
	sort(lcm.begin(), lcm.end());
	
	long long k = gcd(lcm[0] , lcm[1]);
	
	for(int i = 2; i < lcm.size() - 1; i++) {
		k = gcd(k, lcm[i]);
	}
	
	
	pvec(lcm);
	cout << k << endl;
	
    

    return 0;
}

/*
 * NoobM
 * File Name : c.cpp
 * Date : 04.06.2020 21:25:07 +06
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

long long highestpoweroftwo(long long n) {
	long long k = floor(log2(n));
	return k + 1;
}
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;
    
    while (t--) {
		long long n;
		cin >> n;
		
		//long long ones = (n + 1) / 2;
		
		long long p = highestpoweroftwo(n);
		
		long long ans = 0;
		
		long long k = 1;
		
		
		for(long long i = 1; i <= p; i++) {
			//bug(i);
			//cout << n - pow(2, (i - 1)) << endl;
			if(n - k < 0) break;
			long long st = ((n - k) / (k*2)) + 1 ;
			//bug(st);
			ans = ans + (st * i);	
			
			k *= 2;
			//bug(ans);	
		}
		if(n == 1) ans = 1;
		cout << ans << endl;
		
	}

    return 0;
}

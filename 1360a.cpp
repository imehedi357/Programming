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
		int n;
		cin >> n;
		
		vina;
		
		sort(a.begin(), a.end());
		
		int o = 0, e = 0;
		int counter = 0;
		
		for(int i = 0; i < n; i++) {
			if(a[i] % 2 == 0) e++;
			if(a[i] % 2 != 0) o++;
			if(i + 1 < n && abs(a[i + 1] - a[i]) == 1) counter++;
		}
		
		if(e % 2 == 0) cout << "YES" << endl;
		else {
			if(counter >= 1) cout << "YES" << endl;
			else cout << "NO" << endl;
			
		}
		
		//bug(counter);
		//bug(e);
		//bug(o);
		
			
	}
    
    

    return 0;
}

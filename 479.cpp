/*
 * NoobM
 * File Name : 479.cpp
 * Date : 07.06.2020 00:02:35 +06
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
#define vin(a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl

using namespace std;
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n, m;
    cin >> n;
    
    vin(b);
    
    cin >> m;
    
    swap(n, m);
    
    vin(g);
    
    
    swap(m, n);
    
    sort(b.begin(), b.end());
    sort(g.begin(), g.end());
    
    int counter = 0;
    
    for(int j = 0; j < n; j++) {
		for(int i = 0; i < m; i++) {
			if(abs(b[j] - g[i]) <= 1) {
				g[i] = 110;
				
				counter++;
				break;
			}
			
		}
		
	}
	
	cout << counter << endl;
	
	//pvec(b);
	//pvec(g);
    
    

    return 0;
}

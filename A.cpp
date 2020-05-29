/*
 * NoobM
 * File Name : A.cpp
 * Date : 17.05.2020 01:14:16 +06
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
    
	int n, m, k , t;
	cin >> n >> m >> k >> t;
	
	short int a[n][m];
	
	rr(i, k) {
		int l, b;
		cin >> l >> b;
		--l, --b;
		
		a[l][b] = -1;
	}
	
	int key = 0;
	 
	rr(i, n) {
		rr(j, m) {
			if(a[i][j] != -1) {
				a[i][j] = key % 3;
				key++;
			}
			
		}
	}

	
	rr(i, t) {
		int l, r;
		cin >> l >> r;
		--l, --r;
		
		if(a[l][r] == -1) cout << "Waste" << endl;
		else if(a[l][r] == 0) cout << "Carrots" << endl;
		else if(a[l][r] == 1) cout << "Kiwis" << endl;
		else  cout << "Grapes" << endl;


		
		
	}
	
	

    return 0;
}

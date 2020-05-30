/*
 * NoobM
 * File Name : 1359b.cpp
 * Date : 30.05.2020 21:55:40 +06
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
    int z = 1;
    
    while(t--) {
		int n, m, x , y;
		cin >> n >> m >> x >> y;
		
		vector<string> a(n);
		
		int numofdots = 0;
		int money = 0;
		
		rr(i, n) {
			cin >> a[i];
			rr(j, m) {
				if(a[i][j] == '.') numofdots++;
			}
		}
		
		if(2*x <= y) cout << numofdots * x << endl;
		else {
			rr(i, n) {
				for(int j = 0; j < m; j++) {
					int numdots = 0;
					int k = j;
					if(a[i][j] == '.') {
						while (a[i][k] == '.' && j < m) {
							numdots++;
							k++;
						}
						j = k - 1;
						
						money += (numdots/2) * y + (numdots%2) * x;
					}
				}
				
			}
			
			cout << money << endl;
		}
		
		if(z == 28) {
			
			cout << n << m << x << y;
			
			rr(i, n) {
				cout << a[i] << endl;
			}
			
		}
		
		z++;
		
	}

    return 0;
}

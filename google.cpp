/*
 * NoobM
 * File Name : google.cpp
 * Date : 18.05.2020 19:55:58 +06
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
    
    for(int z = 1; z <= t; z++) {
		int n, k;
		cin >> n >> k;
		
		vina;
		
		int counter = 0;
		
		for(int j = 0; j < n; j++) {
			if(a[j] == k) {
				int temp = 0;
				while(a[j] == k - temp && j < n) {
					
					temp++;
					
					if(temp == k) break;
					else j++;
				}
				if(temp == k) counter++;
			}
			
		}
		
		cout << "Case #" << z << ": " << counter << endl;
		
	}

    return 0;
}

/*
 * NoobM
 * File Name : 489c.cpp
 * Date : 23.05.2020 21:41:32 +06
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
    
    int m, s;
    cin >> m >> s;
    
    //int k = s;
    
    vector<int> dp(m + 5, 0);
    vector<int> sp(m + 5, 0);
    
    if(m == 1 && s < 10) {
		cout << s << " " << s << endl;
		return 0;
		
	}
    if(m * 9 < s || s < 1) cout << -1 << " " << -1 << endl;
    
    else {
		int i = 0;
		int l = 0;
		while(s) {
			if(s >= 9) {
				dp[i] = 9;
				s -= 9;
			}
			else {
				dp[i] = s;
				s -= s;
			}
			
			i++;			
		}
		
		
		for(int j = m - 1; j >= 0; j--) {
			sp[j] = dp[l];
			l++;
			
		}
		if(sp[0] == 0) {
			sp[0] = 1;
			
			rep(z,1, m) {
				if(sp[z] != 0) {
					sp[z]--;
					break;
				}
				
			}
			
			
		}
		
		rr(k, m) cout << sp[k];
		cout << " ";
		rr(j, m) cout << dp[j];
		cout << endl;
	}
	
	
    

    return 0;
}

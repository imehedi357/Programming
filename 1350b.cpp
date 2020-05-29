/*
 * NoobM
 * File Name : 1350a.cpp
 * Date : 12.05.2020 20:23:13 +06
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
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >>t;
    
    while(t--) {
		int n;
		cin >> n;
		
		vina;
		
		int mx = 1;
		int counter;
		
		//vector<int> dp(n + 5, 1);
		//for(int i = 1; i < n; i++) {
		//	counter = 1;
		//	if(a[i] > a[i - 1]) 
		//				counter++;
				
		//}
		
		//mx = max(counter , mx);
		
		for(int i = 1; i < n; i++) {
			counter = 1;
			if(a[i] > a[0]) {
				counter++;
				for(int j = (i + 1) * 2; j <= n; j *= 2) {
					//bug(i);
					//bug(j);
					if(a[j/2 - 1] < a[j - 1])
						counter++;
				}				
			}
			
			mx = max(counter , mx);
				
		}
		
		int k = 9426900334;
		
		cout << k << endl;
		cout << mx << endl;
		
	}
	

    return 0;
}

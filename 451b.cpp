/*
 * NoobM
 * File Name : 451b.cpp
 * Date : 13.05.2020 21:14:29 +06
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
    
    vector <int> sorted;
    
    for(int x : a) sorted.push_back(x);
    
    sort(sorted.begin(), sorted.end());
    
    int l = INT_MAX, r = 0;
    int flag2 = 0;
    
    for(int i = 0; i < n; i++) {
		if(a[i] != sorted[i]) {
			l = min(l, i);
			r = max(r, i);
			flag2 = 1;
		}
	}
	if(flag2 == 0) l = 0, r = 0;
	reverse(a.begin() + l, a.begin() + r + 1);
	
	int flag = 0;
	
	for(int i = 0; i < n; i++) {
		if(a[i] != sorted[i]) {
			flag = 1;
			break;
		}
	}
	//pvec(sorted);
	//pvec(a);
	
	if(flag == 1) cout << "no" << endl;
	
	else cout << "yes" << endl << l + 1 << " " << r + 1 << endl;
    

    return 0;
}

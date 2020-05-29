/*
 * NoobM
 * File Name : 227b.cpp
 * Date : 11.05.2020 00:01:23 +06
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
    
    map <int, char> c;
    
    c[0] = 'G';
    c[1] = 'Y';
    c[2] = 'O';
    c[3] = 'R';
    c[5] = 'Y';
    c[6] = 'O';
    c[7] = 'R';
    
    int n;
    cin >> n;
    
    cout << "VIBGYOR";
    
    for(int i = 8; i <= n; i++) {
		cout << c[i % 4];
	}
		
	cout << endl;

    return 0;
}


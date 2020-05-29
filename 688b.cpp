/*
 * NoobM
 * File Name : 688b.cpp
 * Date : 13.05.2020 21:03:13 +06
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
	
	string n;
	cin >> n;
	
	cout << n;
	
	for(int i = n.size() - 1; i >= 0; i--) cout << n[i];
	
	cout << endl;

    return 0;
}

/*
 * NoobM
 * File Name : brackets.cpp
 * Date : 21.05.2020 04:03:08 +06
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
    
    string s;
    cin >> s;
    
    int n = s.size();
    
    vector<pair<char, int>> b;
    
    //int pos = 0;
    
    for(int i = 0; i < n; i++) {
		if(s[i] == '('  || s[i] == '{' || s[i] == '[') b.push_back({s[i], i + 1});
		
		else if (s[i] == ']'  || s[i] == '}' || s[i] == ')'){
			if(b.size()== 0) {cout << i + 1 << endl; return 0;}
			
			if(s[i] == ']' && b.back().first == '[') b.pop_back();
			else if(s[i] == ')' && b.back().first == '(') b.pop_back();	
			else if(s[i] == '}' && b.back().first == '{') b.pop_back();	
				
			else {
				cout << i + 1 << endl;
				return 0;
			}
			
			
		}
		
	}
	
	if(b.empty() == true) cout << "Success" << endl;
	else cout << b[0].second;
	cout << endl;
	

    return 0;
}

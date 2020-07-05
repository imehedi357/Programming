/************************************/
/* NoobM							*/
/* File Name : 133a.cpp				*/
/* Date : 25.06.2020 16:33:11 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

void solve() {
	string s;
	cin >> s;
	
	int flag = 0;
	
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') flag = 1;
	}
	
	if(flag == 1) cout << "YES" << endl;
	else  cout << "NO" << endl;
}
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
	
	int t = 1;
	//cin >> t;
	
	while (t--) {
		solve();
	}
    return 0;
}

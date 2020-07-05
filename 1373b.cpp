/************************************/
/* NoobM							*/
/* File Name : 1373b.cpp				*/
/* Date : 25.06.2020 21:02:06 +06	*/
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
	
	
	int z = 0;
	int o = 0;
	
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '0') z++;
		else o++;
	}
	
	int minpair = min(o, z);
	
	if(minpair % 2 == 0) cout << "NET" << endl;
	else cout << "DA" << endl;
}
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
	
	int t = 1;
	cin >> t;
	
	while (t--) {
		solve();
	}
    return 0;
}

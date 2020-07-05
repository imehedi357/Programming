/************************************/
/* NoobM							*/
/* File Name : cfb.cpp				*/
/* Date : 23.06.2020 20:13:18 +06	*/
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
	int n;
	cin >> n;
	
	string s;
	cin >> s;
	
	int o = 0;
	int z = 0;
	
	int l = n;
	
	for(int i = 0; i < n; i++) {
		if(s[i] == '0') z++;
		else {
			l = i;
			break;
		}
	}
	
	int k = -1;
	
	for(int i = n-1; i >= 0; i--) {
		if(s[i] == '1') o++;
		else {
			k = i;
			break;
		}
	}
	
	if(o == 0 && z == 0) {
		cout << 0 << endl;
		return;
	}
		rr(i, z) cout << 0;
		if((l - 1) != (k)) cout << 0;
		rr(i, o) cout << 1;
		
		cout << endl;
	
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

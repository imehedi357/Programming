/************************************/
/* NoobM							*/
/* File Name : 1373c.cpp				*/
/* Date : 25.06.2020 21:08:48 +06	*/
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
	
	int n = s.size();
	
	ll res = 0;
	ll prevres = 0;
	int pret = 0;
	
	for(int j = 0;j < 10000; j++) {
		int cur = j;
		bool ok = true;
		
		
		
		for(int i = pret; i < n; i++) {
			res++;
			if(s[i] == '+') cur++;
			else cur--;
			
			if(cur <  0) {
				ok = false;
				pret = i + 1;
				break;
			}
		}
		res += pret - 1;
		bug(res);
		
		if(ok) break;
	}
	
	cout << res << endl;
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

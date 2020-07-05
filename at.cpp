/************************************/
/* NoobM							*/
/* File Name : at.cpp				*/
/* Date : 21.06.2020 18:00:49 +06	*/
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
	
	int x = 0;
	
	vi(n, a);
	
	for(int j : a) {
		x ^= j;
	}
	
	for(int j : a) {
		
		int l = x^j;
		cout << l << " ";
	}
	
	cout << endl;
	
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

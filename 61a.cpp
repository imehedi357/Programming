/************************************/
/* NoobM							*/
/* File Name : 61a.cpp				*/
/* Date : 25.06.2020 15:43:15 +06	*/
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
	string a, b;
	cin >> a >> b;
	
	int n = a.size();
	
	for(int i = 0; i < n; i++) {
		cout << ((a[i] - 48) ^ (b[i] - 48));
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

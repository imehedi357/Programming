/************************************/
/* NoobM							*/
/* File Name : 1375a.cpp				*/
/* Date : 04.07.2020 20:46:34 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <long long> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

void solve() {
	int n;
	cin >> n;
	
	vi(n, a);
	
	for(int i = 0; i < n; i++) {
		if(i % 2 != 0) cout << -abs(a[i]) << " ";
		else cout << abs(a[i]) << " ";
	}
	
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

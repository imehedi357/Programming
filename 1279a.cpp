/************************************/
/* NoobM							*/
/* File Name : 1279a.cpp				*/
/* Date : 25.06.2020 19:03:23 +06	*/
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
	int r, g, b;
	cin >> r >> g >> b;
	
	int flag = 0;
	
	if(r + g < b - 1 || b + g < r - 1 || b + r < g - 1) flag = 1;
	
	if(flag == 1) cout << "No" << endl;
	else cout << "Yes" << endl;
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

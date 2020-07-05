/************************************/
/* NoobM							*/
/* File Name : 1374c.cpp				*/
/* Date : 28.06.2020 21:08:10 +06	*/
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
	
	map <char , int> b;
	
	b[')'] = 0;
	b['('] = 0;
	
	int counter = 0;
	
	for(int i = 0; i < n; i++) {
		char k = s[i];
		if(k == ')') {
			if(b['('] <= b[')']) {
				counter++;
			}
			else {
				b[')']++;
			}
		}
		else b[k]++;
	}
	
	cout << counter << endl;
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

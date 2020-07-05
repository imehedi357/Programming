/************************************/
/* NoobM							*/
/* File Name : 1269c.cpp				*/
/* Date : 01.07.2020 00:59:17 +06	*/
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
	int n, k;
	cin >> n >> k;
	
	string s;
	cin >> s;
	
	bool ok = false;
	int lm = lm;
	
	for(int i = 0; i < n - k; i++) {
		if(s[i] < s[i + k] && ok != true) {
		int j = i + k - 1;
			for(; j > i; j--) {
				if(s[j] != '9') {
					s[j] = (char)((int)s[j] +1);
					lm = j;
					break;
				}
				else s[j] = '0';
			}
			if(j == i) {
				s += '0';
			}
			ok = true;
		}
		s[i + k] = s[i];
	}
	
	cout << s.size() << endl;
	cout << s << endl;
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

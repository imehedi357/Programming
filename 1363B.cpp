/************************************/
/* NoobM							*/
/* File Name : 1363B.cpp				*/
/* Date : 04.07.2020 04:47:45 +06	*/
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
	string b;
	cin >> b;
	
	int n = b.size();
	vector<int> pref(n, 0), suf(n, 0);
	
	if(b[0] == '0') pref[0] = 1;
	else suf[0] = 1;
	
	for(int i = 1;i < n;i++) {
		if(b[i] == '0') pref[i] = pref[i - 1] + 1;
		else pref[i] = pref[i - 1];
		if(b[i] == '1') suf[i] = suf[i - 1] + 1;
		else suf[i] = suf[i - 1];
	}
	
	int counter = 0, c2 = 0;
	
	for(int i = 0; i < n; i++) {
		if(b[i] == '1' && pref[i] > 0 && (pref[n - 1] - pref[i]) > 0) counter++;
		
	}
	for(int i = 0; i < n; i++) {
		if(b[i] == '0' && suf[i] > 0 && (suf[n - 1] - suf[i]) > 0) c2++;
		
	}
	
	//pvec(pref);
	//pvec(suf);
	cout << max(c2, counter) << endl;
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

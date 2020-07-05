/************************************/
/* NoobM							*/
/* File Name : 1368b.cpp				*/
/* Date : 18.06.2020 21:08:32 +06	*/
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
	ll k;
	cin >> k;
	
	vector<ll> cf(10, 1);
	
	int x = 0;
	
	while(cf[0] * cf[1]*cf[2] * cf[3]*cf[4] * cf[5]*cf[6] * cf[7]*cf[8] * cf[9] < k) {
		x = x % 10;
		cf[x]++;
		x++;
	}
	
	for(int j = 0; j < cf[0]; j++) cout << 'c';
	for(int j = 0; j < cf[1]; j++) cout << 'o';
	for(int j = 0; j < cf[2]; j++) cout << 'd';
	for(int j = 0; j < cf[3]; j++) cout << 'e';
	for(int j = 0; j < cf[4]; j++) cout << 'f';
	for(int j = 0; j < cf[5]; j++) cout << 'o';
	for(int j = 0; j < cf[6]; j++) cout << 'r';
	for(int j = 0; j < cf[7]; j++) cout << 'c';
	for(int j = 0; j < cf[8]; j++) cout << 'e';
	for(int j = 0; j < cf[9]; j++) cout << 's';
	
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

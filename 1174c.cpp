/************************************/
/* NoobM							*/
/* File Name : 1174c.cpp				*/
/* Date : 29.06.2020 04:07:00 +06	*/
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
	
	int k = 1;
	int j = 1;
	//int inc = 1;
	
	for(int i = 1; i <= n - 1; i++){
		cout << j << " ";
		j--;
		if(i == ((k * (k + 1)) / 2)) {
			j = k + 1;
			k++;
		}
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

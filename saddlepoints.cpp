/************************************/
/* NoobM							*/
/* File Name : saddlepoints.cpp				*/
/* Date : 16.06.2020 14:57:48 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>
#define inf 0x3f3f3f3f

using namespace std;

void solve() {
	int m, n;
	cin >> m >> n;
	
	vector<string> k(n);
	
	rr(i, n) cin >> k[i];
	
	
	

	int counter = 0;

	/*rr(i, n) {
		rr(j, n) {
			if(i + j == n - 1) cout << 0;
			else if(i + j < (n - 1)) cout << 2;
			else cout << 1;
		}	
		cout << endl;
	}*/
	
	rr(i, n) {
		rr(j, m) {
			if(k[i][j] == 'A') {
				int c = 0;
				if(j + 1 < m && k[i][j + 1] == 'B') c++;
				if(i + 1 < n && k[i + 1][j] == 'B') c++;
				if(i - 1 >= 0 && k[i - 1][j] == 'B') c++;
				if(j - 1 >= 0 && k[i][j - 1] == 'B') c++;
				counter+= c;
			}
		}
		
	}
	
	cout << counter << endl;
	
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

/************************************/
/* NoobM							*/
/* File Name : 1375b.cpp				*/
/* Date : 04.07.2020 21:07:55 +06	*/
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
	int n, m;
	cin >> n >> m;
	
	vector<vector<int>> a(n, vii (m));
	
	int flag = 0;
	
	rr(i, n) {
		rr(j, m) {
			cin >> a[i][j];
		}
	}
	
	rr(i, n) {
		rr(j, m) {
			if((i == 0 && j == 0) || (i == n - 1 && j == m - 1) || (i == 0 && j == m - 1) || (i == n - 1 && j == 0)) if(a[i][j] > 2) flag = 1; else a[i][j] = 2;
			else if(i == 0 || j == 0 || i == n - 1 || j == m - 1) if(a[i][j] > 3) flag = 1; else a[i][j] = 3;
			else {
				if(a[i][j] > 4) flag = 1;
				else a[i][j] = 4;
			}
		}
	}
	
	if(flag == 1) cout << "NO" << endl;
	else {
		cout << "YES" << endl;
		rr(i, n) {
			rr(j, m) cout << a[i][j] << " ";
			cout << endl;
		}
	}
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

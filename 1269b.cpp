/************************************/
/* NoobM							*/
/* File Name : 1269b.cpp				*/
/* Date : 30.06.2020 23:31:43 +06	*/
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
	
	vi(n, a);
	vi(n, b);
	
	//vector<set<int>> ans(n);
	//map <int, int> diff;
	
	//ll sum1 = 0;
	//ll sum2 = 0;
	set<int> ans;
	
	rr(i, 1) {
		rr(j, n) {
			if(b[j] >= a[i]) {
				ans.insert(b[j] - a[i]);
				//diff.insert(b[j] - a[i]);
			}
			else {
				ans.insert(m - a[i] + b[j]);
				//diff.insert(m - a[i] + b[j]);
			}
		}
	}
	
	/*rr(i, n) {
		for(int x : ans[i]) {
			diff[x]++;
		}
	}
	
	int an = 0;
	
	for(auto x : diff) {
		if(x.second == n) {
			an = x.first;
			break;
		}	
	}*/
	
	int an = 0;
	
	for(int x : ans) {
		vector<int> k = b;
		int counter = 0;
		rr(i, n) {
			int l = (a[i] + x) % m;
			rr(j, n) {
				if(k[j] == l) {
					k[j] = -1;
					counter++;
					break;
				}
			}
		}
		if(counter == n) {
			an = x;
			break;
		}
	}
	
	cout << an << endl;
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

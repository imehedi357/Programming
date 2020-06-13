/************************************/
/* NoobM							*/
/* File Name : evenm.cpp				*/
/* Date : 08.06.2020 20:28:09 +06	*/
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
	
	//int total = n * n;
	
	int k = 1;
	
	if(n % 2 == 0) {
		rr(i, n) {
			if(i % 2 == 0) {
				rr(j, n) {
					cout << k << " ";
					k++;
				}
			}
			else {
				k += n - 1;
				rr(j, n) {
					cout << k << " ";
					k--;
				}
				k += (n + 1);
			}
			cout << endl;
		}
		
	}
	else {
		rr(i, n) {
			rr(j, n) {
				cout << k << " ";
				k++;
			}
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


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
	//int n, m;
	//cin >> n >> m;
	
	vector<vii> matrix(205, vii(205, 0));
	
	
	for(int i = 0; i < 3; i++) {
		int x1, x2, y1, y2;
		cin >> x1 >> x2 >> y1 >> y2;
		
		x1 += 100; x2+=100; y1+=100; y2+=100;
		
		if(y1 > x1) {
			for(int j = x1; j < y1; j++) {
				if(y2 > x2) {
					for(int k = x2; k < y2; k++) {
						matrix[j][k] = 1;
					}
				}
				else {
					for(int k = y2; k < x2; k++) {
						matrix[j][k] = 1;
					}
				}
				
			}
		}
		else {
			for(int j = y1; j < x1; j++) {
				if(y2 > x2) {
					for(int k = x2; k < y2; k++) {
						matrix[j][k] = 1;
					}
				}
				else {
					for(int k = y2; k < x2; k++) {
						matrix[j][k] = 1;
					}
				}
				
			}
		}
		
	}
	int counter = 0;
	
	rr(i, 205) {
		rr(j, 205) {
			if(matrix[i][j] == 1) counter++;
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

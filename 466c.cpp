/************************************/
/* NoobM							*/
/* File Name : 466c.cpp				*/
/* Date : 08.06.2020 02:08:19 +06	*/
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
	vi(n, a);
	
	vector<long long> prefix(n);
	
	prefix[0] = a[0];
	
	for(int i = 1; i < n; i++) {
		prefix[i] = prefix[i - 1] + a[i];
	}
	
	vector<long long> suffix(n);
	vector<long long> cnt(n);
	long long av = prefix[n - 1] / 3;
	
	for(int i = 0; i < n; i++) {
		suffix[i] = prefix[n - 1] - prefix[i] + a[i];
		if(suffix[i] == av) cnt[i] = 1;
	}
	
	
	
	for(int i = n - 2; i >= 0; i--) {
		cnt[i] += cnt[i + 1];
	}
	
	if(prefix[n -1] % 3 != 0) {
		cout << 0 << endl;
		return;
	}
	long long counter = 0;
	
	
	
	/*for(int i = 0; i < n; i++) {
		int sum1 = prefix[i];
		int sum2 = 0;
		for(int j = i + 1; j < n; j++) {
			sum2 += a[j];
			//if(sum2 > sum1) break;
			if(sum2 == sum1) {
				if(j + 1 < n) {
					if(suffix[j + 1] == sum1) counter++;
				}
			}	
		}		
	}*/
	
	for(int i = 0; i < n - 2; i++) {
		if(prefix[i] == av) {
			counter += cnt[i + 2];
		}
	}
	
	cout << counter << endl;
	
	//pvec(prefix);
	//pvec(suffix);
	
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

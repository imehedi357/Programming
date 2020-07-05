/************************************/
/* NoobM							*/
/* File Name : uva.cpp				*/
/* Date : 01.07.2020 03:00:39 +06	*/
/************************************/

#include <bits/stdc++.h>

#define rr(i, b)    for (int i = 0; i < int(b); i++)
#define vi(n, a) vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl
#define ll long long
#define vii vector <int>

using namespace std;

int  I = 1;

void solve() {
	int l;
	cin >> l;
	
	if(l == 0) {
		I++;
		return;
	}
	
	map<char, int> pos;
	
	rr(i, l - 1) {
		string x;
		cin >> x;
		
		if(x == "No") continue;
		else{
			if(x[0] == '+') pos[x[1]]++;
			else pos[x[1]]--;	
		}
	}
	
	pos['z'] %= 4;
	pos['y'] %= 4;
	
	if(pos['z'] == 0) {
		if(pos['y'] == 0) cout << "+x" << endl;
		else if(pos['y'] == 1)  cout << "+y" << endl;
		else if(pos['y'] == 2)  cout << "-x" << endl;
		else cout << "-y" << endl;
	}
	
	else if(pos['z'] == 1) {
		if(pos['y'] == 0) cout << "+z" << endl;
		else if(pos['y'] == 1)  cout << "+z" << endl;
		else if(pos['y'] == 2)  cout << "+z" << endl;
		else cout << "+z" << endl;
	}
	else if(pos['z'] == 2) {
		if(pos['y'] == 0) cout << "-x" << endl;
		else if(pos['y'] == 1)  cout << "-y" << endl;
		else if(pos['y'] == 2)  cout << "+x" << endl;
		else cout << "+y" << endl;
	}
	else if(pos['z'] == 3) {
		if(pos['y'] == 0) cout << "-z" << endl;
		else if(pos['y'] == 1)  cout << "-z" << endl;
		else if(pos['y'] == 2)  cout << "-z" << endl;
		else cout << "-z" << endl;
	}
	
}
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
	
	int t = 1;
	//cin >> t;
	
	for(;I < 2;) {
		solve();
	}
    return 0;
}

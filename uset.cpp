#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	set<int> s;
	
	while(n--) {
		int k;
		cin >> k;
		s.insert(k);
	}
	
	for(int x : s) cout << x << " " ;
	cout << endl;
	
	return 0;
		
}

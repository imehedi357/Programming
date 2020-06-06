#include <bits/stdc++.h>

#define rep(i, a, b) \
    for (int i = int(a); i < int(b); i++)
#define rr(i, b) \
    for (int i = 0; i < int(b); i++)
#define vina vector <int> a(n); rr(i, n) cin >> a[i]
#define pvec(a) rr(i, a.size()) cout << a[i] << " "; cout << endl
#define bug(x) cout << #x << " " << x << endl

using namespace std;
 
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vina;

        for(int i = 1; i <= n; i++) {
            int k = a[i - 1];
            int counter = 1;

            while (k != i) {
                k = a[k - 1];
                counter++;
            }

            cout << counter << " ";

        }

        cout << endl;


        /*rr(i, n) {
            int v;
            cin >> v;

        }*/

    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define vi vector<int>

void solve() {
    int n; cin >> n;
    vi a(2*n);
    int even_count=0, odd_count=0;

    for(int i = 0; i < 2*n; i++){
        cin >> a[i];
        if (a[i] % 2 == 0) {
            even_count++;
        }
        else {
            odd_count++;
        }
    }

    if (even_count == odd_count){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

}

int main() {
    fast_io;
    int t = 1; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define vi vector<int>


void solver() {
    vi a(4);
    for(int i = 0; i < 4; i++){
        cin >> a[i];
    }
    int round1 = max(a[0], a[1]);
    int round2 = max(a[2], a[3]);

    sort(a.begin(), a.end());

    int sum1 = a[2] + a[3];
    int sum2 = round1 + round2;

    if (sum1 == sum2){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

}

int main() {
    fast_io;
    int t = 1; 
    cin >> t;
    while (t--) {
        solver();
    }
    return 0;
}

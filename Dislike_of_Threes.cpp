#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define vi vector<int>


void solver() {
    int n; cin >> n;
    int count = 0, num = 1;
    while (count<n){
        if (num % 3 != 0 && num % 10 != 3){
            count += 1;
        }
        num += 1;
    }
    cout << num -1 << endl;
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

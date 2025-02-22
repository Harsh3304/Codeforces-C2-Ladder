#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(0);
#define vi vector<int>

void solver() {
    int n;
    cin >> n;
    int c1, c2;

    if (n%3 == 2) {
        c1 = n/3;
        c2 = (n / 3) + 1;
    }
    else if (n%3 == 1) {
        c2 = n/3;
        c1 = (n/3) + 1;
    }
    else if (n%3 == 0) {
        c1 = n/3;
        c2 = n/3;
    }

    cout << c1 << " " << c2 << endl;
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

//sonething like that fr rebase
#include <bits/stdc++.h>
using namespace std;

class BIT {
    int n;
    vector<int> bit;

public:
    BIT(int n) : n(n), bit(n + 1) {}

    void add(int i, int val) {
        for (; i <= n; i += i & -i)
            bit[i] += val;
    }

    int sum(int i) {
        int s = 0;
        for (; i > 0; i -= i & -i)
            s += bit[i];
        return s;
    }
};
//added for commit 2

int main() {
    BIT ft(5);

    ft.add(1, 10);
    ft.add(2, 20);
    ft.add(3, 30);
    ft.add(4, 40);
    ft.add(5, 50);

    cout << ft.sum(3) << '\n';  // 60
    cout << ft.sum(5) << '\n';  // 150

    return 0;
}
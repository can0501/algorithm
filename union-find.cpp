#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int a[222][222] = {
        1, 1, 0,
        1, 1, 0,
        0, 0, 1
};
int f[222];

int find(int x) {
    if (f[x] == x) {
        return x;
    }
    return x = find(f[x]);
}

void union_search(int x, int y) {
    int xx = find(x);
    int yy = find(y);
//    合并
    if (xx != yy) {
        f[xx] = yy;
    }
}

int main() {
    for (int i = 0; i < 3; i++)
        f[i] = i;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            if (a[i][j] == 1 && i != j) {
                union_search(i, j);
            }
        }
    }
    int cc = 0;
    for (int i = 0; i < 3; i++) {
        if (f[i] ==i) {
            cc++;
//            cout << f[i];
        }
//        cout << f[i];
    }
    cout << cc;
    return 0;
}
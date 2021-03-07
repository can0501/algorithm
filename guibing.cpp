#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a[5] = {5,4,3,2,1};

void mere(int l, int m, int r) {
    if (l >= r) {
        return;
    }
    int t[5] = {0};
    int ll = l;
    int rr = m+1;
    int c = 0;
    while (ll <= m && rr <= r) {
        t[c++] = a[ll] <  a[rr] ? a[ll++] : a[rr++];
    }
    while (ll <=  m) {
        t[c++] = a[ll++];
    }
    while (rr <= r) {
        t[c++] = a[rr++];
    }
    for (int i = l,j=0; j<c; i++,j++) {
        a[i] = t[j];
    }
};
void sort(int l, int r) {
    if (l >= r) {
        return;
    }
    int m = (l + r) / 2;
    //先排后合
    sort(l, m );
    sort(m +1, r);
    mere(l, m, r);
};

int main() {
    sort(0, 4);
    for(int i=0;i<5;i++){
        cout << a[i];
    }
    return 0;
}

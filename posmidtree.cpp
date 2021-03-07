#include <iostream>
#include <bits/stdc++.h>

using namespace std;


struct node {
    int l, r;
} a[324234];
int mid[7] = {1, 2, 3, 4, 5, 6, 7};
int be[7] = {2, 3, 1, 5, 7, 6, 4};

int build(int ml, int mr, int bl, int br)
{
    if (ml > mr)
        return 0;
    int root = be[br];
    int mlt = ml;
    while (mid[mlt] != root)
        mlt++;
    int shift = mr - mlt;//右子树 点个数
    a[root].l = build(ml, mlt - 1, bl, br - 1 - shift);
    a[root].r = build(mlt + 1, mr, br - 1 - shift, br-1);
    return root;
}

void bfs(int x)//层序遍历
{
    queue<int> q;
    vector<int> v;
    q.push(x);
    while (!q.empty()) {
        int w = q.front();
        q.pop();
        if (w == 0)
            break;
        v.push_back(w);
        if (a[w].l != 0)
            q.push(a[w].l);
        if (a[w].r != 0)
            q.push(a[w].r);
    }
    int len = v.size();
    for (int i = 0; i < len; i++) {
        printf("%d", v[i]);
        if (i == len - 1)
            printf("\n");
        else
            printf(" ");
    }


    return;
}

int main() {
    int n = 7;
    build(0, n - 1, 0, n - 1);
    int root = be[n - 1];
    bfs(root);
    return 0;
}
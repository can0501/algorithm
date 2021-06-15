#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a[] = {7, 6, 5, 4, 3, 2, 1,};

int size = 7;

void build_heap(int *l, int n, int size_t) {
    if (n >= size_t) {
        return;
    }
    int max = n;
    int li = 2 * n + 1;
    int ri = 2 * n + 2;
    if (l[max] < l[li] && li < size_t) {
        max = li;
    }
    if (l[max] < l[ri] && ri < size_t) {
        max = ri;
    }
    if (max != n) {
        swap(l[n], l[max]);
        build_heap(l, max, size_t);
    }
};

void heap_sort(int *l, int n) {
    //从第一个非叶子节点构建最大堆
    for (int i = size / 2 - 1; i >= 0; i--) {
        build_heap(a, i, size);
    }
    for (int i = 0; i < n; i++) {
        swap(a[0], a[size - i]);
        //重新构建最大堆
        build_heap(a, 0, n - i - 1);
    }
}


int main() {
    heap_sort(a, size);

    for (int i = 0; i < size; i++) {
        cout << a[i];
    }
    return 0;
}

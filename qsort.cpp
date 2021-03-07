#include <iostream>
using namespace std;
void qsort(int s, int e, int *list) {
    if (s > e)
        return;

    int start = s;
    int end = e;
    int temp = list[s];
    while (start < end) {
        while (start < end &&list[start]<list[end])
            end--;
        list[start] = list[end];
        while (start < end &&list[start]<=list[end])
            start++;
        list[end] = list[start];
    }
    list[s] = temp;
    qsort(0, start - 1, list);
    qsort(end+1, 5, list);
}
int main() {
    int a[5] = {5, 4, 3, 2, 1};

    for (int i = 0; i < 5; i++) {
        cout << a[i];

    }
    return 0;
}

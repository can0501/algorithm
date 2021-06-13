#include <iostream>

using namespace std;

int a[3] = {1, 2, 3};
int visit[3] = {0};
int path[3] = {0};
int count = 0;

void dfs(int index) {
    if (count >= 3) {
        return;
    }
    if (visit[index] == 1) {
        return;
    }
    visit[index] = 1;
    path[count++] = a[index];

    if (count == 3) {
        for (int i = 0; i < 3; i++) {
            cout << path[i];
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++) {
        dfs(i);
    }

    visit[index] = 0;
    count--;
}

int main() {
    for (int i = 0; i < 3; i++) {
        dfs(i);
    }
    return 0;
}

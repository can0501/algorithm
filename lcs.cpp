#include <iostream>
#include "math.h"

using namespace std;

int main() {
    int s1[2222] = {0, 1, 3, 4, 5, 6, 7, 7, 8}; //8
    int s2[3131] = {0, 3, 5, 7, 4, 8, 6, 7, 8, 2}; //9
    int dp[10][10] = {0};
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 9; j++) {
            if (s1[i] == s2[j]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[8][9];
    return 0;
}

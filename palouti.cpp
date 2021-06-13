#include <iostream>
#include <bits/stdc++.h>

using namespace std;


//递归
int f(int n) {
    if (n == 1)
        return 1;
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    return f(n - 1) + f(n - 2);
}

int dp [11111]={0};


int climbStairs(int n) {
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <=n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
//1134903170
int main() {
    int qq = 5;
    cout << climbStairs(qq);
    cout << f(qq);
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
#include "math.h"
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int  dp[11111111] = {0};
        dp[0] = nums[0];
        int maxx = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            dp[i] = max(dp[i- 1] + nums[i], nums[i]);
            if (maxx < dp[i]) {
                maxx = dp[i];
            }
        }
        return maxx;



    }};

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int dp[11111] = {0};




    return 0;
}

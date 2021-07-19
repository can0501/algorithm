#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

//近似最小堆,优先级队列 小->大
priority_queue<int, vector<int>, greater<int>> small_big;
//近似最大堆,优先级队列 大->小
priority_queue<int> big_small;


class MedianFinder {
public:
    //近似最小堆,优先级队列 小->大
    priority_queue<int, vector<int>, greater<int>> small_big;
    //近似最大堆,优先级队列 大->小
    priority_queue<int> big_small;



    MedianFinder() {

    }

    void addNum(int num) {
        if (small_big.size() == big_small.size()) {
            big_small.push(num);
            int top = big_small.top();
            big_small.pop();
            small_big.push(top);
        } else {
            small_big.push(num);
            int top = small_big.top();
            small_big.pop();
            big_small.push(top);
        }
    }

    double findMedian() {
        if (big_small.size() == small_big.size()) {

            return (big_small.top() * 1.0 + small_big.top() * 1.0) / 2;
        }
        return small_big.top();
    }
};

int main() {

    big_small.push(1);
    big_small.push(2);
    big_small.push(3);
    cout << big_small.top();
    return 0;
}

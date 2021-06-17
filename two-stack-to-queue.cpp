#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct my_queue {
    stack<int> in;
    stack<int> out;

    int push(int i) {
        in.push(i);
        return i;
    }

    int pop() {
        if (out.empty() && in.empty()) {
            return NULL;
        }
        if (out.empty()) {
            while (!in.empty()) {
                int t = in.top();
                in.pop();
                out.push(t);
            }
        }
        int t = out.top();
        out.pop();
        return t;
    }

};

int main() {
    my_queue *queue = new my_queue();
    queue->push(1);
    queue->push(2);
    queue->push(3);
    queue->push(4);


    for (int i = 0; i < 4; ++i) {
        cout << queue->pop() << endl;
    }


    std::cout << "Hello, World!" << std::endl;
    return 0;
}

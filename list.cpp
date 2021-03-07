#include <iostream>

using namespace std;

class node {
public:
    int value;
    node * next;
};

void dfs(node *head)
{
    if (head==NULL)
        return;
    cout << head->value;
    dfs(head->next);
}

void array_head_insert(){
    int a[5] = {5, 4, 3, 2, 1};
    node *head = NULL;
    node *temp = NULL;
    for (int i = 0; i < 5; i++) {
        if (head == NULL) {
            head = new node();
            head->value = a[i];
            temp = head;
        } else {
            node *t = new node();
            t->value = a[i];
            temp->next = t;
            temp = t;
        }
    }
    dfs(head);
}

void array_tail_insert(){
    int a[5] = {5, 4, 3, 2, 1};
    node *tail = NULL;
    node *temp = NULL;
    for (int i = 0; i < 5; i++) {
        if (tail == NULL) {
            tail = new node();
            tail->value = a[i];
            temp = tail;
        } else {
            node *t = new node();
            t->value = a[i];
            temp->next = t;
            temp = t;
        }
    }
    dfs(tail);
}

int main() {
    //尾插法 链表
    array_head_insert();
    return 0;
}

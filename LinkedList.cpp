//
// Created by yupenglei on 2017/6/25.
//
#include "base.h"

typedef struct Node {
public:
    Elem data; //数据域
    struct Node *next; //指针域
} LNode, *LinkList;

LinkList CreateList1(LinkList &L) {
    LNode *s;
    int x;
    L = (LinkList) malloc(sizeof(LNode));
    L->next = NULL;
    cin >> x;
    while (x != 999) {
        s = (LNode *) malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        cin >> x;
    }
    return L;
}

void PrintList(LinkList L) {
    LNode *node;
    node = L;
    while (node->next != NULL) {
        node = node->next;
        cout << node->data << " ";
    }
}

int main() {
//    LinkList list;
//    CreateList1(list);
//    PrintList(list);

    return 0;
}

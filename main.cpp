//
// Created by yupenglei on 2017/6/25.
//
#include "List.h"

/**
 * 抽象类做形参时必须使用指针或引用
 */
void testList(List *);

int main() {
    ArrayList arrayList;
    testList(&arrayList);
}

void testList(List *list) {
    list->InitList();
    list->PrintList();
    //insert
    for (int i = 1; i < 10; i++) {
        bool b = list->ListInsert(i, 3 * i);
        cout << "inset" << b << " ";
    }
    cout << endl;
    list->PrintList();

    //length && empty
    cout << "len=" << list->Length() << ", is empty? " << list->Empty() << endl;

    //locate
    cout << "4 locate at " << list->LocateElem(4) << ";";
    cout << "18 locate at " << list->LocateElem(18) << endl;
    //get
    Elem elem1 = -1;
    list->GetElem(3, &elem1);
    cout << "get 3rd elem: " << elem1 << ";";
    elem1 = -1;
    list->GetElem(22, &elem1);
    cout << "get 22th elem: " << elem1 << endl;

    //delete
    for (int i = 1; i < 10; i++) {
        Elem elem;
        bool b = list->ListDelete(1, &elem);
        cout << "delete " << elem << " " << b << "|";
    }
    cout << endl;

}


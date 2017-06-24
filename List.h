//
// Created by yupenglei on 2017/6/25.
//
#include "base.h"

#ifndef ALGORITHM_LIST_H
#define ALGORITHM_LIST_H

#endif //ALGORITHM_LIST_H

#include <stdlib.h>
#include <iostream>

using namespace std;

class List {
public:
    virtual void InitList()=0;

    virtual int Length()=0;

    virtual int LocateElem(Elem)=0;

    virtual void GetElem(int, Elem *)=0;

    virtual bool ListInsert(int, Elem)=0;

    virtual bool ListDelete(int, Elem *)=0;

    virtual void PrintList()=0;

    virtual bool Empty()=0;

    virtual void DestroyList()=0;
};

/**
 * 顺序表实现
 */
class ArrayList : public List {
private:
    Elem *data;
    int maxSize, length;
public:
    virtual void InitList() {
        data = (Elem *) malloc((sizeof(Elem) * InitSize));
        length = 0;
        maxSize = InitSize;
    }

    virtual int Length() {
        return length;
    }

    /**
     * 1,插入操作
     */
    virtual bool ListInsert(int i, Elem elem) {
        if (i < 1 || i > length + 1) {
            return false;
        }
        if (length >= maxSize) {
            return false;
        }
        for (int j = length; j >= i; j--) {
            data[j] = data[j - 1];
        }
        data[i - 1] = elem;
        length++;
        return true;
    }

    /**
     * 2,删除操作
     */
    virtual bool ListDelete(int i, Elem *elem) {
        if (i < 1 || i > length) {
            return false;
        }
        *elem = data[i - 1];
        for (int j = i; j < length; j++) {
            data[j - 1] = data[j];
        }
        length--;
        return true;
    }

    /**
     * 3,按值查找
     */
    virtual int LocateElem(Elem elem) {
        for (int i = 0; i < length; i++) {
            if (data[i] == elem) {
                return i + 1;
            }
        }
        return 0;
    }

    virtual void GetElem(int i, Elem *elem) {
        if (i < 1 || i > length) {
            return;
        }
        *elem = data[i - 1];
    }

    virtual void PrintList() {
        cout << "array: [ ";
        for (int i = 0; i < length; i++) {
            cout << data[i] << " ";
        }
        cout << "]" << endl;
    }

    virtual bool Empty() {
        return length == 0;
    }

    virtual void DestroyList() {

    }
};

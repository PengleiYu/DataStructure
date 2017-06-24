//
// Created by yupen on 2017/6/24.
//

#include <stdlib.h>
#include <stdio.h>
#include "List.h"

void InitList(List *p) {
    p->data = malloc(sizeof(ElemType) * InitSize);
    p->MaxSize = InitSize;
    p->length = 0;
}

void PrintList(List list) {
    printf("[ ");
    for (int i = 0; i < list.length; i++) {
        printf("%d ", list.data[i]);
    }
    printf("]\n");
}

/**
 * 重要操作1
 */
bool ListInsert(List *list, int i, ElemType e) {
    if (i < 1 || i > list->length + 1) {
        return false;
    }
    if (list->length >= list->MaxSize) {
        return false;
    }

    for (int j = list->length; j >= i; j--) {
        list->data[j] = list->data[j - 1];
    }
    list->data[i - 1] = e;
    list->length++;
    return true;
}

/**
 * 重要操作2
 */
bool ListDelete(List *list, int i, ElemType *e) {
    if (i < 1 || i > list->length) {
        return false;
    }
    *e = list->data[i - 1];
    for (int j = i; j < list->length; j++) {
        list->data[j - 1] = list->data[j];
    }
    list->length--;
    return true;
}

/**
 * 重要操作3
 */
int LocateElem(List list, ElemType e) {
    for (int i = 0; i < list.length; i++) {
        if (list.data[i] == e) {
            return i + 1;
        }
    }
    return 0;
}

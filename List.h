//
// Created by yupen on 2017/6/24.
//


#include <stdbool.h>

#ifndef ALGORITHM_LIST_H
#define ALGORITHM_LIST_H

#endif //ALGORITHM_LIST_H

#define InitSize 20
typedef int ElemType;

/**
 * index从1开始
 */
typedef struct array {
    ElemType *data;
    int MaxSize, length;
} List;

void InitList(List *p);

int Length(List);

int LocateElem(List, ElemType);

ElemType GetElem(List, int);

bool ListInsert(List *, int, ElemType);

bool ListDelete(List *, int, ElemType *);

void PrintList(List);

bool Empty(List);

void DestroyList(List *);

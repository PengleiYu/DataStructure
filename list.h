//
// Created by yupenglei on 2017/7/9.
//

#ifndef ALGORITHM_LIST_H
#define ALGORITHM_LIST_H

#include <stdbool.h>
#include <stdlib.h>

typedef int Elem;
typedef struct node {
    Elem item;
    struct node *next;
} Node;
typedef struct list {
    Node *head;
} List;

//初始化链表
void InitList(List *pList);

//销毁链表
void DestroyList(List *pList);

//清空链表
void ClearList(List *pList);

//判断链表是否空
bool ListEmpty(List list);

//获取链表长度
int ListLength(List list);

//获取指定位置的元素
void GetElem(List list, int index, Elem *pElem);

//获取指定元素的位置
int LocateElem(List list, Elem elem, int (*pCompare));

//获取指定元素的前驱
void PriorElem(List list, Elem current, Elem *prior);

//获取指定元素的后继
void NextElem(List list, Elem current, Elem *next);

//插入指定位置的元素
void ListInsert(List *pList, int index, Elem elem);

//删除指定位置的元素
void ListDelete(List *pList, int index, Elem *elem);

//遍历链表
void ListTraverse(List list, void(*pVisit));

#endif //ALGORITHM_LIST_H

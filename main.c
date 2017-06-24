#include <stdio.h>
#include "List.h"

int main() {

    List list;
    InitList(&list);
    PrintList(list);

    for (int i = 1; i < 10; i++) {
        ListInsert(&list, i, i * 2);
        PrintList(list);
    }

    for (int i = 1; i < 10; i++) {
        ElemType elemType = -1;
        bool b = ListDelete(&list, 2, &elemType);
        printf("%d, %d ", b, elemType);
        PrintList(list);
    }


    return 0;
}
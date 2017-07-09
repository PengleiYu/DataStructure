//
// Created by yupenglei on 2017/7/9.
//
#include <stdio.h>

void (*funP)(int);

void (*funA)(int);

void say(int n) {
    printf("%d\n", n);
}
/**
 *  测试函数指针
 */
void test() {
    funP = &say;
    funA = say;

    funP(1);
    funA(2);

    (*funP)(3);
    (*funA)(4);

    say(5);
}

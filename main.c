#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"ds.h"

int main()
{
    BiTree tree;
    InitBiTree(&tree);
    printf("�����������\n");
    CreateBiTree(&tree);
    PreOrder(tree);
    InOrder(tree);
    PostOrder(tree);
    return 0;
}
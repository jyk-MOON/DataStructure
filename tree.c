#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"ds.h"

void InitBiTree(BiTree* tree) {
    *tree = NULL;
}

void CreateBiTree(BiTree* tree) {
    ElemType data;
    scanf("%d", &data);

    if (data == -1) {
        *tree = NULL;
    }
    else {
        *tree = (BiTree)malloc(sizeof(BiTNode));
        if (*tree == NULL) {
            printf("ÄÚ´æ·ÖÅäÊ§°Ü£¡");
            exit(1);
        }
        (*tree)->data = data;
        CreateBiTree(&((*tree)->lchild));
        CreateBiTree(&((*tree)->rchild));
    }
}

int IsEmpty(BiTree tree) {
    return tree == NULL;
}

void visit(BiTree tree) {
    if (IsEmpty(tree))
        return;
    else{
        printf("%d", tree->data);
    }
}

void PreOrder(BiTree tree) {
    if (!IsEmpty(tree)) {
        visit(tree);
        PreOrder(tree->lchild);
        PreOrder(tree->rchild);
    }
}

void InOrder(BiTree tree) {
    if (!IsEmpty(tree)) {
        InOrder(tree->lchild);
        visit(tree);
        InOrder(tree->rchild);
    }
}

void PostOrder(BiTree tree) {
    if (!IsEmpty(tree)) {
        PostOrder(tree->lchild);
        PostOrder(tree->rchild);
        visit(tree);
    }
}
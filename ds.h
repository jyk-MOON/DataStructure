#define _CRT_SECURE_NO_WARNINGS
#define ElemType int
#include<stdio.h>

typedef struct BiTNode {
	ElemType data;
	struct BiTNode* lchild, * rchild;
}BiTNode, * BiTree;

void InitBiTree(BiTree* tree);
void CreateBiTree(BiTree* tree);
int IsEmpty(BiTree tree);
void visit(BiTree tree);
void PreOrder(BiTree tree);
void InOrder(BiTree tree);
void PostOrder(BiTree tree);
#include "stdio.h"
#include "stdlib.h"
typedef int ElemType;
typedef struct LNode
{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

void CreateList_H(LNode *L,int n)
{
    L->next=NULL;
    for(int i=0;i<n;i++)
    {
        LNode *p=(LNode *)malloc(sizeof(LNode));
        scanf("%d",&p->data);
        p->next=L->next;
        L->next=p;
    }
}

void PrintList_L(LNode *L)
{
    LNode *p=L->next;
    while (p)
    {
        printf("%d  ", p->data);
        p = p->next;
    }
    while(p);
 
}

int main()
{
    LNode *L=(LNode *)malloc(sizeof(LNode));
    CreateList_H(L,7);
    PrintList_L(L);
    free(L);
    return 0;
}
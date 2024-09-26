# Note1
Some ideas about danlianbiao

Part1: 单链表的存储结构

typedef int ElemType;        //通用类型标识符
typedef struct LNode
{
    ElemType data;           //节点的数据域
    struct LNode *next;      //节点的指针域
}LNode,*LinkList;            //可以理解为typedef LNode* LinkList;

对LNode和*LinkList的一些说明：
首先，明确一点，两者是等价的；
其次，

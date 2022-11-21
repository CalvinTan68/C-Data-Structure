#include <iostream>
using namespace std;

typedef struct LNode{
    char data;
    struct LNode *next;
}LNode,*LinkList;

int InitList_L(LinkList &L)
{
    L = new LNode;
    L->next = NULL;
    return 1;
}
void CreateL_H(LinkList &L,int n)
{
    L = new LNode;
    L->next = NULL;
    for (int i = 0; i < n; i++)
    {
        LNode *L1 = new LNode;
        cin >> L1->data;
        L1->next = L->next;
        L->next = L1;
    }
    return;
}
void CreateL_R(LinkList &L,int n)
{
    L = new LNode;
    L->next = NULL;
    LinkList r = L;
    for (int i = 0; i < n; i++)
    {
        LNode *L1 = new LNode;
        cin >> L1->data;
        L1->next = NULL;
        r->next = L1;
        r = L1;
    }
    return;
}
void PrintL(LinkList L)
{
    LNode *L1;
    L1 = L->next;
    while(L1){
        int data = L1->data;
        printf("%d\t", data);
        L1 = L1->next;
    }
    cout << endl;
}

LNode *LocateElem(LinkList L,char e)
{
    LNode *L1 = L->next;
    while(L1 && L1->data!=e)
        L1 = L1->next;
    return L1;
}
int Insert_L(LinkList &L,int i,char e)
{
    LNode *L1 = L;
    int j = 0;

    while (L1 && (j<i-1))
    {
        L1 = L1->next;
        j++;
    }
    if (!L1 || (j>i-1)) return 0;
    LNode *L2 = new LNode;
    L2->data = e;
    L2->next = L1->next;
    L1->next = L2;
    return 1;

}
int Delete_L(LinkList &L,int i)
{
    LNode *L1 = L;
    int j = 0;

    while((L1->next) && (j<i-1))
    {
        L1 = L1->next;
        j++;
    }
    if (!(L1->next) || (j>i-1)) return 0;
    LNode *L2 = L1->next;
    L1->next = L2->next;
    delete L2;
    return 1;
}
int main()
{
    LinkList L1,L2;
    char e;

    InitList_L(L1);
    InitList_L(L2);
    CreateL_H(L1,5);
    CreateL_R(L2,8);
    cout << "单链表1为" << endl;
    PrintL(L1);
    cout << "单链表2为" << endl;
    PrintL(L2);

    cout << "清輸入在单链表1中要査找的数据元素: " << endl;
    while(cin>>e)
    {
        if(LocateElem(L1,e))
            cout << "査找成功" << endl;
        else
            cout << "查找失败" << endl;
        cout << "请输入在单链表1中要查找的数据元素 : " ;
    }

    if (Insert_L(L1,5,'1'))
    {
        cout << "插入成功" << endl;
        PrintL(L1);
    }
    else
    {
        cout << "插入失败" << endl;
    }

    if(Delete_L(L1,5))
    {
        cout << "删除成功" << endl;
        PrintL(L1);
    }
    else
    {
        cout << "删除失敗" << endl;
    }

    return 0;
}

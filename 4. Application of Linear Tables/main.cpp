#include<iostream>
using namespace std;

typedef struct listnode {
    int data;
    struct listnode *next;
}listnode, *link;
typedef struct
{
    link head;
    int len;
}Sqlist;

int initList(Sqlist &list)
{
    list.head=(link)malloc(sizeof(listnode));
    list.len = 0;
    list.head->next=NULL;
    return 1;
}
int ListInsert(Sqlist &list, int i, int num)
{
    link p, q;
    int j = 0;
    q = list.head;
    while (q && j < i-1)
    {
        q = q->next;
        j++;
    }
    if (!q || j > i-1) return 0;
    p = (link)malloc(sizeof(listnode));
    p->data = num;
    p->next = q->next;
    q->next = p;
    list.len++;
    return 1;
}
void printList(Sqlist &list)
{
    link p = list.head->next;
    while (p)
    {
        printf("%d,", p->data);
        p = p->next;
    }
    printf("\n");
}
void mergeList1(Sqlist &la, Sqlist &lb, Sqlist &lc)
{
    link lista, listb, listc;
    lista = la.head->next;
    listb = lb.head->next;
    lc.head = la.head;
    la.head->next = NULL;
    while (lista && listb)
    {
        if (lista->data <= listb->data)
        {
            listc = lista->next;
            lista->next = lc.head->next;
            lc.head->next = lista;
            lista = listc;
        }
        else
        {
            listc = listb->next;
            listb->next = lc.head->next;
            lc.head->next = listb;
            listb = listc;
        }
    }
    while (lista)
    {
        listc = lista->next;
        lista->next = lc.head->next;
        lc.head->next = lista;
        lista = listc;
    }
    while (listb)
    {
        listc = listb->next;
        listb->next = lc.head->next;
        lc.head->next = listb;
        listb = listc;
    }
    delete lb.head;
}

int main()
{
    Sqlist list1, list2, list3;
    int num, count = 0, flag;
    initList(list1);
    printf("请输入第一的list（在后面在输入-1） : ");
    scanf("%d",&num);
    count++;
    while(num!=-1)
    {
        flag = ListInsert(list1,count,num);
        scanf("%d", &num);
        count++;
    }
    count = 0;
    initList(list2);
    printf("请输入第二的list（在后面在输入-1） : ");
    scanf("%d",&num);
    count++;
    while (num!=-1)
    {
        flag = ListInsert(list2,count,num);
        scanf("%d",&num);
        count++;
    }
    printf("第一的list : ");
    printList(list1);
    printf("第二的list : ");
    printList(list2);
    printf("------------------------- \n");
    mergeList1(list1, list2, list3);
    printf("第三的list : ");
    printList(list3);
    return 0;
}

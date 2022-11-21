# C Singly Linked List | C 语言单顺表

#### I can't even get this right

* 定义单链表的节点类型，数据域data存放数据类型为char的数据元素，指针域next存放指向下一个节点的指针
    ```c
    #define MAXSIZE 10

    typedef struct LNode {
        char data;
        struct LNode *next;
    }LNode, *LinkList;
    ```
* 初始化带头节点的单链表
    ```c
    int InitList_L(LinkList &L)
    ```
* 头插入法（前插入法）创建长度为n的单链表
    ```c
    void CreateL_H(LinkList &L, int n)
    ```
* 尾插入法（后插入法）创建长度为n的单链表
    ```c
    void CreateL_R(LinkList &L, int n)
    ```
* 尾插入法（后插入法）创建长度为n的单链表
    ```c
    void PrintL(LinkList L)
    ```
* 在单链表中查找数据元素e，若找到则返回指向其结点的指针，否则返回NULL
    ```c
    LNode* LocateElem(LinkList L, char e)
    ```
* 在单链表第i个结点前插入一个新的数据元素e，若插入成功则返回1，否则返回0
    ```c
    int Insert_L(LinkList &L, int i, char e)
    ```
* 删除单链表中第i个数据元素，若删除成功则返回1，否则返回0
    ```c
    int Delete_L(LinkList &L, int i)
    ```
* 在单链表第i个结点前插入一个新的数据元素e，若插入成功则返回1，否则返回0
    ```c
    int Insert_L(LinkList &L, int i, char e)
    ```
* 在主函数中调用以上基本操作。
    ```c
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
    ```

#### English
* Define node type of the singly linked list
    ```c
    #define MAXSIZE 10

    typedef struct LNode {
        char data;
        struct LNode *next;
    }LNode, *LinkList;
    ```
* Initialize linked list with the head node
    ```c
    int InitList_L(LinkList &L)
    ```
* Head insertion for singly linked list
    ```c
    void CreateL_H(LinkList &L, int n)
    ```
* Tail insertion for singly linked list
    ```c
    void CreateL_R(LinkList &L, int n)
    ```
* Output the data of each inserted singly linked list
    ```c
    void PrintL(LinkList L)
    ```
* Find the data element e in the singly linked list, if found, return a pointer to its node, otherwise return NULL
    ```c
    LNode* LocateElem(LinkList L, char e)
    ```
* Insert a new data element e before the ith node of the singly linked list, return 1 if the insertion is successful, otherwise return 0
    ```c
    int Insert_L(LinkList &L, int i, char e)
    ```
* Delete the i-th data element in the singly linked list, return 1 if the deletion is successful, otherwise return 0
    ```c
    int Delete_L(LinkList &L, int i)
    ```
* Insert a new data element e before the ith node of the singly linked list, return 1 if the insertion is successful, otherwise return 0
    ```c
    int Insert_L(LinkList &L, int i, char e)
    ```
* Main function
    ```c
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
    ```

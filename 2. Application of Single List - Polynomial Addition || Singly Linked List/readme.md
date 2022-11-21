
# C Single Linked List - Polynomial Addition | C语言单顺表 - 多项式加法

#### Logically, it should combine two inserted array into one array. But i haven't / can't combine it yet

#### 中文题目

* 顺序表数据类型定义
    ```c
    #define MAXSIZE 10

    typedef struct {
        int *elem;
        int length;
    }SqList;
    ```
* 顺序表的初始化
    ```c
    int InitListSq(SqList &L)
    ```
* 顺序表的初创建
    ```c
    void CreateSq(SqList &L, int n)
    ```
* 输出顺序表的各个元素
    ```c
    void PrintSq(SqList P)
    ```
* 两个一元多项式相加算法
    ```c
    void AddSq(SqList P, SqList Q, SqList &S)
    ```
* 在main函数中调用以上函数，即：先初始化顺序表，然后创建两个一元多项式，再调用一元多项式相加算法，最后输出这三个一元多项式。
    ```c
    SqList p,q,s;
    InitListSq(p);
    InitListSq(q);
    InitListSq(s);
    CreateSq(p,5);
    CreateSq(q,3);
    AddSq (p,q,s);
    cout << "多p ： " ;
    PrintSq(p);
    cout << "多q ： " ;
    PrintSq(q);
    cout << "多s ： " ;
    PrintSq(s);
    return 0;
    ```

#### English
* Define sequence table data
    ```c
    #define MAXSIZE 10

    typedef struct {
        int *elem;
        int length;
    }SqList;
    ```
* Sequence table initialization
    ```c
    int InitListSq(SqList &L)
    ```
* Sequence table creation
    ```c
    void CreateSq(SqList &L, int n)
    ```
* Output each element of sequence table
    ```c
    void PrintSq(SqList P)
    ```
* Adding two unary polynomial
    ```c
    void AddSq(SqList P, SqList Q, SqList &S)
    ```
* Call the above functions in the main function, that is: first initialize the sequence table, then create two univariate polynomials, then call the univariate polynomial addition algorithm, and finally output the three univariate polynomials.
    ```c
    SqList p,q,s;
    InitListSq(p);
    InitListSq(q);
    InitListSq(s);
    CreateSq(p,5);
    CreateSq(q,3);
    AddSq (p,q,s);
    cout << "多p ： " ;
    PrintSq(p);
    cout << "多q ： " ;
    PrintSq(q);
    cout << "多s ： " ;
    PrintSq(s);
    return 0;
    ```

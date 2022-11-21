#include <iostream>
using namespace std;

#define MAXSIZE 10

typedef struct {
    int *elem;
    int length;
} SqList;

int InitListSq(SqList &L) //return 0 means fail, 1 means success
{
    L.elem = new int [MAXSIZE];
    if (!L.elem) return 0;
    L.length = 0;
    return 1;
}
void CreateSq(SqList &L, int n)
{
    if(n < 0 || n > MAXSIZE)
    {
        return;
    }
    L.length = n;
    cout << "请依次输出" << n <<"个数并用空格隔开：";
    for(int i=0;i<L.length;i++){
        cin >> L.elem[i];
    }
    return;
}
void PrintSq(SqList P)
{
    cout << "顺序表中所有元素为：";
    for(int j=0; j < P.length; j++)
    {
        cout << P.elem[j] << " ";
    }
    cout <<endl;
}
void AddSq(SqList P, SqList Q, SqList &S)
{
    S.length = MAXSIZE;
    for (int i = 0; i < S.length; i++)
    {
        S.elem[i] = P.elem[i] + Q.elem[i];
    }
    return;
}
int main()
{
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
}

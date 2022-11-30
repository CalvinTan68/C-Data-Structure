#include<iostream>
using namespace std;

typedef struct {
    char name[20];
    char sex;
}Person;
#define MAXSIZE 100
typedef struct {
    Person *base;
    int front;
    int rear;
}SqQueue;
SqQueue Mdancers, Fdancers;

int InitQueue(SqQueue &Q)
{
    Q.base = new Person[MAXSIZE];
    if (!Q.base) {
        cout << "初始化失败" << endl;
    }
    Q.front = Q.rear = 0;
    return 1;
}

int EnQueue(SqQueue &Q, Person e)
{
    if ((Q.rear + 1) % MAXSIZE == Q.front)
    {
        return 0;
    }
    Q.base[Q.rear] = e;
    Q.rear = (Q.rear + 1) % MAXSIZE;
    return 1;
}

int QueueEmpty(SqQueue Q)
{
    if (Q.rear == Q.front)
    {
        return 1;
    }
    else
        return 0;
}

int DeQueue(SqQueue &Q, Person &e)
{
    if (Q.rear == Q.front)
    {
        return 0;
    }
    e = Q.base[Q.front];
    Q.front = (Q.front + 1) % MAXSIZE;
    return 1;
}

Person GetHead(SqQueue Q)
{
    if (Q.front != Q.rear)
    {
        return Q.base[Q.front];
    }
}

int DancePartner(Person dancer[], int num)
{
    InitQueue(Mdancers);
    InitQueue(Fdancers);
    Person p;
    for (int i = 0; i < num; i++)
    {
        p = dancer[i];
        if (p.sex == 'F')
        {
            EnQueue(Fdancers, p);
        }
        else
            EnQueue(Mdancers,p);
    }
    cout << "The dancing partners are:" << endl;
    while (!QueueEmpty(Fdancers) && !QueueEmpty(Mdancers))
    {
        DeQueue(Fdancers, p);
        cout << p.name << " ";
        DeQueue(Mdancers, p);
        cout << p.name << endl;
    }
    if (!QueueEmpty(Fdancers))
    {
        p = GetHead(Fdancers);
        cout << "The first woman to get a partner is: " << p.name << endl;
    }
    else if (!QueueEmpty(Mdancers))
    {
        p = GetHead(Mdancers);
        cout << "The first man to get a partner is: " << p.name << endl;
    }
    return 1;
}

int main()
{
    cout << "请输入参与的男士与女士的总人数：";
    int num;
    cin >> num;
    Person dancer[MAXSIZE];
    cout << "请分别输入人员姓名和性别：" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> dancer[i].name;
        cin >> dancer[i].sex;
    }
    DancePartner(dancer, num);
    return 0;
}

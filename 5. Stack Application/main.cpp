#include <iostream>
using namespace std;

#define MAXSIZE 100

typedef struct {
    int top[2], bot[2];
    int *V;
    int m;
}DblStack;

int InitDblStack(DblStack &S, int m)
{
    S.V = new int[m];
    S.bot[0] = S.top[0] = -1;
    S.bot[1] = S.top[1] = m;
    return 1;
}

int IsEmpty(DblStack S, int i)
{
    if (S.top[1] == S.bot[i])
        return 0;
    else return 1;
}

int IsFull(DblStack S)
{
    if(S.top[0]+1 == S.top[1])
        return 1;
    else return 0;
}

void Dblpush(DblStack &S, int x, int i)
{
    if(S.top[1] - S.top[0] == 1)
        return;
    if(i == 0)
    {
        S.top[0]++;
        S.V[S.top[0]] = x;
    }
    else
    {
        S.top[1]--;
        S.V[S.top[1]] = x;
    }
    return;
}

int Dblpop(DblStack &S, int i, int &x)
{
    if(S.top[i] == S.bot[i])
    {
        return 0;
    }
    if(i == 0)
    {
        x = S.V[S.top[0]];
        S.top[0]--;
    }
    else if(i == 1)
    {
        x = S.V[S.top[1]];
        S.top[1]++;
    }
    return 1;
}

int main()
{
    int n;
    DblStack S;
    while (cin >> n && n != 0)
    {
        int len1, len2, po1, po2;
        int x;
        InitDblStack(S,n);
        cin >> len1 >> len2 >> po1 >> po2;
        for(int i = 0; i < len1; i++ )
        {
            cin >> x;
            Dblpush(S,x,0);
        }
        for(int i = 0; i < len2; i++ )
        {
            cin >> x;
            Dblpush(S,x,1);
        }
        cout << IsFull(S) << endl;

        for(int i = 0; i < po1; i++)
        {
            Dblpop(S,0,x);
            cout << x << " ";
        }
        cout << IsEmpty(S,0) << endl;

        for(int i = 0; i < po2; i++)
        {
           Dblpop(S,1,x);
           cout << x << " ";
        }
        cout << IsEmpty(S,1) << endl;
    }
    return 0;
}


# Stack Application | 栈的应用

* 定义顺序栈的存储结构。
* 编写初始化栈、入栈、出栈、取栈顶元素四个算法。
* 在main函数中定义顺序栈s1，循环接收5个整数入栈，s1栈顶元素出栈并输出，取s1栈顶元素并输出。
（二）双栈共享一个栈空间的实现
1、将编号为0和1的两个栈存放于一个数组空间V[m]中，栈底分别处于数组的两端。当第0号栈的栈顶指针top[0]等于-1时该栈为空，当第1号栈的栈顶指针top[1]等于m时该栈为空。两个栈均从两端向中间增长（如下图所示）。

 
数据结构定义如下：
typedef struct
{
​int top[2], bot[2];     //栈顶和栈底指针
​SElemType *V; //栈数组
​int m;          //栈最大可容纳元素个数
}DblStack;
2、试编写判断栈空、栈满、进栈和出栈四个算法的函数(函数定义方式如下）
void Dblpush(DblStack &s,SElemType x,int i) ；
//把x插入到栈i的栈
int Dblpop(DblStack &s,int i,SElemType &x) ；
//退掉位于栈i栈顶的元素
int IsEmpty(DblStack s,int i) ；
//判栈i空否, 空返回1, 否则返回0
int IsFull(DblStack s) ；
//判栈满否, 满返回1, 否则返回0
3、在main函数中调用以上函数。

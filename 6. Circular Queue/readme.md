# Circular Queue | 循环队列的应用

【舞伴问题案例分析】
* 设置两个队列分别存放男士和女士入队者
* 假设男士和女士的记录存放在一个数组中作为输入，然后依次扫描该数组的各元素，并根据性别来决定是进入男队还是女队。
* 当这两个队列构造完成之后，依次将两队当前的队头元素出队来配成舞伴，直至某队列变空为止。
* 此时，若某队仍有等待配对者，则输出此队列中排在队头的等待者的姓名，此人将是下一轮舞曲开始时第一个可获得舞伴的人。
【数据结构】
//- - - - - 跳舞者个人信息- - - - -
typedef struct
{
  char name[20];​​//姓名
  char sex;​​​//性别，'F'表示女性，'M'表示男性
}Person;
//- - - - - 队列的顺序存储结构- - - - -
#define MAXQSIZE 100​​//队列可能达到的最大长度
typedef struct
{
  Person *base;​​​//队列中数据元素类型为Person
  int front;​​​//头指针
  int rear;​​​//尾指针
}SqQueue;
SqQueue Mdancers,Fdancers;​//分别存放男士和女士入队者队列
【算法步骤】
① 初始化Mdancers队列和Fdancers队列。
② 反复循环，依次将跳舞者根据其性别插入Mdancers队列或Fdancers队列。
③ 当Mdancers队列和Fdancers队列均为非空时，反复循环，依次输出男女舞伴的姓名。
④ 如果Mdancers队列为空而Fdancers队列非空，则输出Fdancers队列的队头女士的姓名。
⑤ 如果Fdancers队列为空而Mdancers队列非空，则输出Mdancers队列的队头男士的姓名。

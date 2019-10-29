
//循环链表
LinkedList AR(LinkedList L, ElemType x)
{
	LNode *pre = NULL, *q;
	if(!L)
	{
		return L;
	}
	q = L;
	while(q->next != L && q->data != x)
	{
		pre = q;
		q = q->next;
	}
	if(q->data != x)
		return L;
	else
	{
		if(q!=L)//要删除的结点不是第一个结点
		{
			pre->next = q->next;
			free(q);
		}
		else//要删除的结点是第一个结点
		{
			if(L->next == L)//循环链表中只有一个结点
			{
				free(q);
				L = NULL;
			}
			else
			{
				pre = L->next;
				while(pre->next != q)//找到第一个结点的前驱结点
				{
					pre = pre->next;
				}
				L = L->next;
				pre->next = L;
				free(q);
			}
		}
	}
	return L;
}

二叉排序树
typedef struct node
{
	ElemType data;
	struct node *lchild, *rchild;
}

void Insert(BiTree &T, ElemType x)
{
	p = (BiTree)malloc(sizeof(Node));
	p->data = x;
	p->rchild = p->lchild = NULL;
	
	if(!T)
	{
		T = q;
	}
	else
	{
		q = T;
		while(q->lchild != NULL || q->rchild != NULL)
		{
			if(x < q->data)//左插入
			{
				if(q->lchild != NULL)
					q = q->lchild;
				else
					break;
			}
			else//右插入
			{
				if(q->rchild != NULL)
					q = q->rchild;
				else
					break;
			}
		}
	}
}

//结点计数
int CountNode(LinkList &L)
{
	int count = 0;
	LinkList *p = L->next; // 第一个结点
	while(p)
	{
		++count;
		p = p->next;
	}
	return p;
}
  1 2 3 4 5 6 7 8 9 10
1 * * * * * * * * * *  ->10
2   * * * * * * * * *  ->9
3     * * * * * * * *  ->8
4       * * * * * * *  ->7
5         * * * * * *  ->6
6
7
8
9
10

10 + 9 + 8 + 7 = 34
34 + 4 = 38
0~54 ->38-1 = 37
//返回未结点
LinkList_A(LinkList L)
{
	LinkList = L;
	if(L->next == L)
	{
		return NULL;
	}
	else
	{
		while(p->next != L)
		{
			p = p->next;
		}
		return p;
	}
}

viod R(LinkList &L, ElemType x, ElemType y)
{
	LNode *p, *q;
	p = L; //
	q = L->next;
	while(q!=null && q->data!=x)
	{
		p = q;
		q = q->next;
	}
	if(q==NULL)
	{
		print("x不存在！");
	}
	else
	{
		r = (LinkList)malloc(sizeof(LNode));
		r->data = y;
		r->next = q;
		p->next = r;
	}	
}

//逆序打印出来
void AI(int n)
{
	InitStack(S);
	for(int i = 0; i < n; ++i)
	{
		cin >> d;
		Push(d);
	}
	while(!IsEmpty(S))
	{
		Pop(S, data);
		cout << data;
	}
}

//后序遍历
void Swap(BiTree &T)
{
	if(T)
	{
		Swap(T->lchild);
		Swap(T->rchild);
		
		p = T->lchild;
		T->lchild = T->rchild;
		T->rchild = p;
	}
}

Template<class Type> int SeqList<Type>::Insert(Type &x, int i)
{
	if(i < 0 || i > last+1 || last == MaxSize-1)
	{
		return 0;
	}
	else
	{
		Last++;
		for(int j = last; j > i; --j)
		{
			data[j] = data[j-1];
		}
		data[i] = x;
		return 1;
	}
	return 0;
}

Template<class Type> int SeqList<Type>::Remove(Type &x)
{
	int i = Find(x);
	if(i >= 0)
	{
		last--;
		for(int j = i; j<= last; ++j)
		{
			data[j] = data[j+1];
		}
		return 1;
	}
	return 0;
}

//逆向输出
#define StackSize 200
typedef int DataType;
typedef struct
{
	DataType data[StackSize];
	int top;
}SeqStack;

void Push(SeqStack *s, DataType x)
{
	if(s->top != StackSize-1)
	{
		s->data[++s->top] = x;
	}
}
DataType Pop(SeqStack *s)
{
	if(s->top != -1)
	{
		return s->data[s->top--];
	}
}
void mian()
{
	DataType i;
	SeqStack s;
	s.top = -1;
	cin >> i;
	while(i != -1)
	{
		push(&s, i);
		cin >> d;
	}
	while(s->top != -1)
	{
		i = Pop(&s);
		cout << i;
	}
}








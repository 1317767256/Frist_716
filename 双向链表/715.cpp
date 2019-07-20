/*#include <stdio.h>
#include <stdlib.h>
struct node
{
	int num;
	struct node*next;
};
struct node*head;
void print(struct node*head)
{
	struct node*p=head;
	int i=1;
	while(p!=NULL)
	{
		printf("%p -> %d\n",p,p->num);
		p=p->next;
		i++;
	}
	printf("\n");
}

void Tran(struct node*head)
{

	struct node*pPre=NULL;
	struct node*pCurrent=head;
	struct node*pNext=NULL;
	while(pCurrent!=NULL)
	{
		pNext=pCurrent->next;//��Ҫ�ƶ��ĵ�ַ�ȱ�������
		pCurrent->next=pPre;//�ٽ����ƶ�
		//printf("%p\n",pPre);
		pPre=pCurrent;//�ı�pPre����Ųһ��
		pCurrent=pNext;//�ı�pCurrent,������һ�ֵ��ƽ�
	}
	head->next=pPre;
	print(head);
}

void main()
{
	struct node*p1,*p2;
	int i=1;
	p1=(struct node*)malloc(sizeof(struct node));
	head=p2=p1;
	while(i<=10)
	{
		p1->num=i;
		p2=p1;
		p1=(struct node*)malloc(sizeof(struct node));
		p2->next=p1;
		i++;
	}
	p2->next=NULL;
	print(head);
	Tran(head);

}*/
//˫������
#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct node)
struct node
{
	int num;
	struct node*next,*prior;
};
void print(struct node*head)
{
	struct node*p=head;
	int i=1;
	while(p!=NULL)
	{
		printf("%3d",p->num);
		p=p->prior;
		i++;
	}
	printf("\n");
}

void main()
{
	struct node*p1,*p2,*head,*temp;
	int i=1;
	p1=(struct node*)malloc(sizeof(struct node));
	head=p2=p1;
	head->prior=NULL;
	while(i<=10)
	{
		p1->num=i;
		p2=p1;
		p1=(struct node*)malloc(sizeof(struct node));
		p1->prior=p2;
		p2->next=p1;
		i++;
	}
	p2->next=NULL;
	print(p2);
}
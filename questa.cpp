#include<iostream>
#include<conio.h>

using namespace std;

struct node
{
	int data;
	node *next;
};

class stack
{
	public:
		node *top;
		stack()
		{
			top=NULL;
		}
		int isempty();
		void push(int);
		int pop();
}t1,t2;

int stack::isempty()
{
	if(top=='\0')
		return 1;
	else
		return 0;
}

void stack::push(int val)
{
	node *temp=new node;
	temp->next=NULL;
	temp->data=val;
	if(top=='\0')
		top=temp;
	else
	{
		temp->next=top;
		top=temp;
	}
}

int stack::pop()
{
	if(!isempty())
	{
		node *t=top;
		int r=t->data;
		if(top->next=='\0')
			top='\0';
		else
			top=top->next;
		delete t;
		return r;
	}
}

class queue
{
	public:
		void enque();
		void deque();
		void display();
};

void queue::enque()
{
	int x;
	{
		while(t1.top!='\0')
		{
			x=t1.pop();
			t2.push(x);
		}
	}
}

void queue::deque()
{
	int y;
	if(t2.top!='\0')
	{
		y=t2.pop();
		cout<<y<<" deleted successfully...";
		getch();
	}
}

void queue::display()
{
	if(!t2.isempty())
	{
		node *t=(t2.top);
		while(t!='\0')
		{
			cout<<t->data<<'\t';
			t=t->next;
		}
	}
	else
		cout<<"\nQueue is empty...";
	getch();
}

int main()
{
	queue obj;
	int a,z,x;
	do
	{
		system("cls");
		cout<<"\nThe menu is:"
			<<"\n1.Insert elements in queue"
			<<"\n2.Delete elements from queue"
			<<"\n3.Display the queue"
			<<"\n4.Exit";
		cout<<"\nEnter your choice:";
		cin>>a;
		switch(a)
		{
			case 1:cout<<"\nEnter the element to be inserted:";
					cin>>z;
					while(z!=-1)
					{
						if(t2.top!='\0')
						{
							while(t2.top!='\0')
							{
								x=t2.pop();
								t1.push(x);
							}
						}
						t1.push(z);
						cout<<"\nEnter the element to be inserted:";
						cin>>z;
					}
					obj.enque();
					break;
			case 2:obj.deque();
					break;
			case 3:obj.display();
					break;
			case 4:exit(0);
		}
	}while(a!=4);
	getch();
	return 0;
}

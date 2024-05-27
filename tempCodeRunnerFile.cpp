/* Online C++ Compiler and Editor */
#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
	
	node(int val)
	{
		data=val;
		next=NULL;
	}
};
void insertf(node* &head,int val)
	{
		node *temp=new node(val);
		if(head==NULL)
		head=temp;
		else
		{
			temp->next=head;
		head=temp;
		}
	}
	void insertr(node * &head, int val,int pos)
	{
		int i=1;
		node *newnode=new node(val);
		node *temp=head;
        while(i<pos)
		{
            temp=temp->next;
			i++;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	}
	void insertl(node* &head,int val)
	{
		node *temp=new node(val);
		if(head==NULL)
		head=temp;
		else
		{
			node* p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=temp;
		}
	}
	void deletef(node * &head)
	{
		if(head==NULL)
		{
            return;
		}
		node *temp=head;
		head=head->next;
		delete temp;
		return;
	}
	void deletel(node * &head)
	{
		node *temp,*prev;
		temp=head;
		while(temp->next!=NULL)
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=NULL;
		delete temp;
	}
	void deleter(node * &head,int pos)
	{
		int i=1;
		node *n;
		node *temp=head;
		while(i<pos-1)
		{
			temp=temp->next;
			i++;
		}
        n=temp->next;
		temp->next=n->next;
		delete n;
	}
	void display(node* head)
	{
		if(head==NULL)
		cout<<"list empty";
		else
		{
			node* p=head;
			while(p!=NULL)
			{
				cout<<" "<<p->data;
				p=p->next;
			}
		}
	}
	int search(node* head,int val)
	{
		node* p;
		for(p=head; p!=NULL; p=p->next)
		{
			if(p->data==val)
			return 1;
		}
		return 0;
	}
	
int main()
{
	node *head=NULL;
	insertf(head,10);
	insertf(head,20);
	insertf(head,30);
	insertf(head,40);
	insertl(head,50);
	insertl(head,60);
	insertr(head,70,2);
	deletef(head);
	deletel(head);
	deleter(head,3);
	cout<<"list is";
	display(head);
	int s=search(head,30);
	cout<<"\nresult is"<<s;
	int s1=search(head,80);
	cout<<"\nresult is "<<s1;
}


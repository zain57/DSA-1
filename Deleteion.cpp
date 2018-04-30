#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Node{
		int data;
		struct Node* next;
		
	       };
	struct Node* head;
	void Insert(int x)
	{
		struct Node* temp=(Node*)malloc(sizeof(struct Node));
		temp->data=x;
		temp->next=head;
		head=temp;
	}
	void print()
	{
		struct Node* temp=head;
		cout<<"List is";
		while(temp!=NULL)
		{
			cout<<" "<<temp->data;
			temp=temp->next;
		}
		cout<<"\n";
	}
	void Delete(int n)
	{
	    struct Node* temp1=head;
	    if(n==1)
	    {	head=temp1->next;
			free(temp1);
			return;
		}
		int i;
		for(i=0;i<n-2;i++)
		{
			
			temp1=temp1->next;
		}
			struct Node* temp2=temp1->next;
			temp1->next=temp2->next;
			free(temp2);
		}
int main()
{
	head = NULL;
	cout<<"Input The Numbers You Want to Add In List: ";
	int n,i,x,y;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the "<<i<<" Number"<<endl;
		cin>>x;
		Insert(x);
		print();
		cout<<endl;
	}
	cout<<"Enter Number You Want To Delete: ";
	cin>>y;
	Delete(y);
	print();
	return 0;
}

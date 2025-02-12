#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

node* createNode(int new_data)
{
	node* new_node= new node();
	new_node->data=new_data;
	new_node->next=NULL;
	return new_node;
}


void insertatbeginning(node* head,int new_data)
{
	
	node* new_node=new node;
	new_node->data=new_data;
	new_node->next=head;
	
	head=new_node;
	
}


void insertatend(node* head,int new_data)
{
	node* new_node=new node;
	new_node->data=new_data;
	new_node->next=NULL;
	  
	if(head==NULL)
	{
		head=new_node;
		return;
	}
	node* last=head;
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=new_node;
}


void deletenode(node *head,int key)
{
  node* temp=head;
  
  if(temp!=NULL && temp->data==key)
  {
  	head= temp->next;
  	delete temp;
  	return;
  }	
  
  while(temp!=NULL && temp->next!=NULL)
  {
  	if(temp->next->data==key)
  	{
  		node* next=temp->next;
  		temp->next=next->next;
  		delete next;
  		return;
	}
	temp=temp->next;
  }
  cout<<"key"<<key<<"not found"<<endl;
}


void printlist(node *head)
{
   node *n=head;
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
	cout<<endl;
}



int main()
{
	node* head=NULL;
	createNode(1);
	insertatbeginning(head,5);
	//insertatbeginning(head,6);
	//insertatbeginning(head,7);
	//insertatbeginning(head,8);
	printlist(head);
//	int key=7;
	//deletenode(head,key);
	
//	printlist(head);
	return 0;
}
#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
	node(){
		next=0;
	}
	node(int val, node* ptr = 0){
		data = val;
		next = ptr;
	}
};
class list{
	private:
		node *head, *tail;
	public:
		list(){
			head=tail=0;
		}
		~list();
		void addHead(int);
		void addTail(int);
		int delHead();
		int delTail();
		void delNode(int);
		void print();
		
		
};
int list::delHead(){
	if(head){
		//point to the head node using temporary pointer
		node* temp = head;
		int val= head->data;
		//if only a single node is there in the list
		if(head==tail)
		head=tail=0;
		//else move head to the next node
		else head = head->next;
		delete temp;
		return val;
	}
	return -1;
}
int list::delTail(){
	if(head){
		int val = head->data;
		//if only one node is there in list
		if(head==tail)
		{
			delete head;
			head=tail=0;
			return val;
		}
		else{
			node* temp;
			for(temp=head;temp->next!=tail;temp=temp->next);
			//delete tail and update it with the predecissor of the tail
			delete tail;
			tail = temp;
			tail->next = 0;
			return val;
		}
	}
	return -1;
}
list::~list(){
	for(node* p;head;){
		p = head->next;
		delete head;
		head = p;
	}
}
void list::addHead(int value){
	head = new node(value,head);
	if(tail==0)
	tail = head;	
}
void list::addTail(int value){
	if(tail!=0){
		tail->next = new node(value);
		tail = tail->next;
	}
	else{
		head  = tail = new node(value);
	}
}
void list::print(){
	if(head==0)
	{
		printf("list is empty\n");
		return;
	}
	node* ptr = head;
	while(ptr!=0){
		printf("%d->",ptr->data);
		ptr = ptr->next;
	}
}
void list::delNode(int val){
	if(head){
		if(head==tail && head->data==val){
			delete head;
			head=tail=0;
		}
		//elements are more than one and node(to be deleted) is the same as head.
		else if(head->data==val){
			node*temp = head;
			head= head->next;
			delete temp;
		}
		else{
			node *pred,*deletenode;
			//run the loop until we find the intended node and the deletenode becomes null.
			for(pred=head,deletenode=head->next;deletenode!=0&&!(deletenode->data==val);pred=pred->next,deletenode=deletenode->next);
			//node can only be deleted if deletenode not null.
			if(deletenode!=0){
				//before deleting the node
				pred->next = deletenode->next;
				if(deletenode==tail)
				tail = pred;
				delete deletenode;
			}
		}
	}
}
int main(){
	list list1;
	list1.addHead(3);
	list1.addHead(2);
	list1.addHead(1);
	list1.addTail(4);
	list1.addTail(5);
	int a = list1.delHead();
	 a = list1.delHead();
	list1.print();
	list1.delNode(4);
	printf("\n");
	list1.print();
	
	return 0;
	
}

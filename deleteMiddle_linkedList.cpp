#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;  
	Node(int x){
		data= x;
		next= nullptr;
	}
};

Node* deleteMiddle(Node* head){
	
	if(head==nullptr) return nullptr;
	int count=0;
	Node*p1=head; Node *p2=head;
	while(p1){
		count++;
		p1= p1->next;
	}
	
	 int mid= count/2;
	 for(int i=0; i < mid-1; i++){
	 	p2=p2->next;
	 }
	 p2->next= p2->next->next;
	 return head;
}

void printList(Node* head){
	Node * curr= head;
	while(curr){
		cout<<curr->data<<" ";	
		curr= curr->next;
    }
}

int main(){
	Node *first=new Node(1);
	first->next= new Node(2);
	first->next->next= new Node(3);
	first->next->next->next= new Node(4);
	first->next->next->next->next= new Node(5);
	first->next->next->next->next->next= new Node(6);
	first->next->next->next->next->next->next= new Node(7);
	
	deleteMiddle(first);
	printList(first);
 return 0;
}

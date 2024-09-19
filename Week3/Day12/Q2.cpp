#include<iostream>
using namespace std;

class Node{
public:
  int val;
  Node* next;
  Node(int val){
    this->val = val;
    this->next = NULL;
  }
};

void printLinkedList(Node* head){
  Node* temp = head;
  while(temp){
    cout<<temp->val<<" ";
    temp = temp->next;
  }
  cout<<endl;
}

void insertAtEnd(Node*& head, int data){
  Node* t = new Node(data);
  if (head == nullptr){
    head = t;
    return;
  }
  Node* temp = head;
  while(temp->next){
    temp = temp->next;
  }
  temp->next = t;

}

int main(){
  Node* a = new Node(10);
  Node* b = new Node(20);
  Node* c = new Node(30);
  Node* d = new Node(40);

  a->next = b;
  b->next = c;
  c->next = d;

  printLinkedList(a);
  
  insertAtEnd(a, 50);
  printLinkedList(a);
}
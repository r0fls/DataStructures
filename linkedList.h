//LinkedList class with push/pop methods
#include <iostream>
using namespace std;

typedef struct llist{
		int value;
		struct llist* next;
} llist;

class Llist {
    llist *head; 
  public:
    Llist(int);
    int getValue () {return head->value;}
    void push(int val);
    int pop();
};

Llist::Llist (int val) {
  head->value = val;
  head->next = NULL;
}

void Llist::push(int val){
	llist* n = new llist;
	n->next = head;
	n->value = val;
	this->head = n;
}

int Llist::pop(){
	int val = this->getValue();
	head=head->next;
	return val;
}

int main () {
  Llist list1 (3);
  list1.push(5);
  cout << "linkedList value1: " << list1.pop() << endl;
  cout << "linkedList value1: " << list1.pop() << endl;
  return 0;
}
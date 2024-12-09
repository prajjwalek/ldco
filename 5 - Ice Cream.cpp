/*SE Comp Engg class set of A students like vanilla ice cream, set of B student like butterscotch. Write CPP Program to store two sets using linked list. Calculate:
1. set of students who like both 
2. set of students who like either vanilla or butterscotch 
3. No. of students who like neither vanilla nor butterscotch*/

#include <iostream>
using namespace std;

class IceCream{
public:
	struct node{
		int data;
		node* next;
	}*head,*temp;
	int len;
	IceCream(){
		head = NULL;
		len = 0;
	}
	
	node* create(){
		int item;
		cout << "Enter Roll No: ";
		cin >> item;
		node *temp = new (struct node);
		temp -> data = item;
		temp -> next = NULL;
		return temp;
	}
	
	void InsertNode(){
		node* temp = create();
		if (head == NULL){
			head = temp;
		} else {
			node* ptr = head;
			while (ptr->next != NULL){
				ptr = ptr->next;
			}
			ptr->next = temp;
		}
		
	}
	
	void DeleteNode(){
		if (head == NULL){
			cout << "Empty List";
		}else if (head->next == NULL) {
			delete head;  
			head = NULL;
		} else {
			node* ptr = NULL;
			node* ptr1 = head;
			while (ptr1->next != NULL){
				ptr = ptr1;
				ptr1 = ptr1->next;
			}
			ptr->next = NULL;
			delete ptr1;
		}
	}
	
	void Display(){
		node* ptr = head;
		while (ptr != NULL){
			cout << ptr->data << " -> ";
			ptr = ptr->next;
		}
		cout << "NULL" << endl;
	}
	
	void findIntersection(node* listB) {
		cout << "Students who like both (Intersection): ";
		node* ptrA = head;
		while (ptrA != NULL) {
			node* ptrB = listB;
			while (ptrB != NULL) {
				if (ptrA->data == ptrB->data) {
				cout << ptrA->data << " ";
				break;
				}
			ptrB = ptrB->next;
			}
		ptrA = ptrA->next;
		}
		cout << endl;
	}
	
	void findUnion(node* listB) {
		cout << "Students who like either (Union): ";
		node* ptrA = head;
		while (ptrA != NULL) {
			cout << ptrA->data << " ";
			ptrA = ptrA->next;
		}
		node* ptrB = listB;
		while (ptrB != NULL) {
			bool found = false;
			ptrA = head;
			while (ptrA != NULL) {
				if (ptrB->data == ptrA->data) {
					found = true;
					break;
				}
				ptrA = ptrA->next;
			}
			if (!found) {
				cout << ptrB->data << " ";
			}
			ptrB = ptrB->next;
		}
		cout << endl;
	}
	
	int countNeither(int totalStudents) {
		int count = 0;
		node* ptrA = head;
		node* ptrB = head; 
		while (totalStudents-- > 0) {
			bool foundA = false, foundB = false;
			ptrA = head;
			ptrB = head; 
			while (ptrA != NULL) {
				if (ptrA->data == totalStudents) {
					foundA = true;
					break;
				}
				ptrA = ptrA->next;
			}
			while (ptrB != NULL) {
				if (ptrB->data == totalStudents) {
					foundB = true;
					break;
				}
				ptrB = ptrB->next;
			}
			if (!foundA && !foundB) {
				count++;
			}
		}
		return count;
	}
		
};

int main() {
	IceCream vanilla, butterscotch;

	cout << "Enter students who like Vanilla Ice Cream (5 students):" << endl;
	for (int j = 0; j < 5; j++) {
		vanilla.InsertNode();
	}
	vanilla.Display();

	cout << "Enter students who like Butterscotch Ice Cream (5 students):" << endl;
	for (int j = 0; j < 5; j++) {
		butterscotch.InsertNode();
	}
	butterscotch.Display();

	vanilla.findIntersection(butterscotch.head);
	vanilla.findUnion(butterscotch.head);
    
	int totalStudents = 10; 
	int neitherCount = vanilla.countNeither(totalStudents);
	cout << "Number of students who like neither flavor: " << neitherCount << endl;

	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

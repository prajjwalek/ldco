#include <iostream>
#include <string>
using namespace std;
 
class DS {
private:
    int head, tail;
    int size, count;
    string *arr;
public:
    DS(int size) {
        this->size = size;
        head = 0;
        tail = -1;
        arr = new string[size];
    }
 
    bool isFull() {
        return count == size;
    } 
 
    bool isEmpty() {
        return count == 0;
    }
 
    void enQueue(string order) {
        if(isFull()){
            cout << "Queue is Full! Cannot Enqueue." << endl;
            return;
        }
        //arr[++tail] = order;
        tail = (tail + 1) % size;
        arr[tail] = order;
        count++;
        cout << "\nOrder: " << order << " has been placed." << endl;
    }
 
    void deQueue() {
        if(isEmpty()){
            cout << "Queue is Empty! Cannot Dequeue." << endl;
            return;
        }
        string removed = arr[head];
        cout << "\nOrder: " << removed << " is ready." << endl;
        head = (head + 1) % size;
        count--;
    }
 
    void display() {
        cout << "\nThe orders are: " << endl;
        for (int i = 0; i < count; i++){
            cout << arr[(head + i) % size] << endl; 
        }
    }
 
 
    ~DS() {
        delete[] arr;
    }
};
 
int main() {
 
    int sz;
    cout << "Enter the maximum number of order that can be processed: "; cin >> sz;
 
    DS queue(sz);
 
    int choice;
    string order;
 
    while (true) {
        cout << "\n ----- MENU ----- " << endl;
            cout << "1. Place Order";
        cout << "\n2. Serve Order";
        cout << "\n3. Display Orders";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
            cin >> choice;
 
        if (choice == 1) {
            cout << "\nEnter order: ";
            cin >> order;
            queue.enQueue(order);
        }
        
        else if (choice == 2) {
            queue.deQueue();
        }
 
        else if (choice == 3) {
            queue.display();
        } 
 
        else if (choice == 4) {
            cout << "\nExiting..." << endl;
            return 0;
        } 
 
        else {
            cout << "Please Enter a valid choice" << endl;
        }
    }
 
    return 0;
}
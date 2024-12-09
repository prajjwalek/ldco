#include <iostream>
#include <string>
using namespace std;
 
class DEqueue {
private:
    int size;
    int *arr;
    int front;
    int rear;
public:
    DEqueue() {
        arr = new int[1];
        front = -1;
        rear = -1;
    }
 
    DEqueue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
 
    void insertFront();
    void insertRear();
    void deleteFront();
    void deleteRear();
    void display();
 
    ~DEqueue() {
        delete[] arr;
    }
};
 
void DEqueue::insertFront() {
    int element;
    cout << "\nEnter the element to be added: "; cin >> element;
    
    if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
        cout << "\nOVERFLOW! Cannot Insert." << endl;
    }
    else if (front == -1 && rear == -1) {
        front = 0; rear = 0;
        arr[front] = element;
    }
    else if (front == 0) {
        front = size - 1;
        arr[front] = element;
    }
    else {
        front--;
        arr[front] = element;
    }
}
 
void DEqueue::insertRear() {
    int element;
    cout << "\nEnter the element to be added: "; cin >> element;
    
    if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
        cout << "\nOVERFLOW! Cannot Insert." << endl;
    }
    else if (front == -1 && rear == -1) {
        front = 0; rear = 0;
        arr[rear] = element;
    }
    else if (rear == size - 1) {
        rear = 0;
        arr[rear] = element;
    }
    else {
        rear++;
        arr[rear] = element;
    }
}
 
void DEqueue::deleteFront() {
    int element = arr[front];
    cout << "\nElement: " << element << " has been removed from the Queue" << endl;
    if (front == -1 and rear == -1) cout << "\nERROR! Queue is Empty." << endl;
    else if (front == rear) {
        front = -1; rear = -1;
    }
    else if (front == size - 1) {
        front = 0;
    }
    else {
        front++;
    }
}
 
void DEqueue::deleteRear() {
    int element = arr[rear];
    cout << "\nElement: " << element << " has been removed from the Queue" << endl;
    if (front == -1 and rear == -1) cout << "\nERROR! Queue is Empty." << endl;
    else if (front == rear) {
        front = -1; rear = -1;
    }
    else if (rear == 0) {
        rear = size - 1;    
    }
    else {
        rear--;
    }
 
}
 
void DEqueue::display() {
    cout << endl;
    cout << "Displaying Queue Contents:" << endl;
    
    // This might produce a Bug when front = 0; value at 0th index will get printed twice
    if (front > rear) {
        for (int i = front; i < size; i++) {
            cout << arr[i] << " ";
        } 
        for (int i = 0; i <= rear; i++) {
            cout << arr[i] << " ";
        }
    } 
    else {
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
    }
 
    cout << endl;
}
 
 
int main() {
 
    int size;
    cout << "Enter the size of the Queue: "; cin >> size;
    DEqueue dq( size );
 
 
    int choice;
    while (true) {
        cout << "\n---------- MENU ----------" << endl;
        cout << "1. Insert at the Front" << endl;
        cout << "2. Insert at the Rear" << endl;
        cout << "3. Delete at the Front" << endl;
        cout << "4. Delete at the Back" << endl;
        cout << "5. Display Queue Contents" << endl;
        cout << "6. Exit" << endl;
        cout << endl;
        cout << "ENTER YOUR CHOICE: "; cin >> choice;
 
        if (choice == 1) {  
            dq.insertFront();
        } 
 
        else if (choice == 2) {
            dq.insertRear();
        }
 
        else if (choice == 3) {
            dq.deleteFront();
        }
 
        else if (choice == 4) {
            dq.deleteRear();
            
        }
 
        else if (choice == 5) {
            dq.display();
        } 
 
        else if (choice == 6) {
            cout << endl;
            cout << "Terminating Program..." << endl;
            cout << endl;
            break;
        }
 
        else {
            cout << endl;
            cerr << "INVALID CHOICE!" << endl;
            cout << endl;
        }
    
    }
 
    return 0;
}
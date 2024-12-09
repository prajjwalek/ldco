#include <iostream>
#include <string>
using namespace std;
 
class Stack {
    int tos;
    char *stack;
    int size;
public:
    Stack() {
        stack = new char[1];
        tos = 0;
    }
 
    Stack(int size) {
        this->size = size;
        stack = new char[size];
        tos = 0;
    }
 
    void push(char ch) {
        if ( tos > size - 1){
            cout << "STACK OVERFLOW! Cannot push " << ch << endl;
        } else if (tos == size - 1) {
            stack[tos] = ch;
        } else if (tos < size - 1 && tos >= 0) {
            stack[tos++] = ch;
        }
    }
 
    void display() {
        for (int i = 0; i <= tos; i++){
            cout << stack[i];
        }
        cout << endl;
    }
 
    void reverse() {
        for (int i = tos; i >= 0; i--){
            cout << stack[i];
        }
        cout << endl;
    }
 
    void palindrome() {
        bool isOK = true;
        for (int i = 0, j = tos; i <= tos/2, j >= tos/2; i++, j--) {
            if (stack[i] == stack[j]) {
                isOK = true;
            } else if (stack[i] != stack[j]){
                isOK = false;
                break;
            }
        }
        
        if (isOK) cout << "GIVEN STRING IS PALINDROME!" << endl;
        else if (!isOK) cout << "GIVEN STRING IS NOT PALINDROME!" << endl;
    }
 
    ~Stack(){
        delete[] stack;
    }
};
 
int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
 
    Stack ds(str.size());
 
    for (int i = 0; str[i] != '\0'; i++) {
        ds.push(str[i]);
    }
 
    cout << "\nDISPLAYING STACK CONTENTS: " << endl;
    ds.display();
 
    cout << "\nDISPLAYING STACK CONTENTS (REVERSED): " << endl;
    ds.reverse();
    
    cout << "\nPALINDROME CHECK: " << endl;
    ds.palindrome();
 
 
}
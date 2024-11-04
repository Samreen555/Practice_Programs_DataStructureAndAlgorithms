//#include <iostream>
//#include <string>
//using namespace std;
//
//typedef char ItemType;
//
//class Stack {
//private:
//    int top;                     // Index of the top element
//    int maxStack;
//    ItemType* items;
//
//public:
//    Stack() {
//        top = -1;
//        maxStack = 10;
//        items = new ItemType[maxStack];
//    }
//
//    ~Stack() {
//        delete[] items;
//    }
//
//    bool isEmpty() const {
//        return top == -1;
//    }
//
//    bool isFull() const {
//        return top == maxStack - 1;
//    }
//
//    void push(ItemType newItem) {
//        if (isFull()) {
//            cout << "Stack is full\n";
//            return;
//        }
//        top++;
//        items[top] = newItem;
//    }
//
//    ItemType pop() {
//        if (isEmpty()) {
//            cout << "Stack is empty\n";
//            return '\0';  // Return null character if stack is empty
//        }
//        return items[top--];
//    }
//
//    ItemType peek() const {
//        if (!isEmpty()) {
//            return items[top];
//        }
//        return '\0'; // Return null character if stack is empty
//    }
//};
//
//bool isBalanced(const string& expression) {
//    Stack s;
//    for (char ch : expression) {
//        // If it's an opening bracket, push it to the stack
//        if (ch == '(' || ch == '{' || ch == '[') {
//            s.push(ch);
//        }
//        // If it's a closing bracket
//        else if (ch == ')' || ch == '}' || ch == ']') {
//            // Check if stack is empty or if top of stack doesn't match
//            if (s.isEmpty() ||
//                (ch == ')' && s.peek() != '(') ||
//                (ch == '}' && s.peek() != '{') ||
//                (ch == ']' && s.peek() != '[')) {
//                return false;
//            }
//            s.pop(); // Pop the matching opening bracket
//        }
//    }
//    // If stack is empty, all brackets were matched
//    return s.isEmpty();
//}
//
//int main() {
//    string expression = "{[()]}{}()";
//    if (isBalanced(expression)) { 
//        cout << "Balanced" << endl;
//    }
//    else {
//        cout << "Not Balanced" << endl;
//    }
//    return 0;
//}

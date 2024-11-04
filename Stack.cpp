//#include <iostream>
//#include <string>
//using namespace std;
//
//typedef int ItemType; // Define the type of items to be stored in the stack
//
//class Stack {
//private:
//    int top;
//    int maxStack;
//    ItemType* items; // DYNAMIC ARRAY
//
//public:
//    Stack(); // Default constructor
//    Stack(int max); // Parameterized constructor
//    ~Stack(); // Destructor
//    bool IsEmpty() const;
//    bool IsFull() const;
//    void Push(ItemType newItem);
//    void Pop(ItemType& item);
//    void reverse() const;
//    void display_forwards() const;
//    void display_backwards() const;
//    int search(int value) const;
//    void display_size() const;
//};
//
//Stack::Stack() {
//    top = -1;
//    maxStack = 10;
//    items = new ItemType[maxStack];
//}
//
//Stack::Stack(int max) {
//    top = -1;
//    maxStack = max;
//    items = new ItemType[max];
//}
//
//Stack::~Stack() {
//    delete[] items;
//}
//
//bool Stack::IsEmpty() const {
//    return top == -1; 
//}
//
//bool Stack::IsFull() const {
//    return top == maxStack - 1; 
//}
//
//void Stack::Push(ItemType newItem) {
//    if (IsFull()) {
//        cout << "Stack is full\n";
//        return;
//    }
//    top++;
//    items[top] = newItem;
//}
//
//void Stack::Pop(ItemType& item) {
//    if (IsEmpty()) {
//        cout << "Stack is empty\n";
//        return;
//    }
//    item = items[top];
//    top--;
//}
//
//void Stack::reverse() const {
//    cout << "Reversed stack: ";
//    for (int i = top; i >= 0; i--) {
//        cout << items[i] << " "; // Display items in reverse order
//    }
//    cout << endl;
//}
//
//void Stack::display_forwards() const {
//    cout << "Stack items (forwards): ";
//    for (int i = 0; i <= top; i++) { // Changed to <= to include the top item
//        cout << items[i] << " "; // Display items in order
//    }
//    cout << endl;
//}
//
//void Stack::display_backwards() const {
//    cout << "Stack items (backwards): ";
//    for (int i = top; i >= 0; i--) { // Start from top and go to bottom
//        cout << items[i] << " "; // Display items in reverse order
//    }
//    cout << endl;
//}
//
//int Stack::search(int value) const {
//    for (int i = 0; i <= top; i++) { // Search through the stack
//        if (items[i] == value) {
//            return i; // Return the index if found
//        }
//    }
//    return -1; // Return -1 if not found
//}
//
//void Stack::display_size() const {
//    cout << "Current stack size: " << (top + 1) << endl; // Display the current size
//}
//
//// Example usage of the Stack class
//int main() {
//    Stack stack;
//    int value, maxStack, poppedItem, searchValue;
//    cout << "Enter the limit of the stack:";
//    cin >> maxStack;
//    cout << "Enter the value in stack:\n";
//	for (int i = 0; i < maxStack; i++) 
//    {
//        cin >> value;
//		stack.Push(value);
//		
//
//	}
//    stack.display_forwards();
//    stack.display_size();
//    stack.Pop(poppedItem);
//    cout << "Popped item: " << poppedItem << endl;
//
//    stack.display_backwards();
//    stack.display_size();
//
//    stack.reverse(); // Display reversed stack
//    cout << "Enter the value you want to search:\n";
//    cin >> searchValue;
//    int index = stack.search(searchValue);
//    if (index != -1) {
//        cout << "Value " << searchValue << " found at index: " << index << endl;
//    }
//    else {
//        cout << "Value " << searchValue << " not found in stack." << endl;
//    }
//
//    return 0;
//}

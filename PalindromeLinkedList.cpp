//#include <iostream>
//#include <string>
//#include <cctype>
//
//typedef char itemType;
//
//using namespace std;
//
//// Node structure for the linked list
//class Node {
//public:
//    itemType data;
//    Node* next;
//
//    Node(itemType value) : data(value), next(nullptr) {}
//};
//
//// Queue class using linked list
//class Linked_list {
//private:
//    Node* front;
//    Node* rear;
//    int size;
//
//public:
//    Linked_list() : front(nullptr), rear(nullptr), size(0) {}
//
//    bool isEmpty() const {
//        return size == 0;
//    }
//
//    void insert(itemType item) {
//        Node* newNode = new Node(item);
//        if (isEmpty()) {
//            front = rear = newNode;  // list is empty
//        }
//        else {
//            rear->next = newNode;  // Link new node at the end
//            rear = newNode;        // Update rear to new node
//        }
//        size++;
//    }
//
//    itemType remove() {
//        if (isEmpty()) {
//            cout << "Queue Underflow" << endl;
//            exit(1);  // Exit if trying to dequeue from an empty queue
//        }
//        Node* temp = front;
//        itemType item = front->data;
//        front = front->next;  // Move front to the next node
//        delete temp;          // Free the old front node
//        size--;
//        return item;
//    }
//
//    ~Linked_list() {
//        while (!isEmpty()) {
//            remove();  // remove all elements to free memory
//        }
//    }
//    // Function to check if the input contains only alphabetic characters
//    bool isValidName(const string& name) {
//        for (char ch : name) {
//            if (!isalpha(ch)) {
//                return false;
//            }
//        }
//        return true;
//    }
//};
//int main() {
//    Linked_list list;
//    string userInput;
//
//    // Input loop to ensure valid name
//    while (true) {
//        cout << "Enter a string to check: ";
//        getline(cin, userInput);
//
//        // Check if the name contains only alphabetic characters
//        if (!list.isValidName(userInput)) {
//            cout << "The name should not contain numbers or special characters. Please try again.\n";
//            continue;
//        }
//        break;
//    }
//
//    // Enqueue each character of userInput into the queue
//    for (char ch : userInput) {
//        list.insert(ch);
//    }
//
//    // Dequeue characters from queue to create the reversed string
//    string afterDequeue;
//    while (!list.isEmpty()) {
//        afterDequeue = list.remove() + afterDequeue;  // Build reversed string by adding to front
//    }
//
//    // Compare the original and reversed strings
//    if (afterDequeue == userInput)
//        cout << "SAME SAME!!!!!!!" << endl;
//    else
//        cout << "Not SAME!!" << endl;
//
//    return 0;
//}

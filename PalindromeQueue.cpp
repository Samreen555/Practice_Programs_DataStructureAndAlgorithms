//#include <iostream>
//#include <string>
//#include <cctype>
//
//typedef char itemType;
//#define MaxSize 20
//
//using namespace std;
//
//class Queue {
//private:
//    itemType* data;
//    int front, rear, size;
//
//public:
//    Queue() {
//        data = new itemType[MaxSize];
//        front = 0;
//        rear = -1;
//        size = 0;
//    }
//
//    bool isEmpty() const {
//        return size == 0;
//    }
//
//    bool isFull() const {
//        return size == MaxSize;
//    }
//
//    void enqueue(itemType item) {
//        if (isFull()) {
//            cout << "Queue Overflow" << endl;
//            return;
//        }
//        rear = (rear + 1) % MaxSize;
//        data[rear] = item;
//        size++;
//    }
//
//    itemType dequeue() {
//        if (isEmpty()) {
//            cout << "Queue Underflow" << endl;
//            exit(1);  // Exit if trying to dequeue from an empty queue
//        }
//        itemType item = data[front];
//        front = (front + 1) % MaxSize;
//        size--;
//        return item;
//    }
//};
//
//// Function to check if the input contains only alphabetic characters
//bool isValidName(const string& name) {
//    for (char ch : name) {
//        if (!isalpha(ch)) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    Queue queue;
//    string userInput;
//
//    // Input loop to ensure valid name
//    while (true) {
//        cout << "Enter a string to check: ";
//        getline(cin, userInput);
//
//        // Check if the name contains only alphabetic characters
//        if (!isValidName(userInput)) {
//            cout << "The name should not contain numbers or special characters. Please try again.\n";
//            continue;
//        }
//        break;
//    }
//
//    // Enqueue each character of userInput into the queue
//    for (char ch : userInput) {
//        queue.enqueue(ch);
//    }
//
//    // Dequeue characters from queue to create the reversed string
//    string afterDequeue;
//    while (!queue.isEmpty()) {
//        afterDequeue = queue.dequeue() + afterDequeue;  // Build reversed string by adding to front
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

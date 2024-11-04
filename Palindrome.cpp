//#include <iostream>
//#include <string>
//#include <cctype>
//
//typedef char itemType;
//#define MaxSize 20
//
//using namespace std;
//
//class Stack {
//private:
//    itemType* word = new itemType[MaxSize];
//    int top;
//
//public:
//    Stack() {
//        top = -1;
//      }
//    bool isEmpty() const {
//        return (top == -1);
//    }
//    bool isFull() const {
//        return (top == MaxSize - 1);
//    }
//    void push(char item) {
//        if (isFull()) {
//            cout << "Stack Overflow" << endl;
//            return;
//        }
//        top++;
//        word[top] = item;
//    }
//    char pop() {
//        if (isEmpty()) {
//            exit(1);
//        }
//        char item = word[top];
//        top--;
//        return item;
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
//
//
//
//int main() {
//    Stack stack;
//    char ch;
//    string userInput,afterPop;
//    ;
//
//    // Input loop to ensure valid name
//    while (true) {
//        cout << "Enter a string to check: ";
//        getline(cin, userInput);
//
//        // Check if the name contains only alphabetic characters
//        if (!stack.isValidName(userInput)) {
//            cout << "The name should not contain numbers or special characters. Please try again.\n";
//            continue;
//        }
//        break;
//    }
//
//    // Push each character of userInput onto the stack
//    for (int i = 0; i < userInput.size(); i++) {
//        stack.push(userInput[i]);
//    }
//
//    // Pop characters from stack to create the reversed string
//    for (int i = 0; i < userInput.size(); i++) {
//        ch = stack.pop();
//        afterPop += ch;
//    }
//
//    // Compare the original and reversed strings
//    if (afterPop == userInput)
//        cout << "SAME SAME!!!!!!!" << endl;
//    else
//        cout << "Not SAME!!" << endl;
//
//    return 0;
//}

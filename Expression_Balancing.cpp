//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <sstream>
//#include <cctype>
//#include <cmath>
//
//using namespace std;
//
//// Custom stack class
//class Stack {
//private:
//    int maxSize, top;
//    char* charItems;
//    double* doubleItems;
//
//public:
//    // Constructor for character stack
//    Stack(int size) : maxSize(size), top(-1) {
//        charItems = new char[size];
//        doubleItems = nullptr;
//    }
//
//    // Constructor for double stack
//    Stack(int size, bool isDouble) : maxSize(size), top(-1) {
//        doubleItems = new double[size];
//        charItems = nullptr;
//    }
//
//    ~Stack() {
//        delete[] charItems;
//        delete[] doubleItems;
//    }
//
//    bool isEmpty() const {
//        return top == -1;
//    }
//
//    bool isFull() const {
//        return top == maxSize - 1;
//    }
//
//    void push(char item) {
//        if (isFull()) {
//            cout << "Stack is full\n";
//            return;
//        }
//        charItems[++top] = item;
//    }
//
//    void push(double item) {
//        if (isFull()) {
//            cout << "Stack is full\n";
//            return;
//        }
//        doubleItems[++top] = item;
//    }
//
//    char popChar() {
//        if (isEmpty()) {
//            cout << "Stack is empty\n";
//            return '\0';
//        }
//        return charItems[top--];
//    }
//
//    double popDouble() {
//        if (isEmpty()) {
//            cout << "Stack is empty\n";
//            return 0;
//        }
//        return doubleItems[top--];
//    }
//
//    char peekChar() const {
//        if (!isEmpty()) {
//            return charItems[top];
//        }
//        return '\0';
//    }
//
//    double peekDouble() const {
//        if (!isEmpty()) {
//            return doubleItems[top];
//        }
//        return 0;
//    }
//};
//
//// Function to get precedence of operators
//int precedence(char op) {
//    if (op == '+' || op == '-') return 1;
//    if (op == '*' || op == '/') return 2;
//    return 0;
//}
//
//// Function to perform arithmetic operations
//double applyOperation(double a, double b, char op) {
//    switch (op) {
//    case '+': return a + b;
//    case '-': return a - b;
//    case '*': return a * b;
//    case '/': return a / b;
//    default: return 0;
//    }
//}
//
//// Function to convert infix to postfix expression
//string infixToPostfix(const string& expression) {
//    Stack operators(100); // Character stack for operators
//    string postfix;
//    istringstream tokens(expression);
//    char token;
//
//    while (tokens >> token) {
//        if (isdigit(token) || isalpha(token) || token == '.') {
//            postfix += token;
//            if (tokens.peek() == ' ' || tokens.peek() == EOF)
//                postfix += ' ';
//        }
//        else if (token == '(') {
//            operators.push(token);
//        }
//        else if (token == ')') {
//            while (!operators.isEmpty() && operators.peekChar() != '(') {
//                postfix += operators.popChar();
//                postfix += ' ';
//            }
//            operators.popChar(); // Remove '(' from the stack
//        }
//        else { // Operator
//            while (!operators.isEmpty() && precedence(operators.peekChar()) >= precedence(token)) {
//                postfix += operators.popChar();
//                postfix += ' ';
//            }
//            operators.push(token);
//        }
//    }
//
//    // Pop all the remaining operators
//    while (!operators.isEmpty()) {
//        postfix += operators.popChar();
//        postfix += ' ';
//    }
//
//    return postfix;
//}
//
//// Function to evaluate a postfix expression
//double evaluatePostfix(const string& postfix, const unordered_map<char, double>& variables) {
//    Stack values(100, true); // Double stack for values
//    istringstream tokens(postfix);
//    string token;
//
//    while (tokens >> token) {
//        if (isdigit(token[0]) || (token.length() > 1 && token[0] == '.')) {
//            values.push(stod(token));
//        }
//        else if (isalpha(token[0])) {
//            values.push(variables.at(token[0]));
//        }
//        else { // Operator
//            double b = values.popDouble();
//            double a = values.popDouble();
//            values.push(applyOperation(a, b, token[0]));
//        }
//    }
//
//    return values.popDouble();
//}
//
//int main() {
//    string expression = "7 - ((X * ((X + Y) / (J - 3)) + Y) / (4 - 2.5))";
//
//    // Set values for variables
//    unordered_map<char, double> variables = {
//        {'X', 5.0}, // Set your values here
//        {'Y', 3.0},
//        {'J', 10.0}
//    };
//
//    // Convert the expression to postfix notation
//    string postfix = infixToPostfix(expression);
//    cout << "Postfix Expression: " << postfix << endl;
//
//    // Evaluate the postfix expression
//    double result = evaluatePostfix(postfix, variables);
//    cout << "Result: " << result << endl;
//
//    return 0;
//}

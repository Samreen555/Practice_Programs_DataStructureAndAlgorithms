//#include<iostream>
//#include <stdexcept>
//#include <limits>
//using namespace std;
//
//struct Node {
//	int data;
//	Node* next;  // Pointer to the next node
//	Node* previous; // Pointer to the previous node
//
//	Node(int val)  // Constructor to initialize variables and pointers
//	{
//		data = val;
//		next = nullptr;
//		previous = nullptr;
//	}
//};
//
//class linked_list {
//private:
//	Node* head; // Pointer for the head node
//	Node* tail;  // Pointer for the tail node
//public:
//	linked_list()  // Constructor to initialize pointers to null
//	{
//		head = nullptr;
//		tail = nullptr;
//	}
//
//	~linked_list() {}  // Destructor
//
//	// Check if the list is empty
//	bool isEmpty() {
//		return head == nullptr;
//	}
//
//	// Check if the list is full
//	bool isFull() {
//		Node* temp = new (nothrow) Node(0);  // Try to allocate a node
//		if (!temp) {
//			return true;  // Memory allocation failed, the list is "full"
//		}
//		delete temp;  // Memory allocation succeeded, the list is not full
//		return false;
//	}
//
//	int size() {
//		int count = 0;
//		Node* current = head;
//		while (current) {
//			count++;
//			current = current->next;
//		}
//		return count;
//	}
//
//	// Insertion at start
//	void push(int value) {
//		Node* newNode = new Node(value);
//		if (!head) {
//			head = tail = newNode;
//		}
//		else {
//			newNode->next = head;
//			head->previous = newNode;
//			head = newNode;
//		}
//	}
//
//	// Insertion at middle
//	void insertAtMiddle(int value, int position) {
//		if (!head) {
//			if (position == 1) {
//				push(value);  // Special case: Insert at start if list is empty
//			}
//			else {
//				cout << "Invalid position. The list is empty.\n";
//			}
//			return;
//		}
//
//		if (position < 1 || position > size() + 1) {
//			cout << "Invalid position. Insertion failed.\n";
//			return;
//		}
//
//		if (position == 1) {
//			push(value);
//			return;
//		}
//
//		if (position == size() + 1) {
//			insertAtEnd(value);
//			return;
//		}
//
//		Node* newNode = new Node(value);
//		Node* current = head;
//
//		// Traverse to the node just before the target position
//		for (int i = 1; i < position - 1 && current != nullptr; i++) {
//			current = current->next;
//		}
//
//		// Ensure current is not nullptr before accessing its members
//		if (current == nullptr) {
//			cout << "Error: Unexpected null pointer. Insertion failed.\n";
//			delete newNode;
//			return;
//		}
//
//		// Inserting the new node
//		newNode->next = current->next;
//		newNode->previous = current;
//
//		if (current->next) {
//			current->next->previous = newNode;
//		}
//
//		current->next = newNode;
//
//		// If inserted at the end, update tail
//		if (newNode->next == nullptr) {
//			tail = newNode;
//		}
//	}
//
//	// Insertion at end
//	void insertAtEnd(int value) {
//		Node* newNode = new Node(value);
//		if (!tail) {
//			head = tail = newNode;
//		}
//		else {
//			tail->next = newNode;
//			newNode->previous = tail;
//			tail = newNode;
//		}
//
//	}
//
//	// Deletion at start
//	void pop() {
//		if (!head) {
//			cout << "List is empty\n";
//			return;
//		}
//		Node* temp = head;
//		head = head->next;
//		if (head) {
//			head->previous = nullptr;
//		}
//		else {
//			tail = nullptr;
//		}
//		delete temp;
//	}
//
//	// Delete at middle
//	void deleteAtMiddle(int position) {
//		if (position < 1 || position > size()) {
//			cout << "Invalid position. Deletion failed.\n";
//			return;
//		}
//		if (position == 1) {
//			pop();
//			return;
//		}
//		if (position == size()) {
//			deleteAtEnd();
//			return;
//		}
//
//		Node* current = head;
//
//		// Traverse to the node at the specified position
//		for (int i = 1; i < position; i++) {
//			current = current->next;
//		}
//
//		// Remove the node
//		current->previous->next = current->next;
//		current->next->previous = current->previous;
//		delete current;
//	}
//
//	// Deletion at end
//	void deleteAtEnd() {
//		if (!tail) {
//			cout << "List is empty\n";
//			return;
//		}
//		Node* temp = tail;
//		tail = tail->previous;
//		if (tail) {
//			tail->next = nullptr;
//		}
//		else {
//			head = nullptr;
//		}
//		delete temp;
//	}
//
//	// Input restricted dequeue (can only insert at one end, but delete from both)
//	void inputRestrictedDequeueInsert(int value) {
//		insertAtEnd(value);
//	}
//
//	// Output restricted dequeue (can only delete from one end, but insert at both)
//	void outputRestrictedDequeueDelete() {
//		cout << "Value is deleted from start:\n";
//		pop();
//	}
//
//	// Display the list
//	void display() {
//		if (!head) {
//			cout << "List is empty\n";
//			return;
//		}
//		Node* current = head;
//		while (current) {
//			cout << current->data << " ";
//			current = current->next;
//		}
//		cout << "\n";
//	}
//};
//
//void display_menu() {
//	cout << "Menu:\n";
//	cout << "1.Insertion at start:\n";
//	cout << "2.Insertion at middle:\n";
//	cout << "3.Insertion at end:\n";
//	cout << "4.Deletion at start:\n";
//	cout << "5.Deletion at middle:\n";
//	cout << "6.Deletion at end:\n";
//	cout << "7.Input restricted dequeue:\n";
//	cout << "8.Output restricted dequeue:\n";
//	cout << "9.Display list\n";
//	cout << "10.Exit:\n";
//}
//
//int main() {
//	int  value, position, list_value, numElements;
//	string choice;
//	linked_list list;
//	cout << "How many elements would you like to add initially(in numbers)? ";
//	cin >> numElements;
//	cout << "Enter elements into the list:";
//	for (int i = 0; i < numElements; ++i) {
//		cin >> list_value;
//		list.insertAtEnd(list_value);
//	}
//	do {
//		display_menu();
//		cout << "Enter your choice:\n";
//		cin >> choice;
//		if (choice == "1") {
//			cout << "Enter value to insert at start: ";
//			while (!(cin >> value)) {
//				cout << "Invalid input. Please enter an integer: ";
//				cin.clear();
//				cin.ignore(numeric_limits<streamsize>::max(), '\n');
//			}
//			list.push(value);
//		}
//		else if (choice == "2") {
//			cout << "Enter value and position to insert at middle: ";
//			cin >> value >> position;
//			list.insertAtMiddle(value, position);
//		}
//		else if (choice == "3") {
//			cout << "Enter value to insert at end: ";
//			while (!(cin >> value)) {
//				cout << "Invalid input. Please enter an integer: ";
//				cin.clear();
//				cin.ignore(numeric_limits<streamsize>::max(), '\n');
//			}			list.insertAtEnd(value);
//		}
//		else if (choice == "4") {
//			list.pop();
//		}
//		else if (choice == "5") {
//			cout << "Enter position to delete at middle: ";
//			cin >> position;
//			list.deleteAtMiddle(position);
//		}
//		else if (choice == "6") {
//			list.deleteAtEnd();
//		}
//		else if (choice == "7") {
//			cout << "Enter value for input restricted dequeue (insert at end): ";
//			while (!(cin >> value)) {
//				cout << "Invalid input. Please enter an integer: ";
//				cin.clear();
//				cin.ignore(numeric_limits<streamsize>::max(), '\n');
//			}
//			list.inputRestrictedDequeueInsert(value);
//		}
//		else if (choice == "8") {
//			list.outputRestrictedDequeueDelete();
//		}
//		else if (choice == "9") {
//			list.display();
//		}
//		else if (choice == "10") {
//			cout << "Exit the program\n";
//			break;  // Exiting the loop if choice is 10
//		}
//		else {
//			cout << "Invalid choice! Please try again.\n";
//		}
//		cin.ignore(); // Clear the newline character left by previous cin
//
//	} while (choice != "10");
//
//
//	return 0;
//}

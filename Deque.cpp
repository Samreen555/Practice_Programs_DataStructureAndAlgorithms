//#include <iostream>
//#include <string>
//using namespace std;
//
//typedef int ItemType; // Define the type of items to be stored in the deque
//
//class Deque {
//private:
//    int front;        // Index of the front item
//    int rear;         // Index of the rear item
//    int maxSize;      // Maximum size of the deque
//    ItemType* items;  // DYNAMIC ARRAY
//    int currentSize;  // Current number of elements in the deque
//
//public:
//    Deque(); // Default constructor
//    Deque(int max); // Parameterized constructor
//    ~Deque(); // Destructor
//    bool IsEmpty() const;
//    bool IsFull() const;
//    void InsertFront(ItemType newItem);
//    void InsertRear(ItemType newItem);
//    void RemoveFront(ItemType& item);
//    void RemoveRear(ItemType& item);
//    void display_forwards() const;
//    void display_backwards() const;
//    int search(int value) const;
//    void display_size() const;
//};
//
//Deque::Deque() {
//    front = 0;
//    rear = -1;
//    maxSize = 10;
//    items = new ItemType[maxSize];
//    currentSize = 0;
//}
//
//Deque::Deque(int max) {
//    front = 0;
//    rear = -1;
//    maxSize = max;
//    items = new ItemType[maxSize];
//    currentSize = 0;
//}
//
//Deque::~Deque() {
//    delete[] items;
//}
//
//bool Deque::IsEmpty() const {
//    return currentSize == 0; // Deque is empty if the current size is zero
//}
//
//bool Deque::IsFull() const {
//    return currentSize == maxSize; // Deque is full if current size equals maxSize
//}
//
//void Deque::InsertFront(ItemType newItem) {
//    if (IsFull()) {
//        cout << "Deque is full\n";
//        return;
//    }
//    front = (front - 1 + maxSize) % maxSize; // Circular decrement for front
//    items[front] = newItem;
//    currentSize++;
//}
//
//void Deque::InsertRear(ItemType newItem) {
//    if (IsFull()) {
//        cout << "Deque is full\n";
//        return;
//    }
//    rear = (rear + 1) % maxSize; // Circular increment for rear
//    items[rear] = newItem;
//    currentSize++;
//}
//
//void Deque::RemoveFront(ItemType& item) {
//    if (IsEmpty()) {
//        cout << "Deque is empty\n";
//        return;
//    }
//    item = items[front];
//    front = (front + 1) % maxSize; // Circular increment for front
//    currentSize--;
//}
//
//void Deque::RemoveRear(ItemType& item) {
//    if (IsEmpty()) {
//        cout << "Deque is empty\n";
//        return;
//    }
//    item = items[rear];
//    rear = (rear - 1 + maxSize) % maxSize; // Circular decrement for rear
//    currentSize--;
//}
//
//void Deque::display_forwards() const {
//    cout << "Deque items (forwards): ";
//    for (int i = 0; i < currentSize; i++) {
//        cout << items[(front + i) % maxSize] << " "; // Display items in order
//    }
//    cout << endl;
//}
//
//void Deque::display_backwards() const {
//    cout << "Deque items (backwards): ";
//    for (int i = currentSize - 1; i >= 0; i--) {
//        cout << items[(front + i) % maxSize] << " "; // Display items in reverse order
//    }
//    cout << endl;
//}
//
//int Deque::search(int value) const {
//    for (int i = 0; i < currentSize; i++) {
//        if (items[(front + i) % maxSize] == value) {
//            return (front + i) % maxSize; // Return the index if found
//        }
//    }
//    return -1; // Return -1 if not found
//}
//
//void Deque::display_size() const {
//    cout << "Current deque size: " << currentSize << endl; // Display the current size
//}
//
//// Example usage of the Deque class
//int main() {
//    int maxSize, value, removedItem, searchValue;
//
//    cout << "Enter the limit of the deque: ";
//    cin >> maxSize;
//    Deque deque(maxSize);
//
//    // Insert items at the rear
//    cout << "Enter values to insert at the rear:\n";
//    for (int i = 0; i < maxSize; i++) {
//        cin >> value;
//        deque.InsertRear(value);
//    }
//
//    deque.display_forwards();
//    deque.display_size();
//
//    // Remove an item from the front
//    deque.RemoveFront(removedItem);
//    cout << "Removed item from front: " << removedItem << endl;
//
//    deque.display_backwards();
//    deque.display_size();
//
//    // Insert an item at the front
//    cout << "Enter a value to insert at the front:\n";
//    cin >> value;
//    deque.InsertFront(value);
//
//    deque.display_forwards();
//    deque.display_size();
//
//    // Search for a value
//    cout << "Enter the value you want to search:\n";
//    cin >> searchValue;
//    int index = deque.search(searchValue);
//    if (index != -1) {
//        cout << "Value " << searchValue << " found at index: " << index << endl;
//    }
//    else {
//        cout << "Value " << searchValue << " not found in deque." << endl;
//    }
//
//    return 0;
//}

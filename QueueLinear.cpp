//#include <iostream>
//#include <string>
//using namespace std;
//typedef int ItemType; // Define the type of items to be stored in the queue
//
//class Queue {
//private:
//    int front;   // Index of the front item
//    int rear;    // Index of the rear item
//    int maxQueue; // Maximum size of the queue
//    ItemType* items; // DYNAMIC ARRAY
//
//public:
//    Queue(); // Default constructor
//    Queue(int max); // Parameterized constructor
//    ~Queue(); // Destructor
//    bool IsEmpty() const;
//    bool IsFull() const;
//    void Enqueue(ItemType newItem);
//    void Dequeue(ItemType& item);
//    void display_forwards() const;
//    void display_backwards() const;
//    int search(int value) const;
//    void display_size() const;
//};
//
//Queue::Queue() {
//    front = 0;
//    rear = -1;
//    maxQueue = 10;
//    items = new ItemType[maxQueue];
//}
//
//Queue::Queue(int max) {
//    front = 0;
//    rear = -1;
//    maxQueue = max;
//    items = new ItemType[max];
//}
//
//Queue::~Queue() {
//    delete[] items;
//}
//
//bool Queue::IsEmpty() const {
//    return front ==rear==-1; // Queue is empty if front index is greater than rear
//}
//
//bool Queue::IsFull() const {
//    return rear == maxQueue - 1; // Queue is full if rear reaches maxQueue - 1
//}
//
//void Queue::Enqueue(ItemType newItem) {
//    if (IsFull()) {
//        cout << "Queue is full\n";
//        return;
//    }
//    rear++;
//    items[rear] = newItem;
//}
//
//void Queue::Dequeue(ItemType& item) {
//    if (IsEmpty()) {
//        cout << "Queue is empty\n";
//        return;
//    }
//    item = items[front];
//    front++;
//}
//
//void Queue::display_forwards() const {
//    cout << "Queue items (forwards): ";
//    for (int i = front; i <= rear; i++) { // Changed to show from front to rear
//        cout << items[i] << " "; // Display items in order
//    }
//    cout << endl;
//}
//
//void Queue::display_backwards() const {
//    cout << "Queue items (backwards): ";
//    for (int i = rear; i >= front; i--) { // Start from rear and go to front
//        cout << items[i] << " "; // Display items in reverse order
//    }
//    cout << endl;
//}
//
//int Queue::search(int value) const {
//    for (int i = front; i <= rear; i++) { // Search through the queue
//        if (items[i] == value) {
//            return i; // Return the index if found
//        }
//    }
//    return -1; // Return -1 if not found
//}
//
//void Queue::display_size() const {
//    cout << "Current queue size: " << (rear - front + 1) << endl; // Display the current size
//}
//
//// Example usage of the Queue class
//int main() {
//    int maxQueue, value, dequeuedItem, searchValue;
//
//    cout << "Enter the limit of the queue: ";
//    cin >> maxQueue;
//    Queue queue(maxQueue);
//
//    cout << "Enter the values in the queue:\n";
//    for (int i = 0; i < maxQueue; i++) {
//        cin >> value;
//        queue.Enqueue(value);
//    }
//
//    queue.display_forwards();
//    queue.display_size();
//
//    queue.Dequeue(dequeuedItem);
//    cout << "Dequeued item: " << dequeuedItem << endl;
//
//    queue.display_backwards();
//    queue.display_size();
//
//    cout << "Enter the value you want to search:\n";
//    cin >> searchValue;
//    int index = queue.search(searchValue);
//    if (index != -1) {
//        cout << "Value " << searchValue << " found at index: " << index << endl;
//    }
//    else {
//        cout << "Value " << searchValue << " not found in queue." << endl;
//    }
//
//    return 0;
//}

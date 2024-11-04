//#include<iostream>
//#include<string>
//using namespace std;
//
//typedef struct {
//    string name;
//    string role; // "Student", "Faculty", or "Administ"
//} Itemtype;
//
//// Queue class to handle generic items
//class Queue {
//private:
//    int front, rear, maxQueue, count;
//    Itemtype* items;
//public:
//    Queue(int size) {
//        front = rear = -1;
//        maxQueue = size;
//        count = 0;
//        items = new Itemtype[maxQueue];
//    }
//    ~Queue() {
//        delete[] items;
//    }
//    bool isEmpty() {
//        return (count == 0);
//    }
//    bool isFull() {
//        return (count == maxQueue);
//    }
//    // Insert into the queue
//    void enqueue(Itemtype item) {
//        if (isFull()) {
//            cout << "Queue is full, can't insert more elements.\n";
//            return;
//        }
//        rear = (rear + 1) % maxQueue;
//        items[rear] = item;
//        count++;
//        if (front == -1) {
//            front = 0;
//        }
//    }
//    // Remove from the queue
//    Itemtype dequeue() {
//        if (isEmpty()) {
//            cout << "Queue is empty, can't remove elements.\n";
//            return { "", "" };
//        }
//        Itemtype item = items[front];
//        front = (front + 1) % maxQueue;
//        count--;
//        if (isEmpty()) {
//            front = rear = -1; // Reset if queue becomes empty
//        }
//        return item;
//    }
//    void display() {
//        if (isEmpty()) {
//            cout << "Queue is empty.\n";
//            return;
//        }
//        cout << "Current Queue:\n";
//        for (int i = 0; i < count; i++) {
//            int index = (front + i) % maxQueue;
//            cout << items[index].name << " (" << items[index].role << ")\n";
//        }
//    }
//
//    // Helper function to transfer all elements from one queue to another
//    void transferAll(Queue& targetQueue) {
//        while (!isEmpty()) {
//            targetQueue.enqueue(dequeue());
//        }
//    }
//};
//
//int main() {
//    int maxSize;
//    cout << "Enter the maximum size of the queues: ";
//    cin >> maxSize;
//    cin.ignore();  // Clear the newline from the buffer after reading an integer
//
//    // Create separate queues for Student, Faculty, and Administ
//    Queue studentQueue(maxSize), facultyQueue(maxSize), adminQueue(maxSize);
//
//    // The final sorted queue
//    Queue sortedQueue(maxSize);
//
//    string choice;
//    Itemtype newEntry;
//
//    do {
//        cout << "MENU: ";
//        cout << "\n1. Insert a new student.";
//        cout << "\n2. Insert a new faculty member.";
//        cout << "\n3. Insert a new administration member.";
//        cout << "\n4. Display individual queues.";
//        cout << "\n5. Merge queues into a single priority queue and display.";
//        cout << "\n6. Exit\n";
//
//        cout << "Enter your choice: ";
//        getline(cin, choice);  // Get the choice as a line
//
//        if (choice == "1") {
//            cout << "Enter student name: ";
//            getline(cin, newEntry.name);
//            newEntry.role = "Student";
//            studentQueue.enqueue(newEntry);
//        }
//        else if (choice == "2") {
//            cout << "Enter faculty name: ";
//            getline(cin, newEntry.name);
//            newEntry.role = "Faculty";
//            facultyQueue.enqueue(newEntry);
//        }
//        else if (choice == "3") {
//            cout << "Enter admin name: ";
//            getline(cin, newEntry.name);
//            newEntry.role = "Administ";
//            adminQueue.enqueue(newEntry);
//        }
//        else if (choice == "4") {
//            cout << "\nStudent Queue:\n";
//            studentQueue.display();
//            cout << "\nFaculty Queue:\n";
//            facultyQueue.display();
//            cout << "\nAdmin Queue:\n";
//            adminQueue.display();
//        }
//        else if (choice == "5") {
//            // Merge all queues in the priority order (Admin -> Faculty -> Student)
//            adminQueue.transferAll(sortedQueue);   // Admin has highest priority
//            facultyQueue.transferAll(sortedQueue); // Faculty has middle priority
//            studentQueue.transferAll(sortedQueue); // Student has lowest priority
//            cout << "\nFinal Sorted Queue:\n";
//            sortedQueue.display();
//        }
//        else if (choice == "6") {
//            cout << "Exiting...\n";
//        }
//        else {
//            cout << "Invalid choice.\n";
//        }
//    } while (choice != "6");
//    sortedQueue.dequeue();
//    return 0;
//}

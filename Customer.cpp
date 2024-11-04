//#include <iostream>
//#include <string>
//using namespace std;
//
//// Structure to represent a customer
//struct Customer {
//    string name;
//    int arrivalTime;
//    Customer* next;
//
//    Customer(string n, int t) : name(n), arrivalTime(t), next(nullptr) {}
//};
//
//// Custom Queue class for managing Customer objects
//class CustomerQueue {
//private:
//    Customer* front;
//    Customer* rear;
//
//public:
//    // Constructor initializes an empty queue
//    CustomerQueue() : front(nullptr), rear(nullptr) {}
//
//    // Destructor to clean up the queue
//    ~CustomerQueue() {
//        while (!isEmpty()) {
//            dequeue();
//        }
//    }
//
//    // Check if the queue is empty
//    bool isEmpty() const {
//        return front == nullptr;
//    }
//
//    // Add a customer to the rear of the queue
//    void enqueue(const string& name, int arrivalTime) {
//        Customer* newCustomer = new Customer(name, arrivalTime);
//        if (isEmpty()) {
//            front = rear = newCustomer;
//        }
//        else {
//            rear->next = newCustomer;
//            rear = newCustomer;
//        }
//    }
//
//    // Remove a customer from the front of the queue
//    void dequeue() {
//        if (isEmpty()) {
//            cout << "Queue is empty, cannot dequeue.\n";
//            return;
//        }
//        Customer* temp = front;
//        front = front->next;
//        delete temp;
//        if (front == nullptr) {
//            rear = nullptr;
//        }
//    }
//
//    // Get the customer at the front of the queue
//    Customer* peek() const {
//        if (isEmpty()) {
//            cout << "Queue is empty.\n";
//            return nullptr;
//        }
//        return front;
//    }
//};
//
//int main() {
//    CustomerQueue customerQueue;
//
//    // Adding some customers to the queue
//    customerQueue.enqueue("Alice", 1);
//    customerQueue.enqueue("Bob", 2);
//    customerQueue.enqueue("Charlie", 3);
//
//    cout << "Customer Service Simulation (FIFO):\n";
//
//    // Serving customers based on arrival time
//    while (!customerQueue.isEmpty()) {
//        Customer* current = customerQueue.peek(); // Get the next customer
//        cout << "Serving customer: " << current->name << " who arrived at time " << current->arrivalTime << endl;
//        customerQueue.dequeue(); // Remove from the queue
//    }
//
//    return 0;
//}
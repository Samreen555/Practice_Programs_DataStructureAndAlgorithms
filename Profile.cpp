//#include <iostream>
//#include <string>
//#define Max_Size 20 // Corrected
//
//using namespace std;
//
//class linked_list {
//    int top;
//    int* arr;
//public:
//    linked_list();
//    ~linked_list();
//    bool isEmpty() const;
//    bool isFull() const;
//    void insert(int value);
//    int remove();
//    void insertMissingProfile(int*& ProList, int& size);
//};
//
//int main() {
//    linked_list list;
//
//    // Initial size and dynamically allocated array for profiles
//    int size = 0; // Starting size
//    int* ProList = new int[Max_Size]; // Allocate memory for profiles
//
//    cout << "Enter up to 5 profile elements (Enter -1 to stop):\n";
//    for (int i = 0; i < 5; i++) {
//        int value;
//        cin >> value;
//        if (value == -1) break; // Stop input if user enters -1
//        ProList[size++] = value; // Store the entered value and increase size
//    }
//
//    // Insert the missing profile
//    list.insertMissingProfile(ProList, size);
//
//    // Output the updated ProList
//    cout << "Updated ProList: ";
//    for (int i = 0; i < size; ++i) {
//        cout << ProList[i] << " ";
//    }
//    cout << endl;
//
//    // Free the dynamically allocated array
//    delete[] ProList;
//
//    return 0;
//}
//
//linked_list::linked_list() {
//    top = -1;
//    arr = new int[Max_Size]; // Initialize the array
//}
//linked_list::~linked_list() {
//    delete[] arr; // Free the dynamically allocated memory
//}
//bool linked_list::isEmpty() const {
//    return top == -1; // Corrected
//}
//bool linked_list::isFull() const {
//    return top == Max_Size - 1; // Corrected
//}
//
//void linked_list::insert(int value) {
//    if (isFull()) { // Corrected
//        cout << "full: " << endl;
//        return; // Added return to avoid accessing arr when full
//    }
//    top++;
//    arr[top] = value;
//}
//
//int linked_list::remove() {
//    if (isEmpty()) {
//        cout << "Empty:" << endl;
//        return -1; // Return an invalid value or handle as you see fit
//    }
//    int value = arr[top];
//    top--;
//    return value;
//}
//
//void linked_list::insertMissingProfile(int*& ProList, int& size) {
//    for (int i = 1; i < size; ++i) {
//        // Check if the current profile is not the next in sequence
//        if (ProList[i] != ProList[i - 1] + 1) {
//            // Create a new array with an additional slot for the missing profile
//            int newSize = size + 1;
//            int* newProList = new int[newSize];
//
//            // Copy existing elements to the new array
//            for (int j = 0; j < i; ++j) {
//                newProList[j] = ProList[j]; // Copy elements before the insertion index
//            }
//
//            // Insert the missing profile
//            newProList[i] = ProList[i - 1] + 1; // Insert the missing profile
//
//            // Copy remaining elements
//            for (int j = i; j < size; ++j) {
//                newProList[j + 1] = ProList[j]; // Correctly shift elements after the insertion
//            }
//
//            // Update the original ProList and size
//            delete[] ProList;  // Free the old array
//            ProList = newProList; // Point to the new array
//            size = newSize; // Update the size
//            break; // Exit the loop since we only insert one missing profile at a time
//        }
//    }
//}

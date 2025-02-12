




#include <iostream>

using namespace std;

// Node structure 
struct Node {
    int data;
    Node* prev;
    Node* next;
    
    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Doubly linked list class
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Function to insert a node at the beginning of the list
    void insertBegin(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Function to insert a node at the end of the list
    void insertEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Function to insert a node at the middle of the list
    void insertMiddle(int val, int position) {
        if (position < 1) 
		{
            cout << "Invalid position." << endl;
            return;
        }
        Node* newNode = new Node(val);
        if (head == nullptr)
	    {
            head = tail = newNode;
        } else
	   
	    {
            Node* temp = head;
            int count = 1;
            while (temp->next != nullptr && count < position - 1) {
                temp = temp->next;
                count++;
            }
            if (temp->next == nullptr && count < position - 1) {
                cout << "Invalid position." << endl;
                delete newNode;
                return;
            }
            newNode->next = temp->next;
            newNode->prev = temp;
            
            
            if (temp->next != nullptr) {
                temp->next->prev = newNode;
            }
            temp->next = newNode;
        }
    }

    // Function to delete a node at the beginning of the list
    void deleteBegin() {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        delete temp;
    }

    // Function to delete a node at the end of the list
    void deleteEnd() {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if (tail != nullptr) {
            tail->next = nullptr;
        } else {
            head = nullptr;
        }
        delete temp;
    }

    // Function to delete a node at the middle of the list
    void deleteMiddle(int position) {
        if (head == nullptr) {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }
        if (position < 1) {
            cout << "Invalid position." << endl;
            return;
        }
        Node* temp = head;
        int count = 1;
        while (temp != nullptr && count < position) {
            temp = temp->next;
            count++;
        }
        if (temp == nullptr) {
            cout << "Invalid position." << endl;
            return;
        }
        if (temp == head) {
            deleteBegin();
        } else if (temp == tail) {
            deleteEnd();
        } else {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }
    }

    // Function to display the contents of the list
    void display() {
        Node* curr = head;
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    // Inserting elements
    dll.insertEnd(2);
    dll.insertBegin(1);
    dll.insertEnd(4);
     dll.insertEnd(5);
      dll.insertEnd(6);
    dll.insertMiddle(3, 3);

    cout << "Doubly Linked List: ";
    dll.display(); // Output: 1 2 3 4

    // Deleting elements
    dll.deleteBegin();
   dll.deleteMiddle(2);
   dll.deleteEnd();

    cout << "Doubly Linked List after deletion: ";
    dll.display(); // Output: 2

    return 0;
}

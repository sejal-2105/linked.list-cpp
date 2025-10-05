#include <iostream>
using namespace std;
class Node 
{
    public:
        int value;
        Node* next;
        Node(int val) 
        {
            value = val;
            next = nullptr;
        }
};
void addToFront(Node*& head, int val) 
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void printList(Node* head) 
{
    Node* current = head;
    while (current != nullptr) 
    {
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}
int main() 
{
    Node* head = nullptr;
    addToFront(head, 100);
    printList(head);
    addToFront(head, 200);
    printList(head);
    addToFront(head, 300);
    printList(head);
    return 0;
}

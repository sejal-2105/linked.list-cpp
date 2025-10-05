#include <iostream>
using namespace std;
class Link 
{
    public:
        int data;
        Link* next;
        Link(int num) 
        {
            data = num;
            next = nullptr;
        }
        void display() 
        {
            cout << "Data: " << data;
            if (next == nullptr) 
                cout << " | Next: END" << endl;
            else 
                cout << " | Next: " << next->data << endl;
        }
};
int main() 
{
    Link* l1 = new Link(6);
    Link* l2 = new Link(12);
    l1->next = l2;
    cout << "First Node -> ";
    l1->display();
    cout << "Second Node -> ";
    l2->display();
    return 0;
}

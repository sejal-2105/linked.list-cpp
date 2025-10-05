# linked.list-cpp

### **Experiment 1: Basic Linked Node Structure**

**Aim:** To demonstrate the structure of a single node (or link) and how two nodes can be manually connected to form a simple chain.

**Theory:** A **Linked List** is a dynamic data structure where elements (called **nodes** or **links**) are connected through **pointers**. Each node typically contains two parts: the **data** and a **pointer** (or link) to the next node in the sequence. This experiment uses a class named `Link` to define this structure, and the nodes are dynamically created on the heap using `new`. The connection is established by setting the `next` pointer of one node to point to the address of the subsequent node.

**Algorithm:**
1.  **Define the `Link` class:**
    a.  Include a public integer member `data` to hold the node's value.
    b.  Include a public pointer member `next` of type `Link*` to store the address of the next node.
    c.  Define a parameterized constructor `Link(int num)` that initializes `data` with `num` and sets `next` to `nullptr` (indicating the end of a chain).
    d.  Define a `display()` method to print the node's data and the data of the node it points to (or "END" if `next` is `nullptr`).
2.  **In `main`:**
    a.  Dynamically create two `Link` objects, `l1` (with data $6$) and `l2` (with data $12$).
    b.  Establish the link by setting `l1->next = l2`, making `l1` point to `l2`.
    c.  Call the `display()` method for both `l1` and `l2` to show their connection.

***

### **Experiment 2: Linked List Insertion at the Front**

**Aim:** To demonstrate the fundamental linked list operation of **inserting a new node at the front** of the list (Prepend operation).

**Theory:** This program uses a **Singly Linked List**, where traversal is possible only in one direction. The **`head`** pointer holds the address of the first node in the list. The **insertion at the front** operation is crucial for dynamic list management. It involves three steps:
1.  Create the `newNode`.
2.  Make the `newNode`'s `next` pointer point to the current `head`.
3.  Update the `head` pointer to point to the `newNode`, making the new node the first element.

**Algorithm:**
1.  **Define the `Node` class:** Include public members `value` (int) and `next` (`Node*`), along with a parameterized constructor.
2.  **Define the `addToFront` function:**
    a.  Accept a reference to the `head` pointer (`Node*& head`) to allow modification of the actual `head` pointer in `main`.
    b.  Create a new node, `newNode`, with the given `val`.
    c.  Set `newNode->next = head` (new node points to the old list head).
    d.  Update the `head` pointer: `head = newNode` (head now points to the new node).
3.  **Define the `printList` function:** Traverse the list starting from `head` until `current` is `nullptr`, printing the `value` of each node.
4.  **In `main`:**
    a.  Initialize the list with an empty `head` pointer (`head = nullptr`).
    b.  Call `addToFront` multiple times ($100, 200, 300$) to sequentially insert new nodes at the beginning of the list.
    c.  Call `printList` after each insertion to demonstrate the list's growing state.

***

### **Conclusion**

These experiments effectively illustrate the fundamental building blocks and operations of **Linked Lists**. Experiment 1 establishes the basic node structure (data and a pointer) and manual linkage, while Experiment 2 demonstrates the **insertion at the front** algorithm, a key technique for dynamically growing a linked list.

### C - More Singly Linked Lists

###   		Singly Linked List in C

Singly Linked List in C is a linear data structures, used for storing data in an easy and efficient way.
Linked List in C comprises nodes like structures, which can further be divided into 2 parts in the case of a singly linked list.
These two parts are-:
* Node – for storing the data.
* Pointer – for storing the address of the next node.

In a Singly linked list there is only one pointer type variable, that contains the address of the next node.

##### Implementation of Singly Linked List in C
We implement Linked List  using user defined data type, with the help of structure or struct. Since Singly linked list has only 1 pointer type value, which means it can store the address of only one node, which will be  the next to it. As a result, we can only move in one direction in a Singly Linked List i.e; from head to tail, which makes traversing a linked list more difficult. Implementing  linked list  rather than using array is better, since the insertion and deletion operations in  Linked List are less complicated and less time consuming in comparison with arrays.


#### How to Construct a Singly Linked List in C ?
For constructing a singly linked list in C we make use of the structure keyword(struct), for creating user-defined data types, which can store various different types of data in the nodes of the singly linked list.

### The syntax for creating a node

struct Node {
  int Data;
  Struct Node* next;
};

This code will create a data type Node, which  will be able to store two values-:

int value – data
pointer value – address of the next node.

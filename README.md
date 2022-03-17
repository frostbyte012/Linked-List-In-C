This is a general Link List Program to help student learn link List in Data Structures and algorithm in C.

Linked List
Linked List can be defined as collection of objects called nodes that are randomly stored in the memory.
A node contains two fields i.e. data stored at that particular address and the pointer which contains the address of the next node in the memory.
The last node of the list contains pointer to the null.
DS Linked List

<img src="https://static.javatpoint.com/ds/images/linked-list.png" height="200" width="700">

Uses of Linked List
The list is not required to be contiguously present in the memory. The node can reside any where in the memory and linked together to make a list. This achieves optimized utilization of space.
list size is limited to the memory size and doesn't need to be declared in advance.
Empty node can not be present in the linked list.
We can store values of primitive types or objects in the singly linked list.
Why use linked list over array?
Till now, we were using array data structure to organize the group of elements that are to be stored individually in the memory. However, Array has several advantages and disadvantages which must be known in order to decide the data structure which will be used throughout the program.

Array contains following limitations:

The size of array must be known in advance before using it in the program.
Increasing size of the array is a time taking process. It is almost impossible to expand the size of the array at run time.
All the elements in the array need to be contiguously stored in the memory. Inserting any element in the array needs shifting of all its predecessors.
Linked list is the data structure which can overcome all the limitations of an array. Using linked list is useful because,

It allocates the memory dynamically. All the nodes of linked list are non-contiguously stored in the memory and linked together with the help of pointers.
Sizing is no longer a problem since we do not need to define its size at the time of declaration. List grows as per the program's demand and limited to the available memory space.
Singly linked list or One way chain
Singly linked list can be defined as the collection of ordered set of elements. The number of elements may vary according to need of the program. A node in the singly linked list consist of two parts: data part and link part. Data part of the node stores actual information that is to be represented by the node while the link part of the node stores the address of its immediate successor.


One way chain or singly linked list can be traversed only in one direction. In other words, we can say that each node contains only next pointer, therefore we can not traverse the list in the reverse direction.

Consider an example where the marks obtained by the student in three subjects are stored in a linked list as shown in the figure.

<img src="https://static.javatpoint.com/ds/images/singly-link-list.png" height="200" width="700">


In the above figure, the arrow represents the links. The data part of every node contains the marks obtained by the student in the different subject. The last node in the list is identified by the null pointer which is present in the address part of the last node. We can have as many elements we require, in the data part of the list.

Complexity
Data Structure	Time Complexity	Space Compleity
Average	Worst	Worst
Access	Search	Insertion	Deletion	Access	Search	Insertion	Deletion	
Singly Linked List	θ(n)	θ(n)	θ(1)	θ(1)	O(n)	O(n)	O(1)	O(1)	O(n)
Operations on Singly Linked List
There are various operations which can be performed on singly linked list. A list of all such operations is given below.

Node Creation

struct node   
{  
    int data;   
    struct node *next;  
}; 

struct node *head, *ptr;   
ptr = (struct node *)malloc(sizeof(struct node *));  


Insertion

The insertion into a singly linked list can be performed at different positions. Based on the position of the new node being inserted, the insertion is categorized into the following categories.

SN	Operation	Description
1	Insertion at beginning
It involves inserting any element at the front of the list. We just need to a few link adjustments to make the new node as the head of the list.
2	Insertion at end of the list
It involves insertion at the last of the linked list. The new node can be inserted as the only node in the list or it can be inserted as the last one. Different logics are implemented in each scenario.
3	Insertion after specified node
It involves insertion after the specified node of the linked list. We need to skip the desired number of nodes in order to reach the node after which the new node will be inserted. .
Deletion and Traversing
The Deletion of a node from a singly linked list can be performed at different positions. Based on the position of the node being deleted, the operation is categorized into the following categories.

SN	Operation	Description
1	Deletion at beginning
It involves deletion of a node from the beginning of the list. This is the simplest operation among all. It just need a few adjustments in the node pointers.
2	Deletion at the end of the list
It involves deleting the last node of the list. The list can either be empty or full. Different logic is implemented for the different scenarios.
3	Deletion after specified node
It involves deleting the node after the specified node in the list. we need to skip the desired number of nodes to reach the node after which the node will be deleted. This requires traversing through the list.
4	Traversing
In traversing, we simply visit each node of the list at least once in order to perform some specific operation on it, for example, printing data part of each node present in the list.
5	Searching
In searching, we match each element of the list with the given element. If the element is found on any of the location then location of that element is returned otherwise null is returned. .
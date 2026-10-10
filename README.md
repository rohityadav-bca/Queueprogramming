Queue Data Structures in C

A collection of queue data structure implementations in C Programming, demonstrating the working principles and operations of Linear Queue, Circular Queue, Double Ended Queue (Deque), and Priority Queue using arrays.

 About the Project

This project is developed to understand and implement different types of queues using the C programming language. It covers fundamental queue operations, array-based implementation, and the practical use of FIFO and priority-based processing.

Implementations

## Linear Queue

A linear queue follows the FIFO (First In, First Out) principle.

Operations:

Enqueue (Insert an element)

Dequeue (Delete an element)

Display queue elements

Check overflow and underflow conditions

## Circular Queue

A circular queue connects the last position of the array back to the first position, allowing efficient reuse of empty spaces.

Operations:

Enqueue (Insert an element)

Dequeue (Delete an element)

Display queue elements

Circular movement using the modulo operator (%)

## Double Ended Queue (Deque)

A deque allows insertion and deletion of elements from both the front and rear ends.

Operations:

Insert at the front

Insert at the rear

Delete from the front

Delete from the rear

Display deque elements

## Priority Queue

A priority queue processes elements according to their assigned priorities instead of strictly following FIFO order.

Operations:

Insert an element with a priority

Delete the highest-priority element

Display elements with their priorities

Handle overflow and underflow conditions

Note: The exact priority order depends on the implementation. In this project, a smaller priority number may represent a higher priority.

## Technologies Used

Programming Language: C

Data Structure: Queue

Implementation: Arrays

IDE: Visual Studio Code

Compiler: GCC

Queue-Data-Structures/
│
├── linear_queue.c
├── circular_queue.c
├── deque.c
├── priority_queue.c
└── README.md


## Author 
Rohit Yadav 
BCA 2nd year 

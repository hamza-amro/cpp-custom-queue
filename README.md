# Generic Queue Implementation in C++

A reusable and template-based Queue implementation built completely from scratch using a custom Doubly Linked List.

This project demonstrates how a Queue data structure works internally without relying on the C++ Standard Library (`std::queue`). It is designed for learning data structures, object-oriented programming, and generic programming concepts.

---

## Features

* Template-based implementation (`template<class T>`)
* Built on a custom Doubly Linked List
* FIFO (First In, First Out) behavior
* Insert elements using `push()`
* Remove elements using `pop()`
* Access the front element
* Access the back element
* Print all queue elements
* Reverse the queue
* Update elements by index
* Insert after a specific index
* Insert at the front
* Insert at the back
* Clear the queue
* Generic implementation that works with any data type

---

## Technologies Used

* C++
* Object-Oriented Programming (OOP)
* Templates
* Doubly Linked List
* Dynamic Memory Allocation
* Console Application

---

## Requirements

* C++11 or later
* Visual Studio / Visual Studio Code / Code::Blocks
* Any C++ compiler supporting templates

---

## Build and Run

1. Clone the repository

```bash
git clone https://github.com/hamza-amro/cpp-template-queue.git
```

2. Open the project using your preferred IDE.

3. Build and run the application.

---

## Example Usage

```cpp
clsMyQueue<int> queue;

queue.push(10);
queue.push(20);
queue.push(30);

queue.pop();

cout << queue.front();
cout << queue.Back();
```

---

## Queue Operations

| Function        | Description                   |
| --------------- | ----------------------------- |
| push()          | Insert an element at the back |
| pop()           | Remove the front element      |
| front()         | Return the first element      |
| Back()          | Return the last element       |
| Size()          | Number of elements            |
| Reverse()       | Reverse the queue             |
| UpdateItem()    | Update an element by index    |
| InsertAfter()   | Insert after a specific index |
| InsertAtFront() | Insert at the beginning       |
| InsertAtBack()  | Insert at the end             |
| Clear()         | Remove all elements           |

---

## Learning Objectives

This project demonstrates:

* Queue implementation from scratch
* Doubly Linked List integration
* Generic programming using templates
* Dynamic memory management
* Encapsulation
* Reusable class design

---

## Future Improvements

* Implement a destructor
* Add exception handling
* Improve boundary checking
* Add iterators
* Add copy constructor
* Add move constructor
* Add assignment operators
* Add unit tests
* Improve time complexity where applicable

---

## License

This project is licensed under the MIT License.

---

## Author

Developed by Hamza Amro.

# Data Structures and Algorithms (DSA) – Introduction

## What is DSA?

DSA stands for **Data Structures and Algorithms**.

It is one of the most important concepts in computer science and programming. DSA helps us store, organize, process, and manipulate data efficiently.

DSA mainly consists of two parts:

1. **Data Structures**
2. **Algorithms**

---

# 1. Data Structures

A **data structure** is a way of organizing and storing data in a computer so that it can be accessed and used efficiently.

For example, if we want to store the marks of 100 students, we can use an **array** instead of creating 100 separate variables.

### Examples of Data Structures

- Array
- Linked List
- Stack
- Queue
- Tree
- Graph
- Hash Table
- Heap

---

# 2. Algorithms

An **algorithm** is a step-by-step procedure used to solve a particular problem.

For example, if we want to find a number in a list, we can use:

- Linear Search
- Binary Search

An algorithm should provide a clear and finite sequence of steps to solve a problem.

---

# Why is DSA Important?

DSA is important because it helps us:

- Solve problems efficiently
- Write optimized programs
- Reduce execution time
- Use memory efficiently
- Improve logical thinking
- Understand how software works internally
- Prepare for coding interviews
- Solve competitive programming problems

---

# Classification of Data Structures

Data structures can be broadly classified into:

## 1. Primitive Data Structures

Primitive data structures are the basic data types provided by a programming language.

Examples:

- `int`
- `char`
- `float`
- `double`
- `bool`

Example:

int age = 20;
char grade = 'A';
float marks = 85.5;

## 2. Non-Primitive Data Structures

Non-primitive data structures are more advanced data structures. They are used to store and organize a collection of data.

They are mainly divided into two types:

1. **Linear Data Structures**
2. **Non-Linear Data Structures**

---

### A. Linear Data Structures

In a linear data structure, elements are arranged in a sequential or linear order.

Each element is connected to the next element in a specific sequence.

Examples:

- Array
- Linked List
- Stack
- Queue

Example:

10 → 20 → 30 → 40 → 50

---

### B. Non-Linear Data Structures

In a non-linear data structure, elements are not arranged in a sequential order.

One element can be connected to multiple other elements.

Examples:

- Tree
- Graph
- Heap
- Trie

Example:

        10
       /  \
      20   30
     / \
    40  50

## 3. Static Data Structure

A static data structure has a fixed size. Its size is decided when it is created and generally cannot be changed during execution.

Example: Array

int arr[5];

Here, the array can store only 5 elements.

## 4. Dynamic Data Structure

A dynamic data structure can change its size during program execution. Memory is allocated or released as needed.

Examples: Linked List, Dynamic Array, Tree, Graph

10 → 20 → 30
        ↓
       40

A new node can be added whenever required.

## 4. Persistent Data Structure

A persistent data structure keeps its data even after the program that created it has finished running. The data is stored permanently in secondary storage such as a hard disk, SSD, or file.

Examples: Database, File system

Program
   ↓
Data
   ↓
File / Database
   ↓
Data remains after program ends

## 5. Non-Persistent Data Structure

A non-persistent data structure stores data temporarily while the program is running. When the program ends, the data is generally lost.

Examples: Array, Stack, Queue, Linked List in RAM

Program Starts
      ↓
   Data in RAM
      ↓
Program Ends
      ↓
   Data is lost
   
## 6. Ephemeral Data Structure

An ephemeral data structure is a type of data structure where modifying the structure changes the existing version, and the old version is not preserved.

In simple words: only the latest version is maintained.

Example: Normal array

Before:
[10, 20, 30]

Change 20 → 50

After:
[10, 50, 30]

The old [10, 20, 30] version is not kept.
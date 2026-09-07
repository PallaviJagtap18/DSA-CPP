# Arrays — Theory

## What is an Array?
An array is a linear data structure that stores a collection of elements of the **same data type** in **contiguous memory locations**. Each element can be accessed directly using an index.

## Key Characteristics
- **Fixed size** (in most languages like C/C++/Java) — size is defined at declaration time.

- **Homogeneous elements** — all elements are of the same type.

- **Contiguous memory allocation** — elements are stored right next to each other in memory.

- **Indexed access** — elements are accessed using an index, typically starting from `0` (zero-based indexing).

## Why Arrays?
Before arrays, if you wanted to store multiple values, you'd need separate variables (`a1, a2, a3...`). Arrays solve this by letting you store multiple values under a single name, accessed via index.

## Memory Representation
If an array `arr` starts at base address `B`, and each element takes `S` bytes, the address of the `i`-th element is:
```
Address(arr[i]) = B + (i * S)
```
This formula is *why* array access is O(1) — no traversal needed, just a direct calculation.

## Types of Arrays
1. **One-Dimensional (1D) Array** — a simple linear list of elements.

2. **Two-Dimensional (2D) Array** — array of arrays, like a matrix/grid (rows and columns).

3. **Multi-Dimensional Array** — extends further to 3D, 4D, etc.

## Basic Operations & Their Time Complexity

| Operation             | Description                                   | Time Complexity 
|---                    |---                                            |---
| Access                | Get element at index `i`                      | O(1) 
| Search                | Find an element (unsorted)                    | O(n) 
| Search                | Find an element (sorted, binary search)       | O(log n) 
| Insertion             | At the end                                    | O(1) (amortized, if space available) 
| Insertion             | At beginning/middle                           | O(n) (shifting required) 
| Deletion              | At the end                                    | O(1) 
| Deletion              | At beginning/middle                           | O(n) (shifting required) 
| Traversal             | Visit every element                           | O(n) 

## Advantages
- Fast access via index — O(1).

- Simple and easy to use.

- Memory efficient (no extra pointers like linked lists).

- Good cache locality (contiguous memory → faster access due to CPU caching).

## Disadvantages
- Fixed size (static arrays) — can't grow/shrink dynamically.

- Insertion/deletion is costly (needs shifting of elements).

- Wasted memory if allocated size > actual usage.

## Static vs Dynamic Arrays
- **Static Array**: Size fixed at compile time (e.g., `int arr[10]` in C).

- **Dynamic Array**: Size can grow at runtime (e.g., `ArrayList` in Java, `vector` in C++, list in Python). Internally, when full, it typically **doubles its size** and copies elements to a new memory block — this is why dynamic array insertion is **O(1) amortized**.

## Real-World Use Cases
- Storing lists of records (e.g., student marks, employee data).
- Implementing other data structures (stacks, queues, heaps, hash tables).
- Matrix operations, image processing (2D arrays).
- Lookup tables for fast access.

---
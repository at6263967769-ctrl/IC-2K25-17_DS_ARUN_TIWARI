# 📚 IC-2K25-17 — Data Structures & Algorithms Lab (C / C++)

[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B17-blue.svg?logo=cplusplus)](https://isocpp.org/)
[![Language: C](https://img.shields.io/badge/Language-C99%2FC11-00599C.svg?logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Course: DS Lab](https://img.shields.io/badge/Course-Data%20Structures%20Lab-orange.svg)](#)
[![Student: Arun Tiwari](https://img.shields.io/badge/Developer-Arun%20Tiwari-success.svg?logo=github)](https://github.com/at6263967769-ctrl)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

A curated collection of **Data Structures and Algorithms** implementations in **C and C++**, developed as part of the academic curriculum coursework (`IC-2K25-17`).

This repository contains comprehensive lab assignments, multi-dimensional array operations, multi-stack memory partitioning, queue architectures (linear, circular, fixed-front), singly linked lists, sparse matrices, and algorithmic problem-solving practicals.

---

## 👨‍💻 Student & Course Profile

| Parameter | Details |
| :--- | :--- |
| **Student Name** | **Arun Tiwari** |
| **Roll / Enrollment No.** | `IC-2K25-17` |
| **Subject** | Data Structures & Algorithms (Lab Practicals & Theory) |
| **Primary Languages** | C (`gcc`) & C++ (`g++`, C++17 standard) |
| **Repository** | [IC-2K25-17_DS_ARUN_TIWARI](https://github.com/at6263967769-ctrl/IC-2K25-17_DS_ARUN_TIWARI) |

---

## 🌟 Key Highlights of This Repository

- **Multi-Stack Memory Partitioning:** Advanced implementations dividing a single contiguous 1D array to manage **2, 4, 5, 6, 7, and 8 independent stacks** with overflow/underflow boundary protection.
- **Queue Variants & Architectures:** Implementations of traditional Linear Queue, Circular Queue (modular arithmetic), Fixed-Front Queue (element shifting on dequeue), and Non-Fixed Front Queue.
- **Matrix & Sparse Matrix Operations:** 2D/3D array manipulation, matrix summation, transpose, diagonal access, and memory-efficient 3-tuple / triplet sparse matrix compression.
- **Dynamic & Linked Structures:** Dynamic array allocation (`new`/`delete`), class-based dynamic stacks, and Singly Linked List operations (head/tail insertion, traversal, search, deletion).
- **Algorithmic Problem Solving:** Stack-based Valid Parentheses checking ($O(n)$ time/space), decimal-to-binary/octal conversions, linear search, and recursion.

---

## 📂 Repository Structure & Topic Breakdown

```plaintext
IC-2K25-17_DS_ARUN_TIWARI/
│
├── 📁 Lab_Unit_1/                           # Unit 1: Arrays & Matrix Computation
│   ├── 01_1D_Array_Operations.c             # Comprehensive 1D array operations in C
│   ├── Program_2( 2D_array_operation )      # 2D array operations (matrix arithmetic)
│   ├── program_3( sparse matrix).cpp        # Sparse matrix 3-tuple conversion in C++
│   ├── matrix calculation.cpp               # Interactive matrix calculator (sum, product, transpose, det)
│   └── README.md                            # Unit 1 lab summary
│
├── 📁 Lab_unit_4/                           # Unit 4: Stack Implementations
│   ├── program 1.cpp                        # Dynamic stack using C++ classes and pointers
│   ├── program_2.cpp                        # Stack implementation without explicit top pointer
│   └── problem_3.cpp                        # Two stacks growing toward each other in a single array
│
├── 📁 Lab_Unit_5/                           # Unit 5: Queue Architectures
│   ├── program_1(Queue).cpp                 # Standard linear queue implementation
│   ├── Program_2 (circule_queue)).cpp       # Circular queue using modular arithmetic
│   ├── Program_3(fixed_front).cpp           # Fixed-front queue (shifts elements upon dequeue)
│   └── problem_4Normal Linear Queue...cpp   # Normal linear queue with moving front & rear
│
├── 📁 Lab_unit_6_linkedlist/                # Unit 6: Linked Lists
│   └── problem_1.cpp                        # Singly Linked List (insert at head/tail, delete, display)
│
├── 🧱 Multi-Stack Implementations (Single Array Partitioning)
│   ├── 2Stack_in_array. Cpp                 # 2 stacks in a single array
│   ├── LAB_7_DS_4 STACK _IN _ARRAY.CPP      # 4 stacks in a single array
│   ├── lab_7_5stack_in_single_array.c       # 5 stacks in a single array (C)
│   ├── 6_stack_in_one_array.cpp             # 6 stacks in a single array (C++)
│   ├── 7_stack_in_one_array.c               # 7 stacks in a single array (C)
│   └── 8_stack_in_single_array.c            # 8 stacks in a single array (C)
│
├── 📊 Stacks & Applications
│   ├── Array_Stack_Basic_Operations.c       # Core stack operations (push, pop, peek, display)
│   ├── Stack_implementation_in_single_array.c # Single array stack in C
│   ├── Single_stack. Cpp                    # Object-oriented single stack in C++
│   ├── basicstack.cpp / stack.cpp           # Fundamental stack routines
│   ├── alphabet_stack.cpp                   # Character / alphabet stack
│   ├── Stack_using_2D_Character_Array.cpp   # Multi-word stack using 2D character arrays
│   ├── valid_parentheses.cpp                # Balanced bracket matching (LeetCode #20 style)
│   └── number_system_convertion.cpp         # Decimal to Binary and Decimal to Octal conversion
│
├── 🔁 Queues & Lab Practicals
│   ├── Queue.cpp / basicqueue.cpp           # Basic queue data structures
│   ├── lab_2_operations_queue.cpp           # Lab practical on queue operations
│   ├── lab_8_queue_first_program.cpp        # Lab 8 initial queue routines
│   ├── lab-9-Queue_Implementation_Using_Array.cpp # Lab 9 array-based queue
│   └── lab_online_queue_implementation.cpp  # Online queue lab practical
│
├── 🧮 Arrays, Matrices & Linear Search
│   ├── 1D_Array / print_1D_Array            # 1D array input, manipulation, and printing
│   ├── 2D_Array / 3D_array.cpp              # Multi-dimensional array structures
│   ├── 3D_array_example.cpp / Sum_of_3D.cpp # 3D array tensor summation and traversal
│   ├── Dynamic_Array.cpp                    # Dynamic memory allocation for arrays
│   ├── traditional_array.cpp                # Traditional C arrays vs C++ STL vectors
│   ├── 2Dmatrixsum.cpp / matrixsum.cpp      # Matrix element summation
│   ├── addition_of_two_matrices             # Matrix addition logic
│   ├── Transpose.cpp / Digonal_array.cpp    # Matrix transpose and diagonal extraction
│   ├── sum_of_row_in_an_array.cpp           # Row-wise matrix summation
│   ├── Sparse_Matrix.cpp / sparse_matrix.c  # Triplet representation of sparse matrices
│   ├── sparsematrix.cpp                     # Alternate sparse matrix implementation
│   ├── linear_search.cpp                    # Linear search algorithm
│   ├── even_or_odd_in_array.cpp             # Array element parity filtering
│   ├── all_array_element_sum.cpp / Sum.cpp  # Total summation of array elements
│   ├── order_in_array.cpp                   # Element order validation
│   ├── Random_Number_Array_Generator.cpp    # Dynamic random array generation
│   └── Array_find_maximum_value...cpp       # Max element search using range-based loops
│
└── 🔗 Linked Lists & Recursion
    ├── linkedlist.cpp                       # Singly linked list with full operations
    ├── Recursion_ in _C++                   # Foundational recursion concepts
    └── DSA_FIRST_LAB.cpp                    # Introductory data structures lab
```

---

## ⏱️ Asymptotic Complexity Matrix

| Data Structure / Operation | Time (Access / Search) | Time (Insertion) | Time (Deletion) | Space Complexity |
| :--- | :---: | :---: | :---: | :---: |
| **1D Array** | $O(1)$ / $O(n)$ | $O(n)$ | $O(n)$ | $O(n)$ |
| **2D / 3D Array** | $O(1)$ / $O(r \times c)$ | $O(r \times c)$ | $O(r \times c)$ | $O(n)$ |
| **Sparse Matrix (Triplet)** | $O(\text{non-zero})$ | $O(\text{non-zero})$ | $O(\text{non-zero})$ | $O(3 \times \text{non-zero})$ |
| **Single Stack (Array)** | $O(n)$ / $O(1)$ top | $O(1)$ (push) | $O(1)$ (pop) | $O(n)$ |
| **Multi-Stack (Partitioned)**| $O(n)$ / $O(1)$ top | $O(1)$ (push) | $O(1)$ (pop) | $O(n)$ |
| **Linear Queue (Fixed Front)** | $O(1)$ front | $O(1)$ (enqueue) | $O(n)$ (dequeue + shift) | $O(n)$ |
| **Linear Queue (Moving Front)**| $O(1)$ front | $O(1)$ (enqueue) | $O(1)$ (dequeue) | $O(n)$ |
| **Circular Queue** | $O(1)$ front | $O(1)$ (enqueue) | $O(1)$ (dequeue) | $O(n)$ |
| **Singly Linked List** | $O(n)$ | $O(1)$ (head) / $O(n)$ (tail) | $O(1)$ (head) / $O(n)$ (tail) | $O(n)$ |
| **Linear Search** | $O(n)$ | — | — | $O(1)$ |
| **Valid Parentheses (Stack)** | $O(n)$ | $O(1)$ per char | $O(1)$ per char | $O(n)$ |
| **Base Conversion (Stack/Array)** | $O(\log_b n)$ | $O(1)$ per digit | $O(1)$ per digit | $O(\log_b n)$ |

---

## 🛠️ How to Compile & Run

### Prerequisites
- **GCC / G++** (v9.0 or higher) or **Clang** / **MSVC**
- Any terminal or shell (PowerShell, Bash, Command Prompt)

Check your installed compiler:
```bash
g++ --version
gcc --version
```

### 1. Clone the Repository
```bash
git clone https://github.com/at6263967769-ctrl/IC-2K25-17_DS_ARUN_TIWARI.git
cd IC-2K25-17_DS_ARUN_TIWARI
```

### 2. Compilation Examples

#### Compiling C Programs (e.g., 7 Stacks in 1 Array or Sparse Matrix):
```bash
gcc -std=c11 -Wall "7_stack_in_one_array.c" -o 7_stack_in_one_array
./7_stack_in_one_array
```

#### Compiling C++ Programs (e.g., Circular Queue or Linked List):
```bash
# Linked List
g++ -std=c++17 -Wall "linkedlist.cpp" -o linkedlist
./linkedlist

# Circular Queue (Lab Unit 5)
g++ -std=c++17 -Wall "Lab_Unit_5/Program_2 (circule_queue)).cpp" -o circular_queue
./circular_queue

# Dynamic Stack (Lab Unit 4)
g++ -std=c++17 -Wall "Lab_unit_4/program 1.cpp" -o dynamic_stack
./dynamic_stack

# Valid Parentheses
g++ -std=c++17 -Wall "valid_parentheses.cpp" -o valid_parentheses
./valid_parentheses
```

---

## 💡 Key Design & Implementation Concepts

### 1. Multi-Stack in Single Array Partitioning
To avoid dynamic allocations when multiple independent stacks are needed, the array is partitioned into segments:
- **Boundary Formulation:** Each stack $i$ is assigned a lower bound $b_i$ and an upper bound $b_{i+1}$.
- **Overflow Condition:** `top_i + 1 == boundary_{i+1}`
- **Underflow Condition:** `top_i == boundary_i`
- Implemented for 2, 4, 5, 6, 7, and 8 stacks within the repository.

### 2. Circular Queue Optimization
Standard linear queues suffer from the "false overflow" problem where memory cannot be reused after dequeuing. The circular queue solves this using modular arithmetic:
$$\text{rear} = (\text{rear} + 1) \pmod{\text{capacity}}$$
$$\text{front} = (\text{front} + 1) \pmod{\text{capacity}}$$

### 3. Sparse Matrix Triplet Representation
Matrices with a high percentage of zero entries are compressed into a 3-column table:
$$\langle \text{Row},\; \text{Column},\; \text{Value} \rangle$$
This reduces memory consumption from $O(\text{rows} \times \text{cols})$ down to $O(3 \times \text{non-zero})$.

---

## 👤 Author & Connect

- **Author:** Arun Tiwari
- **GitHub:** [@at6263967769-ctrl](https://github.com/at6263967769-ctrl)
- **LinkedIn:** [Arun Tiwari](https://www.linkedin.com/in/arun-tiwari-3344b1375)
- **LeetCode:** [Arun_Tiwari2007](https://leetcode.com/u/Arun_Tiwari2007/)
- **GeeksforGeeks:** [at62639k0kp](https://www.geeksforgeeks.org/profile/at62639k0kp)
- **HackerRank:** [at6263967769](https://www.hackerrank.com/profile/at6263967769)

---

## 📜 License

This project is open-source and available under the [MIT License](LICENSE).

# Understanding Pairs and Vectors in C++

This document explains **Pairs** and **Vectors** in C++ with simple examples and detailed explanations.

---

## Table of Contents
1. [Introduction to Pairs](#introduction-to-pairs)
2. [Introduction to Vectors](#introduction-to-vectors)
3. [Detailed Code Explanation](#detailed-code-explanation)
    - [Using Pairs](#using-pairs)
    - [Using Vectors](#using-vectors)
4. [How to Run the Code](#how-to-run-the-code)
5. [Expected Output](#expected-output)

---

## Introduction to Pairs

- **Pairs** are a data structure in C++ used to store two related values together.
- Think of it as a container that holds two items, which could be of different data types.
- Common Use Cases:
  - Representing coordinates, e.g., `(x, y)`.
  - Storing key-value pairs, e.g., `(roll_number, marks)`.

### Syntax:
```cpp
pair<T1, T2> p;
```
- `T1` and `T2` are the data types of the two values.

---

## Introduction to Vectors

- **Vectors** are dynamic arrays in C++.
- They can grow or shrink in size during runtime.
- Vectors come with powerful built-in functions for adding, removing, and manipulating elements.

### Syntax:
```cpp
vector<T> v;
```
- `T` is the data type of the elements stored in the vector.

---

## Detailed Code Explanation

Below are the detailed explanations of **Pairs** and **Vectors** with examples.

### Using Pairs

#### 1. Simple Pair
```cpp
pair<int, int> p1 = {1, 2};
cout << p1.first << " " << p1.second;  // Outputs: 1 2
```
- **Explanation**:
  - `p1` stores two integers: `1` and `2`.
  - Use `.first` to access the first value and `.second` to access the second value.

#### 2. Nested Pair
```cpp
pair<int, pair<int, int>> p2 = {1, {3, 4}};
cout << p2.first << " " << p2.second.first << " " << p2.second.second;
// Outputs: 1 3 4
```
- **Explanation**:
  - `p2` is a pair that contains another pair inside it.
  - Access nested values using `.first` and `.second`.

#### 3. Array of Pairs
```cpp
pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
cout << arr[0].first << " " << arr[1].second << " " << arr[2].first;
// Outputs: 1 4 5
```
- **Explanation**:
  - An array of pairs allows you to store multiple pairs and access them like normal array elements.

---

### Using Vectors

#### 1. Adding Elements
```cpp
vector<int> v;
v.push_back(1);  // Adds 1 to the vector
v.emplace_back(2);  // Adds 2 to the vector (faster in some cases)
```
- **Explanation**:
  - Use `.push_back()` or `.emplace_back()` to add elements to the vector.

#### 2. Vector of Pairs
```cpp
vector<pair<int, int>> vec;
vec.push_back({1, 2});  // Adds (1, 2) to the vector
vec.emplace_back(3, 4);  // Adds (3, 4) to the vector
```
- **Explanation**:
  - You can store pairs inside vectors for more complex data structures.

#### 3. Predefined Size
```cpp
vector<int> v100(5, 100);  // Creates a vector: [100, 100, 100, 100, 100]
vector<int> v0(5);  // Creates a vector: [0, 0, 0, 0, 0]
```
- **Explanation**:
  - `v100` creates a vector with 5 elements, all initialized to `100`.
  - `v0` creates a vector with 5 default-initialized elements (0 for integers).

#### 4. Copying Vectors
```cpp
vector<int> v1(5, 20);  // [20, 20, 20, 20, 20]
vector<int> v2(v1);  // v2 is a copy of v1
```
- **Explanation**:
  - You can create a copy of an existing vector using its constructor.

#### 5. Using Iterators
```cpp
vector<int>::iterator it = v1.begin();  // Points to the first element
it++;  // Moves to the next element
cout << *(it);  // Outputs: 20
```
- **Explanation**:
  - Iterators act like pointers to the elements in the vector.
  - Use `*it` to access the value at the iterator’s position.

---

## How to Run the Code

### Step 1: Save the Code
Save the following code into a file named `main.cpp`:
```cpp
#include <bits/stdc++.h>
using namespace std;

void explanPair() {
    pair<int, int> p1 = {1, 2};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first << " " << arr[1].second << " " << arr[2].first << endl;
}

void explanVector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    vector<int> v100(5, 100);
    vector<int> v0(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);

    vector<int>::iterator it = v1.begin();
    it++;
    cout << *(it) << " ";
}

int main() {
    explanPair();
    explanVector();
    return 0;
}
```

### Step 2: Compile the Code
Run the following command to compile the code:
```bash
g++ main.cpp -o main
```

### Step 3: Execute the Program
Run the compiled program:
```bash
./main
```

---

## Expected Output

When you run the program, you will see the following output:
```
1 2
1 3 4
1 4 5
20
```

---

Happy coding! 🎉


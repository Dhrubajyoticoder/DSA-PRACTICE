﻿# DSA-PRACTICE
# Understanding Pairs and Vectors in C++

This document explains how **Pairs** and **Vectors** work in C++ with simple examples.

---

## Table of Contents
1. [What are Pairs?](#what-are-pairs)
2. [What are Vectors?](#what-are-vectors)
3. [Code Explanation](#code-explanation)
    - [Pairs](#pairs)
    - [Vectors](#vectors)
4. [How to Run the Code](#how-to-run-the-code)

---

## What are Pairs?

- **Pairs** are a way to store two values together in a single object.
- You can think of it as a mini-container that holds two items of potentially different types.
- Examples:
  - A pair could represent coordinates: `(x, y)`.
  - It can also store related information like `(roll_number, marks)`.

---

## What are Vectors?

- **Vectors** are dynamic arrays in C++.
- Unlike normal arrays:
  - Their size can grow or shrink at runtime.
  - They have many helpful functions for adding, removing, or accessing elements.

---

## Code Explanation

### Pairs

Here's how pairs work in the code:

1. **Simple Pair**: 
   ```cpp
   pair<int, int> p1 = {1, 2};
   cout << p1.first << " " << p1.second;  // Outputs: 1 2

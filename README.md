# Project ALSDS 2024

## Overview

Project ALSDS 2024 is an academic project aimed at developing a comprehensive C library that includes various data processing functions. The library consists of modules for handling numbers, strings, arrays, and matrices. This project is part of the "Algorithms and Static Data Structures" course for first-year students at the National School of Cyber Security.

## Project Objectives

- Strengthen students' algorithmic thinking and C programming skills.
- Provide practical experience with modularity, code reuse, and function implementation.
- Enhance understanding of complex data manipulations, including numerical analysis, string handling, array sorting/searching, and matrix computations.

## Features

The project is divided into four primary modules:

### 1. Operations on Numbers

- Basic operations: Sum of digits, reverse number, prime check, GCD, LCM, factorial, etc.
- Intermediate operations: Prime factorization, Armstrong numbers, Fibonacci sequence, perfect numbers, etc.
- Advanced operations: Binary conversion, exponentiation, Kaprekar number check, sum of prime numbers, etc.

### 2. Operations on Strings

- Basic functions: String length, copy, concatenation, comparison, uppercase/lowercase conversion, etc.
- Intermediate functions: Palindrome check, anagram detection, word counting, substring search, etc.
- Advanced functions: String compression, longest palindrome, string permutations, etc.

### 3. Operations on Arrays

- Basic functions: Find max/min, calculate sum/average, check if sorted, etc.
- Sorting algorithms: Bubble sort, selection sort, quick sort, merge sort, etc.
- Advanced operations: Binary search, remove duplicates, subarray sum detection, etc.

### 4. Operations on Matrices

- Basic functions: Matrix initialization, printing, input handling.
- Matrix arithmetic: Addition, subtraction, multiplication, scalar operations.
- Matrix properties: Identity check, symmetry check, upper triangular check.
- Advanced functions: Determinant, inverse, LU decomposition, eigenvalues estimation.

## Project Files

The project consists of four main C files:

- **`number.c`** – Functions for numerical operations such as sum of digits, prime checks, factorial, Fibonacci, and advanced number classifications.
- **`string.c`** – String manipulation functions including length, copy, concatenation, palindrome check, and encoding methods.
- **`arrray.c`** – Array operations such as sorting, searching, frequency analysis, and set operations.
- **`matrix.c`** – Matrix operations including addition, multiplication, determinant computation, and matrix transformations.

## Compilation and Usage

1. Clone the repository:
   ```sh
   git clone <repository_url>
   ```
2. Navigate to the project directory:
   ```sh
   cd ALSDS_Project
   ```
3. Compile the files separately or together:
   ```sh
   gcc -c number.c string.c arrray.c matrix.c
   gcc -o main main.c number.o string.o arrray.o matrix.o -Wall
   ```
4. Run the test suite:
   ```sh
   ./main
   ```

## Deliverables

- A complete C library (`.c` and `.h` files) containing all implemented functions.
- A test suite with sample programs to demonstrate the use of each function.
- A detailed report including:
  - Project objectives and problem statement.
  - Analysis and algorithm design for each function.
  - Implementation details and code snippets.

## Evaluation Criteria

- **Correctness:** The library must perform all specified operations correctly.
- **Modularity:** Functions should be well-structured and reusable.
- **Documentation:** Code comments and a structured project report are required.


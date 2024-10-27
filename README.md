# Push_swap

A C program that sorts data on a stack, with a limited set of instructions, using the lowest possible number of actions.

## 🎯 The Goal

The main goal is to sort a randomly organized stack of numbers in ascending order using two stacks (stack A and stack B) and a limited set of operations, while minimizing the number of operations used.

## 💡 Learning Objectives

- Understanding and implementing sorting algorithms
- Algorithm optimization and complexity analysis
- Stack data structure manipulation
- Performance analysis and optimization
- Working with linked lists in C
- Memory management in C

## 📝 Rules

### Allowed Operations

- `sa` (swap a): Swap the first 2 elements at the top of stack a
- `sb` (swap b): Swap the first 2 elements at the top of stack b
- `ss`: Execute `sa` and `sb` simultaneously
- `pa` (push a): Take the first element at the top of b and put it at the top of a
- `pb` (push b): Take the first element at the top of a and put it at the top of b
- `ra` (rotate a): Shift up all elements of stack a by 1
- `rb` (rotate b): Shift up all elements of stack b by 1
- `rr`: Execute `ra` and `rb` simultaneously
- `rra` (reverse rotate a): Shift down all elements of stack a by 1
- `rrb` (reverse rotate b): Shift down all elements of stack b by 1
- `rrr`: Execute `rra` and `rrb` simultaneously

## 🛠️ Implementation Details

### Data Structures

The project uses a doubly-linked list implementation for both stacks, allowing efficient navigation in both directions. The main structure includes:

- Stack A: The initial stack containing the numbers to be sorted
- Stack B: An auxiliary stack used for sorting operations
- Various helper functions for stack manipulation and sorting operations

### Algorithm

The program implements different sorting strategies based on the input size:
- For 2-3 numbers: Direct comparison and swap
- For 4-5 numbers: Optimized small-set sorting algorithm
- For larger sets: Radix sort implementation

### Error Handling

The program includes comprehensive error checking for:
- Invalid inputs (non-numeric values, duplicates)
- Integer overflow
- Memory allocation failures

## ⚙️ Usage

```bash
# Compile the program
make

# Run with numbers to sort
./push_swap 2 1 3 6 5 8

# Check if the solution is valid (using the checker program)
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG
```

## 📋 Code Standards

This project follows the strict coding standards enforced by 42 School's Norm. These standards ensure consistent and clean code but may restrict certain modern C programming practices. The code is written to meet these specific requirements, which include:

- Specific function formatting
- Limited number of functions per file
- Limited line length and function length
- Specific variable declaration rules
- Restricted use of certain control structures

## 🔍 Testing

The program can be tested using:
- Random number generators
- The provided checker program
- Various edge cases (sorted lists, reverse sorted, etc.)

## 📊 Performance

The program's performance is evaluated based on the number of operations needed to sort different stack sizes:
- 3 numbers: ≤ 3 operations
- 5 numbers: ≤ 12 operations
- 100 numbers: optimized for efficiency
- 500 numbers: optimized for efficiency

## 🧹 Memory Management

The project implements careful memory management, ensuring all allocated memory is properly freed, with no memory leaks.

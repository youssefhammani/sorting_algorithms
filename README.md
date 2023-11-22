# Sorting Algorithms Project

This project implements four different sorting algorithms in the C programming language. The algorithms included are Bubble Sort, Insertion Sort, Selection Sort, and Quick Sort. Each algorithm is designed to sort an array or a doubly linked list in ascending order.

## Table of Contents

- [Background](#background)
- [Learning Objectives](#learning-objectives)
- [Project Structure](#project-structure)
- [How to Use](#how-to-use)
- [File Descriptions](#file-descriptions)
- [Requirements](#requirements)
- [Contributors](#contributors)
- [License](#license)

## Background

This project is part of a team assignment for sorting algorithms and Big O notation. The goal is to implement and understand the workings of four different sorting algorithms while adhering to coding standards and best practices.

## Learning Objectives

Upon completion of this project, participants are expected to:

- Implement four different sorting algorithms: Bubble Sort, Insertion Sort, Selection Sort, and Quick Sort.
- Understand and explain the concept of Big O notation.
- Evaluate the time complexity of each sorting algorithm in best, average, and worst cases.
- Follow coding standards, including the Betty style.

## Project Structure

The project is organized into separate files for each sorting algorithm. The main files are:

- `0-bubble_sort.c`: Implementation of Bubble Sort.
- `1-insertion_sort_list.c`: Implementation of Insertion Sort for doubly linked lists.
- `2-selection_sort.c`: Implementation of Selection Sort.
- `3-quick_sort.c`: Implementation of Quick Sort using the Lomuto partition scheme.

Additional files include the `print_array.c` and `print_list.c` files, providing functions for printing arrays and doubly linked lists, respectively.

## How to Use

To test the sorting algorithms, you can use the provided test files (`0-main.c`, `1-main.c`, `2-main.c`, `3-main.c`). Compile the code using the provided compilation command and run the executable.

Example:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
./bubble


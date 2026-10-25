# Project 1: Programs Collection (Python)

A small collection of three classic programs in one C++ file: factorial, Fibonacci, and a structure-to-dictionary conversion.

## Description
The program asks for a number to compute its factorial, asks how many Fibonacci numbers to print, and then converts a `Student` struct into a `std::map` (C++'s version of a Python dictionary) and prints each key and value.

## Technologies
- C++17
- Standard library: `iostream`, `vector`, `map`, `string`

## Features
- Factorial for 0 to 20 (the limit that fits in `unsigned long long`)
- Fibonacci sequence of up to 50 numbers
- Struct-to-map conversion (name, age, course)
- Input validation with clear error messages

## Setup and Run
```
g++ -std=c++17 project1_programs_collection.cpp -o programs
./programs
```
On a Mac, if `g++` is not found, install the command line tools when prompted.

## Example
```
Enter a number (0-20) for factorial: 5
5! = 120

How many Fibonacci numbers (1-50)? 10
0 1 1 2 3 5 8 13 21 34

Struct converted to dictionary (map):
  age: 20
  course: Computer Science
  name: Prathvi Singh
```

## Notes
- A `std::map` prints its keys in alphabetical order, so the output order differs from the order the keys were added.
- The sample student details are example data. Replace them with your own if you wish.

## Author
Prathvi Singh

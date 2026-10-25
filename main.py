"""Project 1: Programs Collection
Contains: Factorial, Fibonacci, and Structure-to-Dictionary conversion.
"""
from dataclasses import dataclass, asdict


def factorial(n):
    """Return n! for a non-negative whole number n."""
    if n < 0:
        raise ValueError("Factorial is not defined for negative numbers.")
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result


def fibonacci(count):
    """Return the first `count` Fibonacci numbers as a list."""
    sequence = []
    a, b = 0, 1
    for _ in range(count):
        sequence.append(a)
        a, b = b, a + b
    return sequence


@dataclass
class Student:
    name: str
    age: int
    course: str


def struct_to_dict(student):
    """Convert a Student (structure) into a dictionary."""
    return asdict(student)


def ask_int(prompt, low, high):
    """Ask until the user enters a whole number between low and high."""
    while True:
        try:
            value = int(input(prompt))
            if low <= value <= high:
                return value
        except ValueError:
            pass
        print(f"Please enter a whole number between {low} and {high}.")


def main():
    n = ask_int("Enter a number (0-100) for factorial: ", 0, 100)
    print(f"{n}! = {factorial(n)}\n")

    count = ask_int("How many Fibonacci numbers (1-50)? ", 1, 50)
    print(" ".join(str(x) for x in fibonacci(count)), "\n")

    student = Student("Prathvi Singh", 20, "Computer Science")
    print("Structure converted to dictionary:")
    for key, value in struct_to_dict(student).items():
        print(f"  {key}: {value}")


if __name__ == "__main__":
    main()

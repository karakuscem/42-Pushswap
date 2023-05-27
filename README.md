# Push-Swap

This is a solution for the Push_Swap project from 42 schools, which involves creating sorting algorithm. The objective of the project is sorting numbers using two stacks with pre-defined functions as effective as possible.

# About the Project

Push-Swap is a sorting algorithm based on two stacks that aims to sort a given array of numbers. As part of this project, I have written a C program that can sort a given array of numbers using the Butterfly Sorting algorithm.

# About Butterfly Sort

The Butterfly Sorting algorithm is an algorithm that relies on two stacks and uses "butterfly" transformations to compare and sort numbers. Operations performed on the two stacks allow for comparisons between numbers and perform the sorting.

# Getting Started

To get started with this project, you can follow these steps:

Clone the repository:

```
git clone https://github.com/karakuscem/42-push_swap.git
```

Navigate to the project directory:

```
cd 42-push-swap
```

Compile the program:

```
make
```

Run the program with a list of numbers to be sorted:

```
./push_swap 5 2 1 3 4
```

The program will output a series of operations that sort the given numbers.

# Bonus Part

I also did the bonus part which requires to create a checker similar to original checker which is given at project page.

To get started with checker, you should compile the checker.

```
make bonus
```

Using checker with push_swap program;

```
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
```

To use checker without push_swap program, you should give numbers to checker

```
./checker 5 1 3 2 8
```

After that you should enter the all moves to be executed

```
ra
pb
ra
pb
sa
rra
pa
pa
```

Then you should use Ctrl+D (or control+D for MacOS) to execute.

If stack is sorted with given moves checker displays "OK" else it displays "KO".

# Assignment01-GitHub-Basics

Assignment 01 - Getting started with GitHub

# Sum of the First 50 Natural Numbers

A simple C++ program that calculates the sum of the natural numbers from 1 to 50 and verifies the result using the arithmetic series formula. Written for Programming Fundamentals (Assignment 01: Getting Started with GitHub).

## Description

The program computes the sum in two ways:

1. **Loop method:** adds the numbers 1 through 50 using a `for` loop.
2. **Formula method:** uses the arithmetic series formula:

```
sum = n × (n + 1) / 2
```

For n = 50:

```
50 × 51 / 2 = 1275
```

Both methods give the same result.

## Output

```
sum: 1275
formula sum: 1275
```

## How It Works

1. Set `n = 50` and initialize `sum = 0`.
2. Loop from `i = 1` to `i = n`, adding each value of `i` to `sum`.
3. Print the loop result.
4. Calculate `n * (n + 1) / 2` and print it to verify the answer.

## How to Run

Make sure a C++ compiler such as `g++` is installed, then run:

```bash
g++ sum_of_first_50_natural_numbers.cpp -o sum
./sum
```

On Windows PowerShell, run the program with `.\sum.exe` instead of `./sum`.

## Files

| File                                  | Description                 |
| ------------------------------------- | --------------------------- |
| `sum_of_first_50_natural_numbers.cpp` | Source code for the program |
| `README.md`                           | Project documentation       |

## Author

- **Name:** Umber Fatimi
- **Registration No:** L1S26BSCS0126
- **Course:** PF-Theory, Semester 2, UCP

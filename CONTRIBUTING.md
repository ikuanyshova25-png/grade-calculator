# Coding Rules

These are the C++ rules I follow in this project.

## 1. Variable names use camelCase
Start with a lowercase letter, and start each next word with a capital letter.
```cpp
int studentCount = 0;
double classAverage = 0.0;
```

## 2. Names must be meaningful
A name must say what the variable stores. Do not use one-letter names, except for loop counters.
```cpp
// Good
int scoreSum = 0;
// Bad
int s = 0;
```

## 3. Indent with 4 spaces
Every code block inside { } is moved 4 spaces to the right.
```cpp
if (score < 0 || score > 100) {
    cout << "Invalid score";
}
```

## 4. One statement per line
Do not write several statements on one line.
```cpp
// Good
int count = 0;
int total = 0;
// Bad
int count = 0; int total = 0;
```

## 5. Comment every block of logic
Write a short comment above each loop and each group of conditions.
```cpp
// Read 5 scores for one student
for (int i = 1; i <= 5; i++) {
    ...
}
```

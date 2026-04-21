# Looping Statements in C++

This document explains **while loop** and **do-while loop** separately with definition, syntax, working, and example.

---

## 1. while Loop

### Definition  
The **while loop** is an **entry-controlled loop**.  
The condition is checked **before** executing the loop body.  
If the condition is false at the beginning, the loop will **not execute even once**.

### Syntax
```cpp
while (condition) {
    // statements
}

## 2. do-while Loop

### Definition  
The **do-while loop** is an **exit-controlled loop**.  
The condition is checked **after** executing the loop body.  
Therefore, the loop will **execute at least once**, even if the condition is false initially.

### Syntax
```cpp
do {
    // statements
} while (condition);
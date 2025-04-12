# 📀 Infix to Postfix Converter in C++

This project is a simple and classic implementation of an **Infix to Postfix converter** using a **stack** in C++. It is one of the most well-known practice problems in computer science, often used to understand and apply the **stack data structure** for parsing expressions.

---

## 📘 What is Infix and Postfix?

### ➕ Infix Notation

Infix is the way we usually write math expressions — **operators between operands**.

#### ✅ Example:
```
A + B
3 + 5
```

---

### 🔁 Postfix Notation (Reverse Polish Notation)

In postfix, **operators come after the operands** — no parentheses needed!

#### ✅ Example:
```
A B +
3 5 +
```

---

### 🧠 Another Example:

#### Infix:
```
(3 + 4) * 5
```

#### Postfix:
```
3 4 + 5 *
```

---

## 🔧 Features

- ✅ Implemented in **C++**
- ✅ Supports operators: `+`, `-`, `*`, `/`, `^`
- ✅ Handles parentheses correctly
- ✅ Ignores spaces
- ✅ Accepts letters or single-digit numbers as operands

---

## 🧪 Example

### 📝 Input (Infix):
```
(2 + 3) * (4 - 1)
```

### 🔄 Output (Postfix):
```
2 3 + 4 1 - *
```

---

## 🚀 How to Run

```bash
g++ -o postfix main.cpp
./postfix
```

---

## 🧠 Key Concepts

- 📚 **Stacks** are used to manage operator precedence and grouping.
- 🔼 **Operator precedence** determines the order of operations.
- ( ) **Parentheses** override default precedence and are managed via the stack.

---

## 📂 Files

- `main.cpp`: The main C++ file with the full implementation.
- `README.md`: You’re reading it 😄

---

## 🙋 Author

Made with ❤️ by a passionate learner exploring expression parsing, stacks, and C++ fundamentals.

---

## 🧱 Bonus Ideas

Want to go further?
- 🧮 Add **multi-digit number** support
- ➕ Add **postfix evaluation**
- 📈 Add a GUI using SFML or Qt

---

Happy coding! 🚀


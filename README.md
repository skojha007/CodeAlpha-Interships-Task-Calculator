# 🧮 Basic Calculator — CodeAlpha Internship Task

<div align="center">

![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)

A command-line calculator program written in **C** as part of the **CodeAlpha Internship Program**. The project demonstrates fundamental programming concepts through three progressively improved versions.

</div>

---

## 📋 Table of Contents

- [About the Project](#-about-the-project)
- [Features](#-features)
- [File Structure](#-file-structure)
- [Getting Started](#-getting-started)
  - [Prerequisites](#prerequisites)
  - [Compilation & Execution](#compilation--execution)
- [Usage](#-usage)
- [Version History](#-version-history)
- [Contributing](#-contributing)
- [Acknowledgements](#-acknowledgements)

---

## 📖 About the Project

This repository contains a **Basic Arithmetic Calculator** built in C as a task submission for the **CodeAlpha Internship Program**. The project showcases incremental development — starting from a minimal single-operation calculator and evolving into a more modular, user-friendly version with looping and error handling.

---

## ✨ Features

- ➕ **Addition** — Adds two integers
- ➖ **Subtraction** — Subtracts two integers
- ✖️ **Multiplication** — Multiplies two integers
- ➗ **Division** — Divides two integers with **floating-point precision**
- 🛡️ **Division by zero handling** — Graceful error message when dividing by zero
- 🔁 **Repeat calculations** — Option to perform multiple operations without restarting
- 🧩 **Modular design** — Calculator logic separated into its own function (v3)

---

## 📁 File Structure

```
CodeAlpha-Interships-Task-Calculator/
├── Calculator.c       # Version 1 — Basic single-shot calculator
├── Calculator_XX.c    # Version 2 — Added looping for repeated calculations
├── Calculator_X.c     # Version 3 — Modular design with separate calculator function
└── README.md          # Project documentation
```

| File | Description |
|------|-------------|
| `Calculator.c` | **v1** — Single-use calculator. Performs one operation and exits. |
| `Calculator_XX.c` | **v2** — Adds a `do-while` loop so the user can perform multiple calculations in a single session. Uses integer division. |
| `Calculator_X.c` | **v3 (Final)** — Refactored with a separate `calculator()` function for modularity. Uses **float division** for accurate results. Includes a farewell message. |

---

## 🚀 Getting Started

### Prerequisites

You need a **C compiler** installed on your system:

| Compiler | Platform | Install Command |
|----------|----------|----------------|
| **GCC** | Linux/macOS | `sudo apt install gcc` or `brew install gcc` |
| **MinGW** | Windows | [Download MinGW](https://www.mingw-w64.org/) |
| **MSVC** | Windows | Included with [Visual Studio](https://visualstudio.microsoft.com/) |

### Compilation & Execution

Clone the repository and compile any version:

```bash
# Clone the repository
git clone https://github.com/skojha007/CodeAlpha-Interships-Task-Calculator.git
cd CodeAlpha-Interships-Task-Calculator

# Compile the final version (recommended)
gcc Calculator_X.c -o calculator

# Run the calculator
./calculator
```

> **Windows users:** Use `calculator.exe` instead of `./calculator`

---

## 💡 Usage

```
============================
<This is a Basic Calculator>
============================

Enter 1st Number: 24
Enter Basic Arithmetic Operation to Perform
 (+,-,*,/)
 Your Choice: /
Enter 2nd number: 7

24 / 7 = 3.428571

Do you want to perform another calculation? (y/n): y

Enter 1st Number: 10
Enter Basic Arithmetic Operation to Perform
 (+,-,*,/)
 Your Choice: +
Enter 2nd number: 5

10 + 5 = 15

Do you want to perform another calculation? (y/n): n

Thank you for using my calculator!
```

---

## 📜 Version History

| Version | File | Key Changes |
|---------|------|-------------|
| **v1** | `Calculator.c` | Initial implementation — single operation, then exit |
| **v2** | `Calculator_XX.c` | Added `do-while` loop for repeated use; integer division |
| **v3** | `Calculator_X.c` | Modular `calculator()` function; float division for accuracy; farewell message |

---

## 🤝 Contributing

Contributions, issues, and feature requests are welcome!

1. **Fork** the repository
2. **Create** a feature branch (`git checkout -b feature/awesome-feature`)
3. **Commit** your changes (`git commit -m 'Add awesome feature'`)
4. **Push** to the branch (`git push origin feature/awesome-feature`)
5. **Open** a Pull Request

---

## 🙏 Acknowledgements

- [**CodeAlpha**](https://www.codealpha.tech/) — For providing the internship opportunity and project task
- Built with ❤️ by [skojha007](https://github.com/skojha007)

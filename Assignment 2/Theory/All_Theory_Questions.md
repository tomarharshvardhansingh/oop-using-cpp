**1. What is the purpose of the main function in a C++ program?**

The `main` function serves as the entry point of any C++ program. When the program is executed, the control starts from the `main` function. It is responsible for invoking other functions and managing program flow. Without `main`, the program would not execute as it provides a defined starting point.

---

**2. Explain the significance of the return type of the main function.**

The return type of `main` in C++ is typically `int`. Returning an integer value allows the program to communicate an exit status to the operating system. By convention:

- `return 0;` signifies successful execution.
- A non-zero return value indicates an error or abnormal termination.

---

**3. What are the two valid signatures of the main function in C++?**

The two valid signatures of `main` in C++ are:

1. `int main()` - This version does not take any arguments.
2. `int main(int argc, char* argv[])` - This version accepts command-line arguments.

---

**4. What is function prototyping and why is it necessary in C++?**

Function prototyping is the declaration of a function before its actual definition. It specifies the return type, function name, and parameters. It is necessary because it allows functions to be used before they are defined, ensuring proper compilation and type checking.

Example:

```cpp
int add(int, int);  // Function prototype
```

---

**5. How do you declare a function prototype for a function that returns an integer and takes two integer parameters?**

```cpp
int add(int a, int b);
```

This declaration tells the compiler that `add` is a function that takes two integers as parameters and returns an integer.

---

**6. What happens if a function is used before it is prototyped?**

If a function is used before being prototyped, the compiler may generate an error or assume a default return type (`int` in older C++ versions), which can lead to unexpected behavior.

---

**7. What is the difference between a declaration and a definition of a function?**

- **Declaration**: Specifies the function’s signature without its body (prototype).
- **Definition**: Includes both the signature and the function body.

Example:

```cpp
int add(int, int);  // Declaration
int add(int a, int b) { return a + b; }  // Definition
```

---

**8. How do you call a simple function that takes no parameters and returns void?**

```cpp
void greet();

greet(); // Function call
```

---

**9. Explain the concept of "scope" in the context of functions.**

Scope defines where a variable or function can be accessed. In C++, scope can be:

- **Local Scope**: Variables declared within a function are accessible only within that function.
- **Global Scope**: Variables declared outside any function are accessible throughout the program.
- **Block Scope**: Variables declared within a block `{}` are accessible only within that block.

---

**10. What is call by reference in C++?**

Call by reference passes the actual memory address of arguments, allowing functions to modify original variables.

Example:

```cpp
void update(int &x) { x += 10; }
```

---

**11. How does call by reference differ from call by value?**

- **Call by Value**: A copy of the argument is passed, and modifications do not affect the original variable.
- **Call by Reference**: The actual variable is passed, and modifications affect the original variable.

---

**12. Provide an example of a function that uses call by reference to swap two integers.**

```cpp
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
```

---

**13. What is an inline function in C++?**

An inline function is expanded at the point of call, reducing function call overhead.

---

**14. How do inline functions improve performance?**

They reduce function call overhead by inserting code directly at the call site, improving execution speed.

---

**15. Explain the syntax for declaring an inline function.**

```cpp
inline int square(int x) { return x * x; }
```

---

**16. What are macros in C++ and how are they different from inline functions?**

Macros are preprocessor directives (`#define`) that replace code at compilation, whereas inline functions obey C++ syntax and provide better type checking.

---

**17. Explain the advantages and disadvantages of using macros over inline functions.**

- **Advantages**: Macros execute faster as they avoid function calls.
- **Disadvantages**: Lack of type safety and debugging issues.

---

**18. Provide an example to illustrate the differences between macros and inline functions.**

```cpp
#define SQUARE(x) x*x   // Macro
inline int square(int x) { return x*x; } // Inline function
```

---

**19. What is function overloading in C++?**

Function overloading allows multiple functions with the same name but different parameters.

*Example*:

```cpp
#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two floating-point numbers
double add(double a, double b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Sum of 3 and 5: " << add(3, 5) << endl;        // Calls int version
    cout << "Sum of 2.5 and 3.5: " << add(2.5, 3.5) << endl; // Calls double version
    cout << "Sum of 1, 2, and 3: " << add(1, 2, 3) << endl;  // Calls three-parameter version
    return 0;
}

```

---

**20. How does the compiler differentiate between overloaded functions?**

By checking the number and type of arguments.

---

**21. Provide an example of overloaded functions in C++.**

```cpp
int add(int a, int b) { return a + b; }
double add(double a, double b) { return a + b; }
```

---

**22. What are default arguments in C++?**

Default arguments provide predefined values when no argument is passed.

*Examples*:
```cpp
#include <iostream>
using namespace std;

// Function with default arguments
void greet(string name = "Guest", int age = 18) {
    cout << "Hello, " << name << "! You are " << age << " years old.\n";
}

int main() {
    greet();                // Uses both default values
    greet("Jay");           // Uses default age but overrides name
    greet("Alice", 22);     // Overrides both default values
    return 0;
}

```

---

**23. How do you specify default arguments in a function declaration?**

```cpp
int multiply(int a, int b = 2);
```

---

**24. What are the rules for using default arguments in functions?**

- Default values must be specified from rightmost parameters.
- Cannot be redefined in function definitions.

*Detail*:
### **Rules for Using Default Arguments in Functions in C++**

1. **Default Values in Declaration Only**:  
    Default arguments should be provided in the function **declaration** (prototype), not in the function **definition**.
    
    ```cpp
    void display(int x = 10);  // Valid (Default argument provided in declaration)
    void display(int x) { cout << x; }  // Function definition
    ```
    
2. **Rightmost Parameters First**:  
    Default values must be assigned **from right to left**. You cannot skip an argument in between.
    
    ```cpp
    void show(int x, int y = 5, int z = 10);  // Valid
    void show(int x = 5, int y, int z = 10);  // Invalid (Default argument in the middle)
    ```
    
3. **Calling with Fewer Arguments**:  
    If a function has default arguments, you can call it with **fewer parameters**, and missing values will be replaced by defaults.
    
    ```cpp
    void greet(string name = "Guest") { cout << "Hello, " << name; }
    greet();          // Output: Hello, Guest
    greet("Jay");     // Output: Hello, Jay
    ```
    
4. **Overloaded Functions and Default Arguments**:  
    When using function overloading, default arguments should not create ambiguity between overloaded versions.
    
    ```cpp
    void display(int x, int y = 5);   // Function 1
    void display(int x);              // Function 2 (No ambiguity)
    ```
    
5. **Function Calls with Explicit Arguments Override Defaults**:  
    If an argument is explicitly provided, it **overrides the default value**.
    
    ```cpp
    void sum(int a, int b = 10) { cout << a + b; }
    sum(5);      // Uses default: Output 15
    sum(5, 20);  // Overrides default: Output 25
    ```
    
6. **Default Arguments Cannot Be Redefined**:  
    Once a function is declared with default arguments, re-declaring it with different defaults is **not allowed**.
    
    ```cpp
    void test(int x = 10);  // Valid
    void test(int x = 20);  // Invalid (Re-declaration with different default)
    ```
    


---

**25. Provide an example of a function with default arguments.**

```cpp
int add(int a, int b = 10) { return a + b; }
```
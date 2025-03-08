**1. What is the fundamental difference between procedural and object-oriented programming paradigms? Provide a brief example to illustrate.**

Procedural programming is a paradigm based on a linear, step-by-step approach where functions operate on data. It focuses on procedures and routines, making it suitable for smaller programs. In contrast, Object-Oriented Programming (OOP) is based on objects and classes, which encapsulate data and behaviors, making code reusable, modular, and more manageable for complex applications.

*Example (Procedural C++)*

```cpp
#include <iostream>
using namespace std;
void greet() { cout << "Hello!"; }
int main() { greet(); return 0; }
```

*Example (OOP C++)*

```cpp
#include <iostream>
using namespace std;
class Greeter { public: void greet() { cout << "Hello!"; } };
int main() { Greeter obj; obj.greet(); return 0; }
```

---

**2. Define Object-Oriented Programming (OOP). What are its core characteristics?**

Object-Oriented Programming (OOP) is a programming paradigm that organizes software design around objects rather than functions and logic. Objects are instances of classes that encapsulate both data and behaviors.

Core characteristics of OOP:

- **Encapsulation**: Hiding data within classes and exposing only necessary functionalities.
- **Abstraction**: Simplifying complex systems by hiding unnecessary details.
- **Inheritance**: Allowing new classes to derive properties and behaviors from existing classes, promoting code reuse.
- **Polymorphism**: Allowing a function or method to take different forms, making code more flexible and extensible.

---

**3. Explain the concept of "abstraction" within the context of OOP. Why is it important?**

Abstraction is the process of hiding implementation details and exposing only the necessary aspects of an object. It helps reduce complexity, improve code readability, and enhance security by preventing direct access to implementation details.

For example, a `Car` class may provide a `startEngine()` method without exposing the internal combustion or electric motor processes, making it easier to use the class without needing to understand its internals.

---

**4. What are the benefits of using OOP over procedural programming?**

- **Modularity**: Code is organized into classes and objects, making it easier to manage.
- **Reusability**: Inheritance allows the reuse of existing code, reducing redundancy.
- **Scalability**: OOP enables easier expansion of projects without modifying existing code.
- **Data Security**: Encapsulation restricts unauthorized access to data, improving security.
- **Easier Maintenance**: Changes and bug fixes are simpler due to modularity.

---

**5. Give a real-world example of a problem that is well-suited to be solved using an OOP approach. Explain why.**

A **banking system** is a great example. It consists of various entities such as `Account`, `Customer`, and `Transaction`. Each entity has its own attributes (data) and methods (behaviors).

Using OOP allows modular design, making it easy to add new features like loan services or credit card management without disrupting the existing system. Encapsulation protects sensitive user information, while inheritance ensures different account types share common functionalities.

---

**6. Define the four key principles of OOP: Encapsulation, Inheritance, Polymorphism, and Abstraction.**

- **Encapsulation**: Wrapping data and methods together within a class while restricting direct access to some details.
- **Inheritance**: Enabling new classes to derive properties and methods from existing classes.
- **Polymorphism**: Allowing objects to be treated as instances of their parent class, enabling multiple implementations of the same method.
- **Abstraction**: Hiding implementation details and exposing only relevant features to users.

---

**7. Explain how encapsulation helps to protect data and create modular code. Give an example using a class and its members.**

Encapsulation protects data by restricting direct access to certain attributes and exposing them only through controlled methods. This ensures data integrity and prevents unintended modifications.

*Example:*

```cpp
class BankAccount {
private:
    double balance;
public:
    void setBalance(double b) { balance = (b >= 0) ? b : 0; }
    double getBalance() { return balance; }
};
```

Here, `balance` is private and can only be modified through `setBalance()`, ensuring controlled data modification.

---

**8. What is inheritance? How does it promote code reuse and maintainability? Provide a simple example using classes.**

Inheritance allows one class to derive attributes and behaviors from another class. This reduces redundancy by reusing existing code and makes maintenance easier by allowing modifications in one place rather than multiple locations.

*Example:*

```cpp
class Animal { 
public: 
    void makeSound() { cout << "Animal sound"; } 
};
class Dog : public Animal { 
public: 
    void bark() { cout << "Bark!"; } 
};
int main() { 
    Dog d; 
    d.makeSound();  // Inherited method
    d.bark(); 
    return 0; 
}
```

Here, `Dog` inherits from `Animal`, reusing its `makeSound()` method.

---

**9. Describe polymorphism. How does it contribute to flexibility and extensibility in software design? Give examples of function/operator overloading and function overriding.**

Polymorphism enables methods or operators to have multiple forms. It allows developers to write flexible, scalable code.

*Function Overloading:* (Same function name, different parameters)

```cpp
class Math {
public:
    int add(int a, int b) { return a + b; }
    double add(double a, double b) { return a + b; }
};
```

*Function Overriding:* (Same function name, different behavior in a derived class)

```cpp
class Base { 
public: virtual void show() { cout << "Base class"; } 
};
class Derived : public Base { 
public: void show() override { cout << "Derived class"; } 
};
```

---

**10. Explain the difference between "overloading" and "overriding".**

- **Overloading**: Multiple functions with the same name but different parameters in the same class.
- **Overriding**: A derived class redefines a method from its base class.

---

**11. List at least three advantages of using OOP in software development.**

1. **Code Reusability**: Inheritance enables sharing of code among classes.
2. **Modularity**: Programs are structured into objects, making maintenance easier.
3. **Security**: Encapsulation restricts unauthorized access to data.

---

**12. Give examples of application domains where OOP is commonly used (e.g., GUI development, game programming, etc.).**

OOP is widely used in various application domains, including:
- **GUI Development**: Frameworks like Qt and JavaFX use OOP to manage windows, buttons, and other UI elements.
- **Game Development**: Game engines like Unity and Unreal Engine use OOP to model game objects, characters, and interactions.
- **Web Development**: Backend languages like Java, Python (Django), and PHP use OOP principles to structure code.
- **Enterprise Applications**: Large-scale systems such as banking and healthcare management use OOP for scalability and maintainability.
- **Embedded Systems**: Devices like smart appliances and automotive software leverage OOP for modular and efficient coding.

---

**13. Discuss the impact of OOP on code maintainability and reusability.**

OOP improves code maintainability by organizing code into classes and objects, making it modular and easier to update. When changes are needed, they can be made within specific classes without affecting the entire program. 

Reusability is enhanced through inheritance, allowing developers to extend existing classes without rewriting code. Polymorphism further improves flexibility by enabling different behaviors under a common interface, reducing duplication.

---

**14. How does OOP contribute to the development of large and complex software systems?**

OOP enables better organization and scalability, making it ideal for large software projects. By dividing a system into objects and classes, OOP reduces dependencies and increases modularity. 

- **Encapsulation** keeps data secure and prevents unintended modifications.
- **Inheritance** reduces redundancy by reusing existing logic.
- **Polymorphism** allows flexibility in method usage across different parts of the system.
- **Abstraction** hides unnecessary details, simplifying development.

These features make OOP essential for enterprise applications, large-scale simulations, and distributed systems.

---

**15. Explain the benefits of using OOP in software development.**

- **Code Reusability**: Inheritance allows developers to extend existing code without duplication.
- **Maintainability**: Code is modular, making updates and debugging easier.
- **Scalability**: New features can be added without major modifications.
- **Security**: Encapsulation protects sensitive data.
- **Efficiency**: OOP reduces complexity by structuring programs around objects and behaviors.

---

**16. Describe the basic structure of a C++ program. What are the essential components?**

A basic C++ program consists of:
- **Preprocessor Directives**: `#include<iostream>` for input/output operations.
- **Namespace Declaration**: `using namespace std;` to avoid naming conflicts.
- **Main Function**: `int main()` as the program's entry point.
- **Statements and Expressions**: Actual logic enclosed in `{}`.
- **Return Statement**: `return 0;` to indicate successful execution.

Example:
```cpp
#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!";
    return 0;
}
```

---

**17. Explain the purpose of namespaces in C++. How do they help to avoid naming conflicts?**

Namespaces prevent name conflicts by grouping functions, variables, and classes under a unique identifier. This is useful when multiple libraries define the same function names.

Example:
```cpp
#include <iostream>
namespace A { void display() { cout << "Namespace A"; } }
namespace B { void display() { cout << "Namespace B"; } }
int main() {
    A::display();  // Calls function from namespace A
    B::display();  // Calls function from namespace B
    return 0;
}
```

---

**18. What are identifiers in C++? What rules must be followed when creating them?**

Identifiers are names assigned to variables, functions, classes, etc. in C++. 

Rules:
- Must begin with a letter (A-Z or a-z) or an underscore (_).
- Cannot be a keyword (e.g., `int`, `class`).
- Case-sensitive (`Age` and `age` are different).
- Cannot contain special characters except `_`.

Example:
```cpp
int studentAge;  // Valid
float _salary;   // Valid
int 1number;     // Invalid (cannot start with a digit)
```

---

**19. What are the differences between variables and constants in C++? How are they declared?**

- **Variables**: Can be modified during program execution.
- **Constants**: Values remain unchanged after initialization.

Example:
```cpp
int age = 25;        // Variable
const double pi = 3.14;  // Constant
```

Attempting to modify `pi` will result in a compilation error.

---

**20. Explain how to use control structures (e.g., if-else, for, while) to control the flow of execution in a C++ program. Provide a simple code example.**

Control structures manage program flow:
- **If-else**: Executes different blocks based on conditions.
- **For loop**: Executes a block a fixed number of times.
- **While loop**: Repeats execution while a condition is true.

Example:
```cpp
#include <iostream>
using namespace std;
int main() {
    int num = 5;
    if (num > 0) { cout << "Positive"; }
    for (int i = 0; i < 3; i++) { cout << " Looping"; }
    int count = 0;
    while (count < 2) { cout << " While Loop"; count++; }
    return 0;
}
```

---



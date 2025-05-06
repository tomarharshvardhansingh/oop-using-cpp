### 1. What is an object in C++?  
An object in C++ is an instance of a class. It represents a real-world entity and contains both data (attributes) and behavior (methods). Objects are created based on class blueprints and use the class's functions to operate on their data.  

Example:  
```cpp
class Car {  
public:  
    string brand;  
    void showBrand() {  
        cout << "Brand: " << brand << endl;  
    }  
};  
int main() {  
    Car myCar;  
    myCar.brand = "Toyota";  
    myCar.showBrand();  
}
```

---

### 2. What is a class in C++ and how does it differ from an object?  
A class in C++ is a user-defined blueprint that defines attributes (variables) and behaviors (methods) for objects. A class does not consume memory until an object is created from it.  

Difference:  
- A class is a template; an object is an instance of a class.  
- A class defines data members and methods; an object stores actual data.  

Example:  
```cpp
class Car {  
public:  
    string brand;  
};  
Car myCar; // Object of Car class
```

---

### 3. Explain the concept of encapsulation with an example.  
Encapsulation is the principle of restricting direct access to data and only allowing modifications through methods. It improves security and data integrity.  

Example:  
```cpp
class BankAccount {  
private:  
    double balance;  
public:  
    void setBalance(double b) { balance = b; }  
    double getBalance() { return balance; }  
};  
```

---

### 4. How do you define a class in C++?  
A class is defined using the `class` keyword, followed by the class name and curly brackets `{}` containing data members and member functions.  

Example:  
```cpp
class Car {  
public:  
    string brand;  
    void showBrand() {  
        cout << "Brand: " << brand;  
    }  
};
```

---

### 5. Describe the syntax for creating an object of a class.  
To create an object, declare a variable of the class type.  

Syntax:  
```cpp
ClassName objectName;
```

Example:  
```cpp
class Car {  
public:  
    string brand;  
};  
int main() {  
    Car myCar; // Object of Car class  
}
```

---

### 6. What are private members in a class and how are they accessed?  
Private members of a class can only be accessed within the class. They are used for data security.  

Example:  
```cpp
class BankAccount {  
private:  
    double balance;  
public:  
    void setBalance(double b) { balance = b; }  
    double getBalance() { return balance; }  
};
```
Access is only possible through public methods.

---

### 7. What are public members in a class and how are they accessed?  
Public members can be accessed from anywhere in the program.  

Example:  
```cpp
class Car {  
public:  
    string brand;  
};  
int main() {  
    Car myCar;  
    myCar.brand = "Tesla"; // Direct access  
}
```

---

### 8. Explain the significance of access specifiers in a class.  
Access specifiers (`public`, `private`, `protected`) control visibility and accessibility of class members.  
- `public`: Accessible from outside.  
- `private`: Accessible only inside the class.  
- `protected`: Accessible in derived classes.  

Example:  
```cpp
class Test {  
private: int a;  
protected: int b;  
public: int c;  
};
```

---

### 9. Provide an example of a class with both private and public members.  
```cpp
class Person {  
private:  
    int age;  
public:  
    string name;  
    void setAge(int a) { age = a; }  
    int getAge() { return age; }  
};
```

---

### 10. How does data hiding work in C++?  
Data hiding restricts access to class members using private access specifier to prevent unintended modifications.  

Example:  
```cpp
class Account {  
private:  
    double balance;  
public:  
    void setBalance(double b) { balance = b; }  
    double getBalance() { return balance; }  
};
```

---
### 11. What is a static data member in C++?  
A static data member is a class member shared by all objects of the class. It is declared using the `static` keyword and is stored in a single memory location.  

Example:  
```cpp
class Test {  
public:  
    static int count;  
};  
int Test::count = 0; // Initialization outside the class
```

---

### 12. How do you declare and initialize a static data member?  
A static data member is declared inside the class but initialized outside using the scope resolution operator `::`.  

Example:  
```cpp
class Demo {  
public:  
    static int count;  
};  
int Demo::count = 100; // Initialization  
```

---

### 13. What is a static function member in C++?  
A static function member belongs to a class rather than any object and can only access static data members.  

Example:  
```cpp
class Test {  
public:  
    static void show() { cout << "Static function"; }  
};  
```

---

### 14. How do static function members differ from regular function members?  
- Static functions do not require an object to be called.  
- They can only access static members of the class.  

Example:  
```cpp
class Example {  
public:  
    static void show() { cout << "Hello"; }  
};  
Example::show(); // No object needed
```

---

### 15. Provide an example of a class with static data and function members.  
```cpp
class Counter {  
public:  
    static int count;  
    static void showCount() { cout << count; }  
};  
int Counter::count = 0;  
```

---

### 16. What is a constructor in C++ and why is it important?  
A constructor is a special function called automatically when an object is created. It initializes object properties.  

Example:  
```cpp
class Car {  
public:  
    Car() { cout << "Car Created!"; }  
};  
Car myCar; // Constructor runs automatically
```

---

### 17. Explain the different types of constructors in C++.  
1. **Default Constructor** – No parameters.  
2. **Parameterized Constructor** – Takes arguments.  
3. **Copy Constructor** – Copies an object.  
4. **Move Constructor** – Moves resources.  

---

### 18. What is a default constructor and when is it used?  
A default constructor has no parameters and initializes object members with default values.  

Example:  
```cpp
class Example {  
public:  
    Example() { cout << "Default Constructor"; }  
};  
Example obj;  
```

---

### 19. How do parameterized constructors work?  
Parameterized constructors allow passing values at the time of object creation.  

Example:  
```cpp
class Car {  
public:  
    string brand;  
    Car(string b) { brand = b; }  
};  
Car myCar("Toyota");  
```

---

### 20. What is a copy constructor and what is its purpose?  
A copy constructor creates a new object as a copy of an existing object.  

Example:  
```cpp
class Demo {  
public:  
    int x;  
    Demo(Demo &d) { x = d.x; }  
};  
Demo obj1;  
Demo obj2 = obj1; // Copy constructor is called  
```

---

### 21. Explain the concept of constructor overloading.  
Constructor overloading allows multiple constructors with different parameters in the same class.  

Example:  
```cpp
class Car {  
public:  
    string brand;  
    Car() { brand = "Unknown"; }  
    Car(string b) { brand = b; }  
};  
Car car1;  
Car car2("Toyota");  
```

---

### 22. How does a constructor initializer list work?  
A constructor initializer list initializes members before entering the constructor body.  

Example:  
```cpp
class Car {  
    string brand;  
public:  
    Car(string b) : brand(b) {}  
};  
```

---

### 23. What is a destructor in C++ and what is its purpose?  
A destructor cleans up resources when an object is destroyed. It has a `~` before the class name.  

Example:  
```cpp
class Test {  
public:  
    ~Test() { cout << "Destructor called"; }  
};  
```

---

### 24. How is a destructor declared and defined?  
A destructor is declared inside a class and defined either inside or outside the class.  

Example:  
```cpp
class Demo {  
public:  
    ~Demo();  
};  
Demo::~Demo() { cout << "Object destroyed"; }  
```

---

### 25. What happens if a destructor is not explicitly defined in a class?  
If no destructor is defined, C++ provides a default destructor that handles automatic cleanup.

---

### 26. Explain the concept of automatic and dynamic storage duration in relation to destructors.  
- **Automatic**: The destructor is called when an object goes out of scope.  
- **Dynamic**: The destructor is called when `delete` is used.  

Example:  
```cpp
Car* myCar = new Car();  
delete myCar; // Destructor is called  
```

---

### 27. How do destructors differ from constructors?  
| Constructor | Destructor |  
|------------|------------|  
| Initializes an object | Cleans up an object |  
| Can be overloaded | Cannot be overloaded |  
| Called when object is created | Called when object is destroyed |  

---

### 28. What is operator overloading in C++ and why is it useful?  
Operator overloading allows user-defined types to use operators like `+`, `-`, `*`.  

Example:  
```cpp
class Complex {  
public:  
    int real, imag;  
    Complex operator+(Complex c) { return {real + c.real, imag + c.imag}; }  
};  
```

---

### 29. Describe the syntax for overloading an operator.  
```cpp
class ClassName {  
public:  
    ReturnType operator OpSymbol(Parameters) { ... }  
};  
```

Example:  
```cpp
class Test {  
public:  
    int x;  
    Test operator+(Test t) { return {x + t.x}; }  
};  
```

---

### 30. Which operators can and cannot be overloaded in C++?  
✅ Can be overloaded: `+`, `-`, `*`, `/`, `==`, `<`, `>`, `[]`, `()`, `++`, `--`  
❌ Cannot be overloaded: `.`, `.*`, `::`, `sizeof`, `typeid`

---

### 31. Provide an example of overloading the "+" operator for a custom class.  
```cpp
class Complex {  
public:  
    int real, imag;  
    Complex operator+(Complex c) { return {real + c.real, imag + c.imag}; }  
};  
```

---

### 32. Explain the concept of friend functions in the context of operator overloading.  
A `friend` function can access private members and perform operator overloading.  

Example:  
```cpp
class Test {  
    int x;  
public:  
    friend Test operator+(Test, Test);  
};  
```

---

### 33. What is a friend function in C++ and how is it declared?  
A friend function can access private members and is declared using `friend`.  

Example:  
```cpp
class Demo {  
    int data;  
public:  
    friend void show(Demo d);  
};  
```

---

### 34. How do friend functions differ from member functions?  
| Friend Function | Member Function |  
|---------------|-----------------|  
| Not part of the class | Belongs to the class |  
| Cannot access `this` pointer | Can access `this` pointer |  
| Declared outside the class but can access private members | Can only access public members |

---

### 35. Explain the benefits and potential drawbacks of using friend functions.  
✅ **Benefits:**  
- Access private members  
- Useful for operator overloading  

❌ **Drawbacks:**  
- Breaks encapsulation  
- Increases coupling  

---

### 36. What is inheritance in C++ and why is it important?  
Inheritance allows a class to derive properties and behaviors from another class, promoting reusability.  

Example:  
```cpp
class Parent {};  
class Child : public Parent {};  
```

---

### 37. Explain the different types of inheritance in C++.  
1. **Single** – One base, one derived.  
2. **Multiple** – Inherits from multiple bases.  
3. **Multilevel** – Derived from another derived class.  
4. **Hierarchical** – One base, multiple derived.  
5. **Hybrid** – Combination of multiple types.  

---

### 38. How do you implement single inheritance in C++?  
```cpp
class Parent {};  
class Child : public Parent {};  
```

---

### 39. What is multiple inheritance and how does it differ from single inheritance?  
Multiple inheritance allows a class to inherit from more than one class.  

Example:  
```cpp
class A {};  
class B {};  
class C : public A, public B {};  
```

---

### 40. Describe hierarchical inheritance with an example.  
Hierarchical inheritance occurs when multiple derived classes inherit from a single base class.  

Example:  
```cpp
class Parent {};  
class Child1 : public Parent {};  
class Child2 : public Parent {};  
```

---

### 41. What is multilevel inheritance and how is it implemented in C++?  
Multilevel inheritance occurs when a derived class inherits from another derived class.  

Example:  
```cpp
class A {};  
class B : public A {};  
class C : public B {};  
```

---

### 42. Explain the concept of hybrid inheritance.  
Hybrid inheritance is a combination of multiple types of inheritance.  

Example:  
```cpp
class A {};  
class B : public A {};  
class C {};  
class D : public B, public C {};  
```

---

### 43. What are access modifiers in C++ and what are the different types?  
Access modifiers control member accessibility:  
1. `public` – Accessible anywhere.  
2. `private` – Accessible only in the class.  
3. `protected` – Accessible in derived classes.  

---

### 44. How do public, private, and protected access modifiers affect inheritance?  
- `public` – Retains base class access level.  
- `private` – Makes base class members private.  
- `protected` – Makes base class members protected.  

---

### 45. Explain how access modifiers control member accessibility in derived classes.  
```cpp
class Base {  
protected: int x;  
};  
class Derived : public Base {  
public:  
    void show() { cout << x; } // Accessible  
};  
```

---

### 46. What is function overriding in the context of inheritance?  
Function overriding allows a derived class to redefine a function from the base class. The function in the base class must be declared as `virtual` to enable runtime polymorphism.

Example:  
```cpp
class Base {
public:
    virtual void show() { cout << "Base class"; }
};
class Derived : public Base {
public:
    void show() override { cout << "Derived class"; }
};
```

---

### 47. How do you override a base class function in a derived class?  
To override a function, the base class function must be declared `virtual`, and the derived class must provide a new implementation.

Example:  
```cpp
class Parent {
public:
    virtual void display() { cout << "Parent"; }
};
class Child : public Parent {
public:
    void display() override { cout << "Child"; }
};
```

---

### 48. Explain the use of the "virtual" keyword in function overriding.  
The `virtual` keyword allows a function in a base class to be overridden in a derived class and ensures that the correct function is called at runtime.

Example:  
```cpp
class Animal {
public:
    virtual void makeSound() { cout << "Animal sound"; }
};
class Dog : public Animal {
public:
    void makeSound() override { cout << "Bark"; }
};
```

---

### 49. What is the significance of the "override" specifier in C++11 and later?  
The `override` keyword ensures that a function actually overrides a base class function, preventing accidental errors.

Example:  
```cpp
class Base {
public:
    virtual void func() {}
};
class Derived : public Base {
public:
    void func() override {} // Ensures correct overriding
};
```

---

### 50. What is a virtual base class in C++ and why is it used?  
A virtual base class prevents multiple copies of a base class when using multiple inheritance, avoiding the **diamond problem**.

Example:  
```cpp
class Base { };
class Derived1 : virtual public Base { };
class Derived2 : virtual public Base { };
class Final : public Derived1, public Derived2 { };
```

---

### 51. How do you declare and implement a virtual base class?  
To declare a virtual base class, use the `virtual` keyword in the inheritance.

Example:  
```cpp
class A {
public:
    void show() { cout << "A"; }
};
class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {}; // Only one copy of A is inherited
```

---

### 52. Explain the role of virtual base classes in resolving ambiguity in multiple inheritance.  
Virtual base classes prevent duplicate copies of the base class from being inherited. Without `virtual`, multiple copies of the base class exist.

Example:  
```cpp
class A {};
class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {}; // Only one A exists in D
```

---

### 53. Provide an example of using a virtual base class to avoid the diamond problem in inheritance.  
```cpp
class A {
public:
    void show() { cout << "A"; }
};
class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {}; // Avoids duplicate A
```  

---
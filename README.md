# 📘 Classes and Objects in C++  

---

## 🎯 Aim  
To study and implement **classes and objects** in C++, understand the difference between **inside and outside class definitions**, and explore the role of **public and private access specifiers** in encapsulation.  

---

## 📚 Theory  

In C++, **classes and objects** are the foundation of Object-Oriented Programming (OOP).  
- A **class** is a blueprint that defines data and functions.  
- An **object** is an instance of a class that holds actual values.  

### 🏗️ Class  
- Defines **data members** (variables) and **member functions** (methods).  
- Can use **access specifiers**:  
  - `public` → Accessible outside the class.  
  - `private` → Accessible only inside the class.  
- Helps in **encapsulation** (data hiding).  

### 🧑‍🤝‍🧑 Object  
- An **object** is created from a class.  
- Each object has its own copy of class variables.  
- Example: `Car c1;` creates an object `c1` of class `Car`.  

### 📝 Function Definitions  
- **Inside the class** → Function body is written directly in the class.  
- **Outside the class** → Function declared inside, defined outside using `::` (scope resolution).  

---

## 📊 Comparison Table  

| ⚙️ Feature                 | 🏗️ Class                                   | 🧑‍🤝‍🧑 Object                               |
|-----------------------------|-------------------------------------------|---------------------------------------------|
| **Definition**              | Blueprint/template                        | Instance of a class                          |
| **What it contains**        | Data members + functions                  | Real values and operations                   |
| **Memory Allocation**       | No memory allocated                       | Memory allocated when object is created      |
| **Example**                 | `class Student {…};`                      | `Student s1;`                                |
| **Purpose**                 | Defines structure                         | Works with real data                         |  

---

## Algorithms

### Program 1
---

- Start the program.
- Define a class cuboid.
- Declare three public integer data members: height, width, length and initialize them with 2, 3, and 5 respectively.
- In main(), create an object c1 of class cuboid.
- Calculate the volume using the formula:
  
  1.volume = height * width * length
  
  2.by accessing the object’s public attributes.
  
- Display the calculated volume.
- End the program.

---

### Program 2
---

- Start the program.
- Define a class cuboid.
- Declare three public integer data members: height, width, length and initialize them with 2, 3, and 5 respectively.
- Define a public member function volume() that:
  
  1.Calculates the volume: v = height * width * length
  
  2.Returns v.
  
- In main(), create an object c1 of class cuboid.
- Call the volume() function using the object c1 and store the result in vol.
- Display vol.
- End the program.

---

### Program 3
---

- Start the program.
- Define a class cuboid.
- Declare three private integer data members: height, width, length and initialize them with 10, 4, 6 respectively.
- Define a public member function volume() that:
  
  1.Calculates the volume: v = height * width * length
  
  2.Returns v.
  
- In main(), create an object c1 of class cuboid.
- Call the volume() function using c1 to access private attributes indirectly.
- Display the calculated volume.
- End the program.

---

### Program 4 
---

- Start the program.
- Define a class cuboid.
- Declare three public integer data members: height, width, length.
- Define a public member function Input() that:
  
  1.Prompts the user to enter height, width, and length.
  
  2.Stores the user input in the respective data members.
  
- Define a public member function volume() that:
  
  1.Calculates the volume: v = height * width * length
  
  2.Returns v.
  
- Define a public member function disp() that:
  
  1.Calls the volume() function
  
  2.Displays the volume of the cuboid.
  
- In main(), create an object c1 of class cuboid.
- Call c1.Input() to take input from the user.
- Call c1.disp() to display the calculated volume.
- End the program.

---


## 🧠 Conclusion  

This experiment demonstrates the importance of **Classes and Objects in C++**.  

- 🏗️ **Class** → Defines structure and behavior.  
- 🧑‍🤝‍🧑 **Object** → Real entity with data and functionality.  
- ✅ Key Insights:  
  - Use **inside class methods** for simplicity.  
  - Use **outside class methods** for better organization.  
  - Classes and objects allow **encapsulation, reusability, and real-world modeling** in programming.


# Introduction to Classes

**Class** is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class.
- A class is like a blueprint for an object.
- Each class you create becomes a new type you can use to create objects, so C++ is an extensible programming language.
- Classes cannot execute by themselves.
  - A Person object can drive a Car object by telling it what to do (go faster, go slower, turn left, turn right, etc.) - without knowing how the car’s internal mechanisms work.
  - Similarly, the main function can "drive" an Account object by calling its member functions - without knowing how the class is implemented.


## Example: Simple bank-account class

Maintains as data members the attributes name and balance, and provides member functions for behaviors including
- querying the balance (getBalance),
- making a deposit that increases the balance (deposit) and
- making a withdrawal that decreases the balance (withdraw).


```c++
// Account.h
// Account class that contains a name data member 
// and member functions to set and get its value.
#include <string> // enable program to use C++ string data type

class Account {
public:
    // member function that sets the account name in the object
    void setName(std::string accountName) {
        name = accountName; // store the account name           
    }

    // member function that retrieves the account name from the object       
    std::string getName() const {
        return name; // return name's value to this function's caller
    }
private:
    std::string name; // data member containing account holder's name
}; // end class Account
```


```c++
// AccountTest.cpp
// Creating and manipulating an Account object.
#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() { 
   Account myAccount; // create Account object myAccount

   // show that the initial value of myAccount's name is the empty string
   cout << "Initial account name is: " << myAccount.getName();

   // prompt for and read name
   cout << "\nPlease enter the account name: ";
   string theName;
   getline(cin, theName); // read a line of text
   myAccount.setName(theName); // put theName in myAccount

   // display the name stored in object myAccount
   cout << "Name in object myAccount is: " 
      << myAccount.getName() << endl;
}
```

## Classes

Classes are defined using either keyword class or keyword struct, with the following syntax:

```cpp
class class_name
{
  access_specifier_1:
    member1;
  access_specifier_2:
    member2;
  ...
} object_names;
```

Where `class_name` is a valid identifier for the class, `object_names` is an optional list of names for objects of this class. The body of the declaration can contain members, which can either be data or function declarations, and optionally access specifiers.

Classes have the same format as **plain data structures**, except that they can also include functions and have these new things called access specifiers.

An access specifier is one of the following three keywords: **private, public or protected**. These specifiers modify the access rights for the members that follow them:

- **private** members of a class are accessible only from within other members of the same class (or from their "friends").
- **protected** members are accessible from other members of the same class (or from their "friends"), but also from members of their derived classes.
- **public** members are accessible from anywhere where the object is visible.

*Note:* By default, all members of a class declared with the class keyword have private access for all its members.

## Instantiating an Object

- **An object** is an instantiation of *a class*. In terms of variables, a class would be the type, and an object would be the variable.

- Typically, you cannot call a member function of a class until you create an object of that class.

## Members

Functions:

- E.g. One can get `myAccount` name by calling the object’s `getName` member function with the expression `myAccount.getName()`.
- To call this member function for a specific object, you specify the object’s name (myAccount), followed by the **dot operator (.)**, then the member function name (getName) and a set of parentheses.
- The empty parentheses indicate that getName does not require any additional information to perform its task.
- The member function's return type (which appears to the left of the function’s name) specifies the type of data the member function returns to its caller after performing its task.
- The return type void indicates that a function does not return (i.e., give back) any information to its calling function.

Data:
 - An object has attributes, implemented as **data members** - the object carries these with it throughout its lifetime.
- Each object has its own copy of the class's data members.
- Normally, a class also contains one or more member functions that manipulate the data members belonging to particular objects of the class.
- Data members are declared inside a class definition but outside the bodies of the class's member functions.

## Example: Simple bank-account class (cont.)

- Class **Account** contains a name data member that stores the account holder’s name.
- A class's data members maintain data for each object of the class.
- Class **Account** also contains member function **setName** that a program can call to store a name in an Account object, and member function **getName** that a program can call to obtain a name from an Account object.

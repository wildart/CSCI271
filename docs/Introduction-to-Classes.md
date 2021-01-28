
# Introduction to Classes

## Structures

A data structure is a group of data elements grouped together under one name. These data elements, known as members, can have different types and different lengths. Data structures can be declared in C++ using the following syntax:

```cpp
struct type_name {
member_type1 member_name1;
member_type2 member_name2;
member_type3 member_name3;
.
.
} object_names;
```

Where `type_name` is a name for the structure type, `object_name` can be a set of valid identifiers for objects that have the type of this structure. Within braces {}, there is a list with the **data members**, each one is specified with a type and a valid identifier as its name.

## Classes

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
    // Account constructor with two parameters  
    Account(std::string accountName, int initialBalance) 
      : name{accountName} { // assign accountName to data member name

      // validate that the initialBalance is greater than 0; if not,
      // data member balance keeps its default initial value of 0
      if (initialBalance > 0) { // if the initialBalance is valid
         balance = initialBalance; // assign it to data member balance
      }
    }
    
    // function that deposits (adds) only a valid amount to the balance
    void deposit(int depositAmount) {
        if (depositAmount > 0) { // if the depositAmount is valid
         balance = balance + depositAmount; // add it to the balance 
        }
    }

    // function returns the account balance
    int getBalance() const {
        return balance;
    }
    
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
    int balance{0}; // data member with default initial value
}; // end class Account
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


```c++
#include <iostream>
#include <string>
using namespace std;

Account acc{"John Dow", 0};
cout << "Name in object `acc` is: " << acc.getName() << endl;
```

    Name in object `acc` is: John Dow


## Example: Simple bank-account class (cont.)

- Class **Account** contains a name data member that stores the account holder’s name.
- A class's data members maintain data for each object of the class.
- Class **Account** also contains member function **setName** that a program can call to store a name in an Account object, and member function **getName** that a program can call to obtain a name from an Account object.

## (Member) Functions

- The first line of each function definition is the function header (signature).
- The (member) function's return type (which appears to the left of the function's name) specifies the type of data the member function returns to its caller after performing its task.
- The return type **void** indicates that a function does not return (i.e., give back) any information to its calling function.
- A member function can require one or more parameters that represent the data it needs to perform its task.
  - Parameters are declared in a parameter list located in the required parentheses following the member function’s name.
  - Each parameter must specify a type followed by a parameter name.
  - Parameters are separated by a comma, as in
  
          (type1 name1, type2 name2, ...)
  
  - The number/order of arguments in a function call must match the number/order of parameters in the function definition’s parameter list.
- Every (member) function body is delimited by an opening left brace and a closing right brace.
- Within the braces are one or more statements that perform the (member) function's task(s).
- When program execution reaches the member function's closing brace, the function returns to its caller.
- Variables declared in a particular function's body are local variables which can be used only in that function.
- When a function terminates, the values of its local variables are lost.
- A function’s parameters also are local variables of that function.


```c++
double square(double value)
{
    return value*value;
}
```


```c++
#include <iostream>

double var2 = 12.2; 
std::cout << "Square of " << var2 << " is: " << square(var2) << std::endl;
```

    Square of 12.2 is: 148.84


## Access Specifiers

- **private** is an access specifier.
- Access specifiers are always followed by **a colon (:)**.
- Data member name's declaration (line 40) appears after access specifier private: to indicate that name is accessible only to class Account's member functions.
  - This is known as data hiding - the data member name is encapsulated (hidden) and can be used only in class Account’s `setName` and `getName` member functions.
- Data members or member functions listed after the public access specifier (and before the next access specifier if there is one) are “available to the public.”
  - They can be used by other functions in the program, and by member functions of other classes.

Tips
- By default, everything in a class is private, unless you specify otherwise.
- Once you list an access specifier, everything from that point has that access until you list another access specifier.
- The access specifiers public and private may be repeated, but this is unnecessary and can be confusing.

## Example: Simple bank-account class (cont.)


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

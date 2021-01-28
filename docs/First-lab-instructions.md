- Open a text editor, Notepad or Notepad++

- Type/paste a program code

```cpp
#include <iostream> // allows program to output data to the screen

// function main begins program execution
int main()
{
    std::cout << "Welcome to C++!\n"; // display message

    return 0; // indicate that program ended successfully
} // end function main
```

- Save source code file with 'cpp' extension, e.g. 'first.cpp', to the desktop.

- Open **Cygwin terminal**

- Navigate to the desktop folder using 'cd' command, e.g.

        cd /cygdrive/c/Users/my-user-name/Desktop/

where **my-user-name** is a Windows account name

- List files in the desktop folder to confirm that your C++ source code file exists using 'ls' command.

- Compile your source code file using GCC compiler by running following command:

        g++ first.cpp -o first

- If compilation is successful ( there are no error messages on the screen) then run your compiled program:

        ./first

- If you see following **warning** message

        warning: extended initializer lists only available with -std=c++11 or -std=gnu++11

  - add the option `-std=c++11` to the compiler call as follows:

        g++ first.cpp -std=c++11 -o first

- If the program compilation finishes with errors then analyze them (read an error message and its location) and correct problems in your code.

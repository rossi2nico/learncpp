#include <iostream>

int doubleValue(int x) {
    return x * 2;
}

int main() {

    // type identifier = { expression };

    int a;                          // default-initialization
    [[maybe_unused]] int b = 3.14;  // copy-initialization
    [[maybe_unused]] int c (3.14);   // direct-initialization
    [[maybe_unused]] int d { 7 };      // direct-list initialization
    [[maybe_unused]] int e {};       // value-initialization

    // initialization gives a variable an initial value. assignment gives an existing variable a value
    // direct-list initialization is the preferred way to initialize a variable since it does not allow errors
    // value initialization is zero-initialized (more consistent than direct-init)

    std::cout << "a memory address: " << &a << "\n";    // stored on the buffer before printing to terminal
    std::cout << "a: " << a << std::endl;               // flushes buffer: immediate print to terminal (slow)
    
    int x {};
    int y {};
    long z {};

    std::cout << "Enter three numbers: ";
    std::cin >> x >> y >> z;
    std::cout << "You entered " << x << ", " << y << ", and " << z << std::endl;

    int f { 2 };
    std::cout << (f = 5);

    // Statement: Calculate an action; compile. 
    // Expression: Computing a value. 

    int g { 7 };                        // literal
    int j = { doubleValue(g) * 2 };     // operators, variables, and function calls
    std::cout << "j: " << j;            // expression statement because << is a binary operator.

    return 0;
}

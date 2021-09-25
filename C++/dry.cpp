//dry.cpp
//Nick Watson, CISP360
//08/29/21

// Specification C2 – Program Header
#include <iostream>
using namespace std;

// Specification B1 – Variables
const int NUMBER = 21;
const float DECIMAL = 23.56;
const double BIGNUM = 33.4345;
const bool B1 = true;
const char* A1 = "Hey";
const string NAME = "Nick";

//Specification C1- Program Greeting
int main() {
    cout << "PROGRAM GREETING" << endl;
    cout << "Hello World - my name is " << NAME << endl;

// Specification A1 – Output Variables
    std::cout << NUMBER << endl;
    std::cout << DECIMAL << endl;
    std::cout << BIGNUM << endl;
    std::cout << B1 << endl;
    std::cout << A1 << endl;
    std::cout << NAME << endl;
}
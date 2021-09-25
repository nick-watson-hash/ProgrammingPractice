//AGRev.cpp
//Nick Watson, CISP360
//09/18/21

// Specification B2 - Advice
// This program will show how Earth's climate has changed over the past century and projects what future temperatures might be like.

#include <iostream>
using namespace std;

int year;
string name;
const float centuryRaise = 1.8;
const float oceanIncRate = 3.1;
const int tempIncRate = 2;
// Specification B5 - Constants
const int celciusConversion = (tempIncRate * year - 32) * 5 / 9;

    int main() {

    std::cout << "PROGRAM GREETING" << endl;
    std::cout << "================" << endl;
    std::cout << "This software calculates how sea levels and temperatures change over time! \n" << endl;
    
    // Specification C1 - Rising Seas
    std::cout << "The ocean rose " << centuryRaise << "mm over the last 100 years. \n" << endl;
    // Specification C2 - 15 year rise
    std::cout << "The ocean will rise " << centuryRaise * 15 << "mm over the next 15 years. \n" << endl;
    // Specification C3 - 30 year rise
    std::cout << "The ocean will rise " << centuryRaise * 30 << "mm over the next 30 years. \n" << endl;
    // Specification C4 - 15 year temp
    std::cout << "The mean July temperatures will increase by " << tempIncRate * 15 << " degrees F over the next 15 years. \n" << endl;
    // Specification C5 - 30 year temp
    std::cout << "The mean July temperatures will increase by " << tempIncRate * 30 << " degrees F over the next 30 years. \n" << endl;   
    
    // Specification B1 - Mixed output
    std::cout << "The ocean rose " << centuryRaise * .03937 << "inches over the last 100 years" << endl;
    std::cout << "The ocean will rise " << (centuryRaise * 15) * .03937 << "inches over the next 15 years" << endl;
    std::cout << "The ocean will rise " << (centuryRaise * 30) * .03937 << "inches over the next 30 years" << endl;
    std::cout << "The mean July temperatures will increase by " << (tempIncRate * 15 - 32) * 5 / 9 << " degrees C over the next 15 years" << endl;
    std::cout << "The mean July temperatures will increase by " << (tempIncRate * 30 - 32)  * 5 / 9 << " degrees C over the next 30 years \n" << endl; 
    
    //Specification B3 outcome or content. - 50 Year Temp
    std::cout << "The temperature for New York City will increase to " <<  85 + (tempIncRate * 50)  << " degrees F over the next 50 years" << endl; 
    std::cout << "The temperature for Denver will increase to " <<  88 + (tempIncRate * 50)  << " degrees F over the next 50 years" << endl; 
    std::cout << "The temperature for Phoenix will increase to " <<  106 + (tempIncRate * 50)  << " degrees F over the next 50 years" << endl; 
    std::cout << "The temperature for Sacramento will increase to " <<  92 + (tempIncRate * 50)  << " degrees F over the next 50 years" << endl; 

    // Specification B4 - Client Name
    std::cout << "Please enter your name: " << endl;
    cin >> name;
    std::cout << "Welcome " << name << endl;

     }
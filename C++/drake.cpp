//drake.cpp
//Nick Watson, CISP360
//09/15/21

// Specification C4 - Source File Header
#include <iostream>
using namespace std;

// Specification C2 - Variable Declaration
// Specification C5 - Variable Initialization
float civ;
float civHalf;
float civDouble;
// Specification A1 – Constant Variables
const int creation = 7;
const int planets = 7;
const int lifeTime = 100000;
const float stars = .4;
const float life = .13;
const float intelLife = .2;
const float comm = .2;

int main() {

    // Specification B1 - Calculation
    civ = stars * life * intelLife * comm * creation * planets * lifeTime;
    civHalf = civ / 2;
    civDouble = civ * 2;

    // Specification A4 - Program Greeting Heading
    std::cout << "PROGRAM GREETING" << endl;
    std::cout << "================" << endl;
    // Specification C3 - Program Greeting
    std::cout << "This software calculates the number of civilzations through using the Drake Equation.\n" << endl;
    
    // Specification A5 - Drake Equation Heading
    std::cout << "CHANCE OF INTELLIGENT LIFE" << endl;
    std::cout << "==========================" << endl;
    std::cout << intelLife << "\n" << endl;

    // Specification C1 – Program Output
    std::cout << "Estimated number of civilizations in the universe" << endl;
    std::cout << civ << "\n" << endl;
    
    // Specification B3 - Double Output Headings
    std::cout << "OUTPUT DOUBLED:" << endl;
    std::cout << "===============" << endl;
    // Specification B2 - Double Output
    std::cout << civDouble << "\n" << endl;

    // Specification B5 - Half Output Headings
    std::cout << "OUTPUT HALVED:" << endl;
    std::cout << "==============" << endl;
    // Specification B4 - Half Output
    std::cout << civHalf << "\n" << endl;

    // Specification A3 - Variable Name Heading
    std::cout << "VARIABLES NAMES AND VALUES:" << endl;
    std::cout << "=========" << endl;
    // Specification A2 – Display variables
    std::cout << "stars: " << stars << endl;
    std::cout << "life: " << life << endl;
    std::cout << "intellife: " << intelLife << endl;
    std::cout << "comm: " << comm << endl;
    std::cout << "creation: " << creation << endl;
    std::cout << "planets: " << planets << endl;
    std::cout << "lifeTime: " << lifeTime << endl;
}
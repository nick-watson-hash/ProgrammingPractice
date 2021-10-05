// acdt.cpp
// Nick Watson, CISP360
// 10/01/21

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void ProgramGreeting()
{
    cout << "Hello this is assignment number 4" << endl;
    cout << "My name is Nick Watson" << endl;
    cout << "October 3,2021" << endl;
}

int main()
{
    cout << "PROGRAM GREETING" << endl;
    cout << "================" << endl;
    cout << "This program is a troubleshooting tree for a light aircraft. The computer will ask questions and take the input to provide the instructions to fix issues such as engine, communications failures, or in-flight icing." << endl;

    // Specification B3 - Date
    time_t current = time(0);
    char* todays_date = ctime(&current);
    cout << "The date is " << todays_date << endl;

    // Specification A1 - Alpha Menu
    string planeIssue;
    cout << "Please press the correct letter to the issue your plane is experiencing" << endl;
    cout << "<C>ommuncations Failure" << endl;
    cout << "<E>ngine Failure" << endl;
    cout << "<I>n-Flight Icing Failure" << endl;
    cout << "<Q>uit" << endl;
    cin >> planeIssue;

    // Specification C1 - Communications Option
    if (planeIssue == "C")
    {
        cout << "Please switch to your alternate radio." << endl;
    }
    // Specification C2 - Engine Failure Option
    if (planeIssue == "E")
    {
        string airBorne;
        cout << "Please respond to the following questions with a simple 'yes or 'no'" << endl;
        cout << "Air you airborne?" << endl;
        cin >> airBorne;
        if (airBorne == "no")
        {
            cout << "Have a drink and call a mechanic." << endl;
        }
        if (airBorne == "yes")
        {
            string electrical;
            cout << "Is the electrical system working?" << endl;
            cin >> electrical;
            if (electrical == "no")
            {
                cout << "Turn on the Master Switch." << endl;
            }
            else if (electrical == "yes")
            {
                string engine;
                cout << "Has the engine stopped running?." << endl;
                cin >> engine;
                if (engine == "no")
                {
                    string temperature;
                    cout << "Is the outside air temperature < 32 degrees?" << endl;
                    cin >> temperature;
                    if (temperature == "no")
                    {
                        cout << "Turn on the Carburator Heat." << endl;
                    }
                    else if (temperature == "yes")
                    {
                        cout << "Switch to the other fuel tank." << endl;
                    }
                }
                else if (engine == "yes")
                {
                    string mountain;
                    cout << "Are you over the Mountains?" << endl;
                    cin >> mountain;
                    if (mountain == "no")
                    {
                        string water;
                        cout << "Are you over water?" << endl;
                        cin >> water;
                        if (water == "no")
                        {
                            cout << "Make emergency landing on a road" << endl;
                        }
                        else if (water == "yes")
                        {
                            cout << "Inflate your life vest, make emergency landing." << endl;
                        }
                    }
                    else if (mountain == "yes")
                    {
                        string night;
                        cout << "Are you flying at night?" << endl;
                        cin >> night;
                        if (night == "no")
                        {
                            cout << "Make emergency landing" << endl;
                        }
                        else if (night == "yes")
                        {
                            string window;
                            cout << "Turn on the landing light and look out the window. Do you like what you see?" << endl;
                            cin >> window;
                            if (window == "no")
                            {
                                cout << "Turn off the Landing light." << endl;
                            }
                            else if (window == "yes")
                            {
                                cout << "Make emergency landing." << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    // Specification C3 - In-Flight Icing Option
    if (planeIssue == "I")
    {
        int icemes;
        cout << "Please enter the amount of ice in mm." << endl;
        cin >> icemes;
        // Specification B2 - Icing Input Validation
        if (icemes < 1 && icemes > 0)
        {
            cout << "Decicing boots energized with 5% power." << endl;
        }
        else if (icemes > 1 && icemes < 5)
        {
            cout << "Decicing boots energized with 20% power." << endl;
        }
        else if (icemes > 5.1 && icemes < 9)
        {
            cout << "Decicing boots energized with 65% power." << endl;
        }
        else if (icemes > 9.1 && icemes < 10)
        {
            cout << "Decicing boots energized with 100% power." << endl;
        }
        else
        {
            cout << "INVALID NUMBER ENTERED!" << endl;
            exit(1);
        }
    }
    else if (planeIssue == "Q")
    {
        cout << "Have a nice day." << endl;
        exit(1);
    }

    // Specification B1 - Menu Input Validation
    else
    {
        // Specification A2 - Menu Input Validation
        cout << "INVALID KEY" << endl;
        exit(1);
    }
}

// VechicleClassObjectOrientedChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vechicle.h"
#include <unordered_map>
using namespace std;
int main()
{
    std::unordered_map<string, int> vechicleProductChoice;
    vechicleProductChoice["Vechicle"] =  0;
    vechicleProductChoice["Car"] = 1;
    vechicleProductChoice["Airplane"] = 2;
    vechicleProductChoice["Boat"] = 3;
    cout << "Hello World!\n";
    cout << "Welcome to Abk vechicle factory" << endl;
    cout << "Tell me what you want to create, I will provide you options below. If I understand your commands, I will go ahead and create the product" << endl;
    string userChoice;
    cin >> userChoice;
    
    do
    {
        Vechicle vechicle = Vechicle("Abiola", "Model-A", 1999, "Abiola Company", 3, "Gasoline", 0);
        cout << "Your choice of product is " << userChoice << endl;
        cout <<"You also prefered to name it "<< vechicle.GetName() <<endl;
    } while (vechicleProductChoice.find(userChoice) == vechicleProductChoice.end());

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

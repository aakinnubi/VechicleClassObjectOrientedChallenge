// VechicleClassObjectOrientedChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vechicle.h"
#include <unordered_map>
using namespace std;
//template<typename ClassType>
//ClassType DidCreateObject(ClassType classType);
//Vechicle CreateVechicle(string name, string model, int year, string company, int wheels, string fuel, float milleage);
//string CreateVechicleDiaglogue();
int main()
{
    std::unordered_map<string, int> vechicleProductChoice;
    Vechicle vechicle;
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
        int choice = vechicleProductChoice[userChoice];
        string name;
        string model;
        int year = 0;
        string company;
        string engineType;
        float mileage;
        switch (choice)
        {
        case 0:
            cout << " You made a choice  to create " << userChoice << endl;
            cout << " I will ask you few questions to create your vechicle so you can drive your new vechicle. "
                "Again think of this like you are at a factory to make a customize vechicle of yours";
            cout << "What name do you intend to give your vechicle ?";
            cin >> name;
            if (name.empty()) {
                cout << "Huh... perhaps you forgot to give your car a name";
            }
            else {
                vechicle.SetName(name);
                cout << "great, now that I know the name you intend to give your vechicle, Let me ask you few more question, What is the Model name ?" << endl;      
                cin >> model;
                if (model.empty()) {
                    cout << "Huh... perhaps you forgot to give us your preferred model";
                }
                else {
                    cout << "Cool you have an eye for good model, yah ! do you have a year in mind? "
                        "if yes press y o your keyboard if o press n on your keyboard."
                        " Please note if you don't have a year in mind we will use a default one we have";
                    cin >> year;
                    if (year == 0) {
                        cout << "Seems you did not specify a year or you specified 0 , we will use the default year for you not to worry";
                    }
                    else {
                        vechicle.SetYear(year);
                    }
                    cout << "Next, we need to specify brand or manufacturer or company. nevermind anyone you preferred" << endl;
                    cin >> company;
                    if (company.empty()) {
                        cout << "Huh... perhaps you forgot to give us your preferred company or brand or manufacturer";
                    }
                    else {
                        vechicle.SetManufacturer(company);
                    }
                    cout << "Next, we need to We need to collect your engine type, gasoline, hybrid or electric" << endl;
                    cin >> engineType;
                    if (engineType.empty()) {
                        cout << "Seems you did not specify a so we have set it as gasoline";
                    }
                    else {
                        vechicle.SetFuelType(engineType);
                    }
                    cin >> mileage;
                    vechicle = Vechicle("Abiola", "Model-A", 1999, "Abiola Company", 3, "Gasoline", 0);
                    cout << "Your choice of product is " << userChoice << endl;
                    cout << "You also prefered to name it " << vechicle.GetName() << endl;
                    vechicle.~Vechicle();
                }
           
            }
          
            
          /*  break;*/
        default:
            break;
        }
        cout << "";
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

//Vechicle CreateVechicle(string name, string model, int year, string company, int wheels, string fuel, float milleage)
//{
//    return  Vechicle("Abiola", "Model-A", 1999, "Abiola Company", 3, "Gasoline", 0);
//}

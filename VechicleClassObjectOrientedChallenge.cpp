// VechicleClassObjectOrientedChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vechicle.h"
#include <unordered_map>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
//template<typename ClassType>
Vechicle CreateObject(string commaSeparatedString);
//Vechicle CreateVechicle();
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
        float mileage = 0.0;
        string allAttributesSpecified;
        Vechicle v = CreateObject("Tesla,Model-Y,2022,Tesla Inc,4,Electric,20");
        vechicle = v;
        string createAll;
        switch (choice)
        {
        case 0:
            cout << " You made a choice  to create " << userChoice << endl;
            cout << "I will ask you few questions to create your vechicle so you can drive your new vechicle. \n"
                "Again think of this like you are at a factory to make a customize vechicle of yours.\n Please if you prefer to enter all information at once\n"
                "type for example : Name,Model,Year,Manufacturer,NumberOfWheels,FuelType,Millage"
                " example: Tesla,Model-Y,2022,Tesla Inc,4,Electric,20 \n"
                "This will create a new vechicle for you with all the characteristics listed in comma seperated above"
                << endl;
            cout << "Enter A to specify all the attributes of your vechicle at once like this: Tesla,Model-Y,2022,Tesla Inc,4,Electric,20 or enter N to specify it one after the other " << endl;
            cin >> createAll;
            if (createAll == "A") {
                cout << "You entered A" << endl;
                cin >> allAttributesSpecified;
            }
            else {
                cout << "What name do you intend to give your vechicle ?" << endl;
                cin >> name;
                if (name.empty()) {
                    cout << "Huh... perhaps you forgot to give your car a name ";
                }
                else {
                    vechicle.SetName(name);
                    cout << "great, now that I know the name you intend to give your vechicle, Let me ask you few more question, What is the Model name ?" << endl;
                    cin >> model;
                    if (model.empty()) {
                        cout << "Huh... perhaps you forgot to give us your preferred model " << endl;
                    }
                    else {
                        cout << "Cool you have an eye for good model, yah ! do you have a year in mind? "
                            "if yes press y o your keyboard if o press n on your keyboard. "
                            " Please note if you don't have a year in mind we will use a default one we have " << endl;
                        cin >> year;
                        if (year == 0) {
                            cout << "Seems you did not specify a year or you specified 0 , we will use the default year for you not to worry" << endl;
                        }
                        else {
                            vechicle.SetYear(year);
                        }
                        cout << "Next, we need to specify brand or manufacturer or company. nevermind anyone you preferred" << endl;
                        cin >> company;
                        if (company.empty()) {
                            cout << "Huh... perhaps you forgot to give us your preferred company or brand or manufacturer" << endl;
                        }
                        else {
                            vechicle.SetManufacturer(company);
                        }
                        cout << "Next, we need to We need to collect your engine type, gasoline, hybrid or electric" << endl;
                        cin >> engineType;
                        if (engineType.empty()) {
                            cout << "Seems you did not specify a so we have set it as gasoline" << endl;
                        }
                        else {
                            vechicle.SetFuelType(engineType);
                        }
                        cout << "Now, We assume that you might preferred a milage, if no mileage is set, "
                            "then we will go with 0, which means you are getting a new Vechicle."
                            << "Enter Mileage"
                            << endl;
                        cin >> mileage;
                        if (mileage == 0) {
                            cout << "Seems you did not specify mileage so we gave you a new one" << endl;
                        }
                        else {
                            vechicle.SetMillage(mileage);
                        }
                        /* vechicle = Vechicle("Abiola", "Model-A", 1999, "Abiola Company", 3, "Gasoline", 0);*/
                        cout << "We have just create your customised vechicle. Let's go ";
                        cout << "You also prefered to name it " << vechicle.GetName() << " Model is "
                            << vechicle.GetModel()
                            << " Year is " << vechicle.GetYear() << " Manufacturer is "
                            << vechicle.GetManufacturer() << " Wheel is " << vechicle.GetNumberOfWheels()
                            << " Engine type : " << vechicle.GetFuelType()
                            << " Mileage used is " << vechicle.GetMillage()
                            << endl;
                        vechicle.~Vechicle();
                    }

                }
                break;
            }
            break;
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
//    return Vechicle("Abiola", "Model-A", 1999, "Abiola Company", 3, "Gasoline", 0);
//}

//template<typename ClassType>
Vechicle CreateObject(string commaSeparatedString)
{
    vector<string> userEntry;
    stringstream s_stream(commaSeparatedString);
    while (s_stream.good())
    {
        string subString;
        getline(s_stream, subString, ',');
        userEntry.push_back(subString);
    }
    int parameterSize = size(userEntry);
    if (parameterSize == 7) {
        Vechicle v= Vechicle(userEntry[0], userEntry[1], stoi(userEntry[2]), userEntry[3], stoi(userEntry[4]),userEntry[5], stoi(userEntry[6]));
        return v;
    }
    return Vechicle();
}

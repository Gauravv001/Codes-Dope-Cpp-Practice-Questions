// Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
// if employee is female, then she will work only in urban areas.

// if employee is a male and age is in between 20 to 40 then he may work in anywhere

// if employee is male and age is in between 40 t0 60 then he will work in urban areas only.

// And any other input of age should print "ERROR".

#include <iostream>
using namespace std;

void working(int age, char sex, char maritalStatus)
{
    switch (sex)
    {
    case 'M':
        if (age > 20 && age < 40)
        {
            cout << "Employee is a male and he may work in anywhere." << endl;
            cout << "Martial status:" << maritalStatus << endl;
        }
        else if (age > 40 && age < 60)
        {
            cout << "Employee is a male and he will work in urban areas only." << endl;
            cout << "Martial status:" << maritalStatus << endl;
        }
        break;

    case 'F':
        cout << "Employee is a female and she will work only in urban areas" << endl;
        cout << "Martial status:" << maritalStatus << endl;
        break;
    }
}

int main()
{
    int AgeOfIndividual;
    cout << "Enter the age:";
    cin >> AgeOfIndividual;

    char sex, MaritalStatus;
    cout << "Enter the sex of individual:";
    cin >> sex;
    cout << "Tell us about your Marital Status:";
    cin >> MaritalStatus;

    working(AgeOfIndividual, sex, MaritalStatus);
    return 0;
}
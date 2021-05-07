#include <iostream>
#include <iomanip>//allows stream manipulators
using namespace std;
//function prototypes
void user_input(double& actVal);
void assessment_value(double& actVal, double& assessVal);
void property_tax(double& assessVal, double& propTax);
void display_results(double& assessVal, double& propTax);
//global constants
const int PERCENTAGE = 60;
const double TAX = 0.75;

int main()
{
    //declaring variables
    double actualValue, assessmentValue, propertyTax;
    //explaining program to user
    cout << "This program calculates the total assessment ";
    cout << endl << "value and property tax of your property.";
    cout << endl << endl;
    //calling functions
    user_input(actualValue);
    assessment_value(actualValue, assessmentValue);
    property_tax(assessmentValue, propertyTax);
    display_results(assessmentValue, propertyTax);

    return 0;
}
//input
void user_input(double& actVal)
{
    cout << "Please enter the actual value of your property, ";
    cout << endl << "in dollars. ";
    cin >> actVal;
}
//processing
void assessment_value(double& actVal, double& assessVal)
{
    assessVal = (actVal * PERCENTAGE) / 100;
}
//processing
void property_tax(double& assessVal, double& propTax)
{
    propTax = (assessVal / 100) * TAX;
}
//output
void display_results(double& assessVal, double& propTax)
{
    cout << "Your assessment value is ";
    cout << setprecision(2) << fixed << assessVal << ".";
    cout << endl;
    cout << "Your property tax is ";
    cout << setprecision(2) << fixed << propTax << ".";
}
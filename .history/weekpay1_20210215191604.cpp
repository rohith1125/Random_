#include <iostream>
#include <iomanip>

using namespace std;

int main()
 {
    //declare variables needed
    int empNumber;
    double grossPay, stateTax, fedTax, fica,
           totalGross = 0, totalState = 0,
           totalFed = 0, totalFICA = 0, totalNet = 0;

    //get first employee number
    cout << "Enter employee number, or 0 to quit: ";
    cin >> empNumber;

    //while loop to go until 0 is entered
    while(empNumber != 0){
        //get gross pay
        cout << "Enter gross pay: ";
        cin >> grossPay;

        //validate input for grossPay
        while(grossPay < 0){
            cout << "Please enter a nonnegative number: ";
            cin >> grossPay;
        }

        //get state tax
        cout << "Enter state tax: ";
        cin >> stateTax;

        //validate input for state tax
        while(stateTax < 0 || stateTax > grossPay){
            cout << "Please enter a value greater than 0 and";
            cout << " lower than gross pay: ";
            cin >> stateTax;
        }

        //get federal tax
        cout << "Enter federal tax: ";
        cin >> fedTax;

        //validate input for federal tax
        while(fedTax < 0 || fedTax > grossPay){
            cout << "Please enter a value greater than 0 and";
            cout << " lower than gross pay: ";
            cin >> fedTax;
        }

        //get FICA withholdings
        cout << "Enter FICA withholdings: ";
        cin >> fica;

        //validate input for FICA withholdings
        while(fica < 0 || fica > grossPay){
            cout << "Please enter a value greater than 0 and";
            cout << " lower than gross pay: ";
            cin >> fica;
        }

        //check if sum of taxes is invalid
        if(stateTax + fedTax + fica > grossPay){
            cout << "ERROR! The sum of the taxes cannot be";
            cout << " greater than gross pay! Enter values";
            cout << " again for employee number " << empNumber << endl;
            continue;
        }

        //otherwise continue
        totalGross += grossPay;
        totalState += stateTax;
        totalFed += fedTax;
        totalFICA += fica;

        totalNet += grossPay - stateTax - fedTax - fica;

        //read next employee number
        cout << "Enter next employee number, or 0 to quit: ";
        cin >> empNumber;
    }

    //format output then display output
    cout << setprecision(2) << fixed;
    cout << "\nTotal gross pay for this week is          $" << totalGross;
    cout << "\nTotal state tax for this week is          $" << totalState;
    cout << "\nTotal federal tax for this week is        $" << totalFed;
    cout << "\nTotal FICA withholdings for this week are $" << totalFICA;
    cout << "\nTotal net pay for this week is            $" << totalNet;

    //return 0 to mark successful completion of program
    return 0;
 }
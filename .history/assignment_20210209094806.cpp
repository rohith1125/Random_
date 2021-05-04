#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    int choice;
    int age;
    double income;
    double maxamount;
    double loanBalance;
    double loanAmount;
    double ProcessingFee;

    cout << "What you want to do (choose 1-3)" << endl;
    cout << "1. Apply for loan" << endl;
    cout << "2. Refinance a loan" << endl;
    cout << "3. Cancel loan application" << endl;

    cin >> choice;
    
    switch (choice) {

    case 1:
        cout << "You have chosen 1" << endl;

        cout << "How old are you?" << endl;
        cin >> age;

        if (age < 18) {
            cout << "Sorry, you need to be at least 18 years old" << endl;
            return 0;
        }

        cout << "What is your income?" << endl;
        cin >> income;


        //logical statements of eligibility
        if (age >= 18 && age <= 25 && income >= 35000) {
            maxamount = 25000;
        }
        else if (age <= 85 && income >= 50000) {
            maxamount = 100000;
        }
        else {
            maxamount = 75000;
        }

        cout << "Eligibility: Your max amount is " << maxamount << endl;

        break;
    case 2:
        cout << " You have chosen 2 " << endl;
        cout << " Enter your Loan Balance " << endl;
        cin >> loanBalance;
        if(loanBalance > 50000)
        {
            cout << " You can refinance for 72 months " << endl;
        }
        else {
            cout<< " You can refinance for 60 months " << endl;
            }
        break;

    case 3:
        cout << "You have chosen 3" << endl;
            cout << " Input your Loan Amount applied for " << endl;
            cin >> loanAmount;
            if(loanAmount > 25000 && loanAmount < 50000)
            {
                cout << "You will incur a 1% Processing fee" << endl;
                ProcessingFee = 0.01*loanAmount;
                cout << " Your Processing Fee is " << ProcessingFee << endl;
            }
            else
            {
            cout << "You will incur a 3% Processing fee" << endl;
            ProcessingFee = 0.03*loanAmount;
            cout << " Your Processing Fee is " << ProcessingFee << endl;   
            
            }
        break;
    }


    //tell your program not to close immediately 
    system("pause");
    return 0;
}
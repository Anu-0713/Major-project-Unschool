/* Project Title:Write a program to create a simple ATM machine
Submitted by:YNK Annapurna
Submitted to: Unschool
Language written in : C/C++
*/
#include <iostream>
using namespace std;
int main() {
    int pin;
    double balance=1000.000000;
    cout<<"*********WELCOME TO OUR BANK***********\n";
    cout << "Enter your 4-digit PIN: ";
    cin >> pin;
    while(pin>0)
    {
        cout << "\nATM Menu:\n";
        cout << "1. Withdraw Money\n";
        cout << "2. Deposit Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                double withdrawAmount;
                cout << "Enter amount to withdraw: ";
                cin >> withdrawAmount;
                if (balance >= withdrawAmount) {
                    balance -= withdrawAmount;
                    cout << "Withdrawn " << withdrawAmount << " successfully." << endl;
                } else {
                    cout << "Insufficient balance." << endl;
                }
                break;
            }

            case 2: {
                double depositAmount;
                cout << "Enter amount to deposit: ";
                cin >> depositAmount;
                balance += depositAmount;
                cout << "Deposited " << depositAmount << " successfully." << endl;
                break;
            }

            case 3:
                cout << "Current balance: " << balance << endl;
                break;

            case 4:
                cout << "Exiting program.\n";
                return 0;

            default:
                cout << "Invalid choice. Please choose a valid option.\n";
        }
    }

    return 0;
}

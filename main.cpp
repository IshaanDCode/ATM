#include <iostream>
using namespace std;


void accountCheckKobe(string accountName, int kobeBalance) {

if (accountName == "Kobe")
{
        cout << "Account found\n";

        int pin_Kobe = 4915; // Pin of Kobe bryant
        int pin;
        cout << "Enter your pin: ";
        cin >> pin; // Takes in the pin

        if (pin_Kobe == pin) {
            cout << "Access granted\n"; // If the pin is granted then this code will run

            char option1 = 'Y'; // Option for if you click yes or no
            char option2 = 'N';
            char userChoice;
            int depositAmount;

            cout << "Would you like to view your account balance? (Y for Yes, N for No): ";
            cin >> userChoice;

            if (userChoice == option1) {
                cout << "Your account balance is " << kobeBalance << endl;
            } else if (userChoice == option2) {
                cout << accountName + ", Thank you for using this ATM \n";
//                break;
            } else {
                cout << "Access denied\n";
//                return 0; // Exit the program as an invalid choice was made
            }

            cout << "Would you like to withdraw or deposit? (W for Withdraw, D for deposit): "; // Option for withdrawal or deposit
            cin >> userChoice; // Taking the user input

            char withdraw = 'W'; // Taking the preference from Messi, Kobe, Ronaldo, Jude
            char deposit = 'D';
            // Withdraw code
            if (userChoice == withdraw) {
                cout << "You have chosen to withdraw\n";
                int withdrawAmount;
                cout << "Enter the amount you would like to withdraw: ";
                cin >> withdrawAmount;

                if (withdrawAmount > kobeBalance) {
                    cout << "Insufficient funds\n";
                } else {
                    cout << "You have withdrawn $" << withdrawAmount << endl;
                    kobeBalance -= withdrawAmount;
                    cout << "Your account balance is now $" << kobeBalance << endl;
                }
                // Deposit code
            } else if (userChoice == deposit) {
                cout << "You have chosen to deposit\n";
                cout << "Enter the amount you would like to deposit: ";
                cin >> depositAmount;
                cout << "You have Deposited $" << depositAmount << endl;
                kobeBalance += depositAmount;
                cout << "Your account balance is now $" << kobeBalance << endl;
            }
        }
    }
}

void accountCheckMessi(string accountName, int messiBalance)
{
        if (accountName == "Messi") { // If the account is Messi then this code will run
        cout << "Account found\n";

        int pin_Messi = 3914; // Messi's pin
        int pin; // Take pin as a integer within the curly braces so its not applicable and or the same throughout the code
        cout << "Enter your pin: ";
        cin >> pin; // Take the input for the pin

        if (pin_Messi == pin) {
            cout << "Access granted\n";
            // If the pin is wrong then the code will run again
            char option1 = 'Y'; // two options if the access is granted
            char option2 = 'N';
            char userChoice;
            int depositAmount;

            cout << "Would you like to view your account balance? (Y for Yes, N for No): ";
            cin >> userChoice; // Take the user choice whether he wants to go futher or wants to quit

            if (userChoice == option1) {
                cout << "Your account balance is " << messiBalance << endl;
            } else if (userChoice == option2) {
                cout << accountName + ", Thank you for using this ATM \n";
//                    break;
            } else {
                cout << "Access denied\n";
//                    return 0; // Exit the program as an invalid choice was made
            }

            cout << "Would you like to withdraw or deposit? (W for Withdraw, D for deposit): "; // Whether the user wants to withdraw or deposit
            cin >> userChoice;

            char withdraw = 'W';
            char deposit = 'D';

            if (userChoice == withdraw) {
                cout << "You have chosen to withdraw\n";
                int withdrawAmount;
                cout << "Enter the amount you would like to withdraw: ";
                cin >> withdrawAmount;

                if (withdrawAmount > messiBalance) {
                    cout << "Insufficient funds\n"; // If they withdraw more then there balance then this code will run where it will state that you have insufficent funds
                } else {
                    cout << "You have withdrawn $" << withdrawAmount << endl;
                    messiBalance -= withdrawAmount;
                    cout << "Your account balance is now $" << messiBalance << endl;
                }
            } else if (userChoice == deposit) { // If the user has chosen to deposit this code will run
                cout << "You have chosen to deposit\n";
                cout << "Enter the amount you would like to deposit: ";
                cin >> depositAmount;
                cout << "You have Deposited $" << depositAmount << endl;
                messiBalance += depositAmount;
                cout << "Your account balance is now $" << messiBalance << endl;
            }
        }
    }
}


void accountCheckRonaldo(string accountName, int ronaldoBalance){
        if (accountName == "Ronaldo") {
        cout << "Account found\n";

        int pin_Ronaldo = 9982;
        int pin;
        cout << "Enter your pin: ";
        cin >> pin;

        if (pin_Ronaldo == pin) {
            cout << "Access granted\n";

            char option1 = 'Y';
            char option2 = 'N';
            char userChoice;
            int depositAmount;

            cout << "Would you like to view your account balance? (Y for Yes, N for No): ";
            cin >> userChoice;

            if (userChoice == option1) {
                cout << "Your account balance is " << ronaldoBalance << endl;
            } else if (userChoice == option2) {
                cout << accountName + ", Thank you for using this ATM \n";
//                    break;
            } else {
                cout << "Access denied\n";
//                    return 0; // Exit the program as an invalid choice was made
            }

            cout << "Would you like to withdraw or deposit? (W for Withdraw, D for deposit): ";
            cin >> userChoice;

            char withdraw = 'W';
            char deposit = 'D';

            if (userChoice == withdraw) {
                cout << "You have chosen to withdraw\n";
                int withdrawAmount;
                cout << "Enter the amount you would like to withdraw: ";
                cin >> withdrawAmount;

                if (withdrawAmount > ronaldoBalance) {
                    cout << "Insufficient funds\n";
                } else {
                    cout << "You have withdrawn $" << withdrawAmount << endl;
                    ronaldoBalance -= withdrawAmount;
                    cout << "Your account balance is now $" << ronaldoBalance << endl;
                }
            } else if (userChoice == deposit) {
                cout << "You have chosen to deposit\n";
                cout << "Enter the amount you would like to deposit: ";
                cin >> depositAmount;
                cout << "You have Deposited $" << depositAmount << endl;
                ronaldoBalance += depositAmount;
                cout << "Your account balance is now $" << ronaldoBalance << endl;
            }
        }
    }
}

void accountCheckJude(string accountName, int judeBalance){
              if (accountName == "Jude") {
              cout << "Account found\n";

              int pin_Jude = 3889;
              int pin;
              cout << "Enter your pin: ";
              cin >> pin;

              if (pin_Jude == pin) {
                  cout << "Access granted\n";

                  char option1 = 'Y';
                  char option2 = 'N';
                  char userChoice;
                  int depositAmount;

                  cout << "Would you like to view your account balance? (Y for Yes, N for No): ";
                  cin >> userChoice;

                  if (userChoice == option1) {
                      cout << "Your account balance is " << judeBalance << endl;
                  } else if (userChoice == option2) {
                    cout << accountName + ", Thank you for using this ATM \n";
//                      break;
                  } else {
                      cout << "Access denied\n";
//                      return 0; // Exit the program as an invalid choice was made
                  }

                  cout << "Would you like to withdraw or deposit? (W for Withdraw, D for deposit): ";
                  cin >> userChoice;

                  char withdraw = 'W';
                  char deposit = 'D';

                  if (userChoice == withdraw) {
                      cout << "You have chosen to withdraw\n";
                      int withdrawAmount;
                      cout << "Enter the amount you would like to withdraw: ";
                      cin >> withdrawAmount;

                      if (withdrawAmount > judeBalance) {
                          cout << "Insufficient funds\n";
                      } else {
                          cout << "You have withdrawn $" << withdrawAmount << endl;
                          judeBalance -= withdrawAmount;
                          cout << "Your account balance is now $" << judeBalance << endl;
                      }
                  } else if (userChoice == deposit) {
                      cout << "You have chosen to deposit\n";
                      cout << "Enter the amount you would like to deposit: ";
                      cin >> depositAmount;
                      cout << "You have Deposited $" << depositAmount << endl;
                      judeBalance += depositAmount;
                      cout << "Your account balance is now $" << judeBalance << endl;
                  }
              }
          }
}


int main() {
    cout << "Welcome to the ATM Machine\n";

    // Initialize account balances
    int messiBalance = 1000;
    int kobeBalance = 21000;
    int ronaldoBalance = 800;
    int judeBalance = 9000;
    /*
    ****Information****
    Account's are Messi, Kobe, Ronaldo, And Jude
    Pin for Messi = 3914
    Pin for Kobe = 4915
    Pin for Ronaldo = 9982
    Pin for Jude = 3889
  
    */
    bool runLoop = true;
//  while (runLoop) {   // This will cause the code to run again.
        cout << "Please enter your Account name: ";

        string accountName; // String for accountName
        cin >> accountName; // Takes in accountName


        // Calling each function with if...
        if (accountName == "Kobe")
        {
            accountCheckKobe(accountName, kobeBalance);
        }
        else if (accountName == "Messi")
        {
            accountCheckMessi(accountName, messiBalance);
        }
        else if (accountName == "Ronaldo")
        {
            accountCheckRonaldo(accountName, ronaldoBalance);
        }
        else if (accountName == "Jude")
        {
            accountCheckJude(accountName, judeBalance);
        }
        else {
            cout << "User not found\n";
        }
//    }
// After this code is completed it will run again because I have integrated a while loop.
    return 0;
} // End of the Atm code

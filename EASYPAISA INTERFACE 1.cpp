#include<iostream>
#include<conio.h>
#include<string>
#include<windows.h>
using namespace std;
int main()
{
    int pin;
    int choice, amount, confirm;
    int balance = 31000;
    string no, acc, sender, ref, name;
    string username;
    cout << "EASYPAISA WALLET !";
    cout << "\nEnter 4 Digit PIN: ";
    cin >> pin;
    if(pin == 2205)
    {
        cout << "\nLogin Successful!";
    }
    else
    {
        cout << "\nIncorrect PIN!";
        cout << "\nAccess Denied!";
        return 0;
    }
    do
    {
        cout << "\n1. Send Money";
        cout << "\n2. Receive Money";
        cout << "\n3. Mobile Load";
        cout << "\n4. Bill Payment";
        cout << "\n5. Check Balance";
        cout << "\n6. Exit";
        cout << "\n\nEnter any Choice (1-6): ";
        cin >> choice;
        switch(choice)
        {
            case 1:
            {
                cout << "\n\n Send Money";
                cout << "\n1. Send to Easypaisa Account";
                cout << "\n2. Other Wallets";
                cout << "\n3. Send to Bank Account";
                cout << "\n4. Back to Main Menu";
                cout << "\nEnter any choice (1-4): ";
                cin >> choice;
                switch(choice)
                {
                    case 1:
                    {
                        cout << "\nEnter Mobile Number: ";
                        cin >> no;
                        cout << "Enter Amount: ";
                        cin >> amount;
                        if(amount > balance)
                        {
                            cout << "\nInsufficient Balance!";
                            break;
                        }
                        cout << "\n1. Confirm";
                        cout << "\n2. Cancel";
                        cout << "\nEnter choice (1-2): ";
                        cin >> confirm;
                        switch(confirm)
                        {
                            case 1:
                                balance = balance - amount;
                                cout << "\nTransaction Successfull!";
                                break;
                            case 2:
                                cout << "\nTransaction Unsuccessfull!";
                                break;
                            default:
                                cout << "\nInvalid choice!";
                        }
                        break;
                    }
                    case 2:
                    {
                        cout << "\n\nOther Wallets";
                        cout << "\n1. JazzCash";
                        cout << "\n2. SadaPay";
                        cout << "\n3. NayaPay";
                        cout << "\n4. Back";
                        cout << "\nEnter any choice (1-4): ";
                        cin >> choice;
                        switch(choice)
                        {
                            case 1:
                            case 2:
                            case 3:
                            {
                                cout << "\nEnter Mobile Number: ";
                                cin >> no;
                                cout << "Enter Amount: ";
                                cin >> amount;
                                if(amount > balance)
                                {
                                    cout << "\nInsufficient Balance!";
                                    break;
                                }
                                cout << "\n1. Confirm";
                                cout << "\n2. Cancel";
                                cout << "\nEnter choice (1-2): ";
                                cin >> confirm;
                                switch(confirm)
                                {
                                    case 1:
                                        balance = balance - amount;
                                        cout << "\nTransaction Successfull!";
                                        break;
                                    case 2:
                                        cout << "\nTransaction Unsuccessfull!";
                                        break;
                                    default:
                                        cout << "\nInvalid choice!";
                                }
                                break;
                            }
                            case 4:
                                cout << "\nReturning Back";
                                break;
                            default:
                                cout << "\nInvalid choice!";
                        }
                        break;
                    }
                    case 3:
                    {
                       cout << "\nSelect Bank";
                       cout << "\n1. HBL";
                       cout << "\n2. UBL";
                       cout << "\n3. Meezan Bank";
                       cout << "\n4. Bank Alfalah";
                       cout << "\nEnter Choice: ";
                       cin >> choice;
                       switch(choice)
                    {
                       case 1:
                       name = "HBL";
                       break;
                       case 2:
                       name = "UBL";
                       break;
                       case 3:
                       name = "Meezan Bank";
                       break;
                       case 4:
                       name = "Bank Alfalah";
                       break;
                       default:
                       cout << "\nInvalid Bank Choice!";
                        break;
                     }

                        cout << "Enter Account Number: ";
                        cin >> acc;

                        cout << "Enter Amount: ";
                        cin >> amount;

                        if(amount > balance)
                        {
                            cout << "\nInsufficient Balance!";
                            break;
                        }
                        cout << "\n1. Confirm";
                        cout << "\n2. Cancel";
                        cout << "\nEnter choice (1-2): ";
                        cin >> confirm;
                        switch(confirm)
                        {
                            case 1:
                                balance = balance - amount;
                                cout << "\nTransaction Successfull!";
                                break;
                            case 2:
                                cout << "\nTransaction  Unsuccessfull!";
                                break;
                            default:
                                cout << "\nInvalid choice!";
                        }
                        break;
                    }
                    case 4:
                        cout << "\nReturning to Main Menu";
                        break;
                    default:
                        cout << "\nInvalid choice!";
                }
                break;
            }
            case 2:
            {
                cout << "\n\nReceive Money";
                cout << "\n1. Receive from Easypaisa Account";
                cout << "\n2. Receive from Bank";
                cout << "\n3. Back to Main Menu";
                cout << "\nEnter any choice (1-3): ";
                cin >> choice;
                switch(choice)
                {
                    case 1:
                    {
                        cout << "\nEnter Sender Mobile Number: ";
                        cin >> sender;
                        cout << "Enter Amount: ";
                        cin >> amount;
                        cout << "\n1. Confirm";
                        cout << "\n2. Cancel";
                        cout << "\nEnter choice (1-2): ";
                        cin >> confirm;
                        switch(confirm)
                        {
                            case 1:
                                balance = balance + amount;
                                cout << "\nTransaction Successfull!";
                                break;
                            case 2:
                                cout << "\nTransaction Unsuccessfull!";
                                break;
                            default:
                                cout << "\nInvalid choice!";
                        }
                        break;
                    }
                    case 2:
                    {
                        cout << "\nSelect Bank";
                        cout << "\n1. HBL";
                        cout << "\n2. UBL";
                        cout << "\n3. Meezan Bank";
                        cout << "\n4. Bank Alfalah";
                        cout << "\nEnter Choice: ";
                        cin >> choice;
                    switch(choice)
                    {
                        case 1:
                        name = "HBL";
                        break;

                        case 2:
                        name = "UBL";
                        break;

                        case 3:
                        name = "Meezan Bank";
                        break;

                        case 4:
                        name = "Bank Alfalah";
                        break;

                        default:
                        cout << "\nInvalid Bank Choice!";
                        break;
                    }
                        cout << "Enter Account Number: ";
                        cin >> acc;
                        cout << "Enter Amount: ";
                        cin >> amount;
                        cout << "\n1. Confirm";
                        cout << "\n2. Cancel";
                        cout << "\nEnter choice (1-2): ";
                        cin >> confirm;
                        switch(confirm)
                        {
                            case 1:
                                balance = balance + amount;
                                cout << "\nTransaction Successfull!";
                                break;
                            case 2:
                                cout << "\nTransaction  Unsuccessfull!";
                                break;
                            default:
                                cout << "\nInvalid choice!";
                        }
                        break;
                    }
                    case 3:
                        cout << "\nReturning to Main Menu";
                        break;
                    default:
                        cout << "\nInvalid choice!";
                }
                break;
            }
            case 3:
            {
                cout << "\n\nMobile Load";
                cout << "\n1. Jazz";
                cout << "\n2. Zong";
                cout << "\n3. Telenor";
                cout << "\n4. Ufone";
                cout << "\n5. Back to Main Menu";
                cout << "\nEnter any choice (1-5): ";
                cin >> choice;
                switch(choice)
                {
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    {
                        cout << "\nEnter Mobile Number: ";
                        cin >> no;
                        cout << "Enter Amount: ";
                        cin >> amount;
                        if(amount > balance)
                        {
                            cout << "\nInsufficient Balance!";
                            break;
                        }
                        cout << "\n1. Confirm";
                        cout << "\n2. Cancel";
                        cout << "\nEnter choice (1-2): ";
                        cin >> confirm;
                        switch(confirm)
                        {
                            case 1:
                                balance = balance - amount;
                                cout << "\nMobile Load Successfull!";
                                break;
                            case 2:
                                cout << "\nMobile Load Unsuccessfull!";
                                break;
                            default:
                                cout << "\nInvalid choice!";
                        }
                        break;
                    }
                    case 5:
                        cout << "\nReturning to Main Menu...";
                        break;
                    default:
                        cout << "\nInvalid choice!";
                }
                break;
            }
            case 4:
            {
                cout << "\n\nBill Payment";
                cout << "\n1. Electricity Bill";
                cout << "\n2. Gas Bill";
                cout << "\n3. Water Bill";
                cout << "\n4. Internet Bill";
                cout << "\n5. Telephone Bill";
                cout << "\n6. Back to Main Menu";

                cout << "\nEnter any choice (1-6): ";
                cin >> choice;
                switch(choice)
                {
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    {
                        cout << "\nEnter Reference/Consumer Number: ";
                        cin >> ref;
                        cout << "Enter Amount: ";
                        cin >> amount;
                        if(amount > balance)
                        {
                            cout << "\nInsufficient Balance!";
                            break;
                        }
                        cout << "\n1. Confirm";
                        cout << "\n2. Cancel";
                        cout << "\nEnter choice (1-2): ";
                        cin >> confirm;
                        switch(confirm)
                        {
                            case 1:
                                balance = balance - amount;
                                cout << "\nBill Payment Successfull!";
                                break;
                            case 2:
                                cout << "\nBill Payment Unsuccessfull!";
                                break;
                            default:
                                cout << "\nInvalid choice!";
                        }
                        break;
                    }
                    case 6:
                        cout << "\nReturning to Main Menu";
                        break;
                    default:
                        cout << "\nInvalid choice!";
                }
                break;
            }
            case 5:
            {
               cout << "\nEnter Pin To Check Balance: ";
               cin >> no;

               if(no == "2205")
            {
               cout << "\nCurrent Balance: " << balance;
            }
            else
            {
               cout << "\nInvalid Pin!";
               break;
            }
                cout << "\n1. Back to Main Menu";
                cout << "\nEnter 1 To Go Back To Main Menu: ";
                cin >> choice;
                switch(choice)
                {
                    case 1:
                        cout << "\nReturning to Main Menu";
                        break;
                    default:
                        cout << "\nInvalid choice!";
                }
                break;
            }
            case 6:
                cout << "\n\nThank You For Using Easypaisa";
                break;
            default:
                cout << "\nInvalid choice! Please enter 1-6.";
        }
    } while(choice != 6);
    return 0;
}
#include "Bank.h"
int main(){
    Bank Data;
    BankAccount X;
    std::string Name;
    int acc_number, owners_id, operationChooser; 
    int checkid = 1;
    double AdditionToBalance, cash;
    for ( ; ; )
    {
        std::cout << "-------------------" << std::endl;
        std::cout << "Choose the operation:" << std::endl;
        std::cout << "-------------------" << std::endl;
        std::cout << "1 - Create new account" << std::endl;
        std::cout << "2 - Continue with existing account" << std::endl;
        std::cout << "3 - Leave" << std::endl;
        std::cin >> operationChooser;
        std::cout << "-------------------" << std::endl;
        if (operationChooser == 1){
            std::cout << "Enter your name:" << std::endl;
            std::cin >> Name;
            X.CreateAccount(checkid, Name, 0);
            Data.Adding(X);
            for (int i; i < Data.Database.size(); i++)
                if (Data.Database[i].id == checkid)
                    acc_number = i;
            checkid++;
            std::cout << "-------------------" << std::endl;
            std::cout << "Here is your account info:" << std::endl;
            Data.Database[acc_number].ShowAccount();
        }
        if (operationChooser == 2)
        {
            std::cout << "Enter your id:" << std::endl;
            std::cin >> owners_id;
            for (int i; i < Data.Database.size(); i++){
                if (Data.Database[i].id == owners_id){
                    std::cout << "This is the id " << owners_id << " account info:" << std::endl;
                    std::cout << "-------------------" << std::endl;
                    Data.Database[i].ShowAccount();
                    acc_number = i;
                }
            }
        }
        if(operationChooser == 3)
            break;
        
        operationChooser = 0;
        for ( ; ; )
        {
            std::cout << "-------------------" << std::endl;
            std::cout << "Choose the operation with your account:" << std::endl;
            std::cout << "-------------------" << std::endl;
            std::cout << "1 - Replanish your balance" << std::endl;
            std::cout << "2 - Get cash" << std::endl;
            std::cout << "3 - Show account info" << std::endl;
            std::cout << "4 - Delete your account" << std::endl;
            std::cout << "5 - Sorting the accounts" << std::endl;
            std::cout << "6 - Input DataBase" << std::endl;
            std::cout << "7 - End session" << std::endl;
            std::cin >> operationChooser;
            std::cout << "-------------------" << std::endl;
            if (operationChooser == 1)
            {
                std::cout << "Enter the sum you want to replahish with:" << std::endl;
                std::cin >> AdditionToBalance;
                Data.Database[acc_number].AddToBalance(AdditionToBalance);
                operationChooser = 0;
            }
            if(operationChooser == 2)
            {
                std::cout << "Enter the sum of cash you want to get:" << std::endl;
                std::cin >> cash;
                Data.Database[acc_number].GetMoney(cash);
                operationChooser = 0;
            }
            if (operationChooser == 3)
            {
                Data.Database[acc_number].ShowAccount();
                operationChooser = 0;
            }
            if (operationChooser == 4)
            {
                Data.Deleting(Data.Database[acc_number].id);
                std::cout << "Account with id " << Data.Database[acc_number].id << " was successfully deleted" << std::endl;
                operationChooser = 0;
            }
            if (operationChooser == 5)
            {
                Data.BubbleSort();
                operationChooser = 0;
            }
            if (operationChooser == 6)
            {
                Data.InputVector();
                operationChooser = 0;
            }
            if (operationChooser == 7)
            {
                operationChooser = 0;
                break;
            } 
        }
    }
}
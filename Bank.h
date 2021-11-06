#include <iostream>
#include <vector>
#include "BankAccount.h"
class Bank
{
    public:
        std::vector<BankAccount> Database;
        void Adding(BankAccount NewAccount)
        {
            Database.push_back(NewAccount);
        }
        //void func(int, double)

        void Deleting(int id)
        {
            for (int i = 0; i < Database.size(); i++)
                if (Database[i].id == id)
                    Database.erase(Database.begin() + i);
        }

        void swap(BankAccount *pU1, BankAccount *pU2)
        {
            BankAccount temp = *pU1;
            *pU1 = *pU2;
            *pU2 = temp;
        }

        void BubbleSort()
        {
            int i, j;
            for (i = 0; i < Database.size() - 1; i++){
            for (j = 0; j < Database.size() - i - 1; j++)
                if ( Database[ j ].balance > Database[ j + 1 ].balance )
                    swap(&Database[ j ], &Database[ j + 1 ]);
            }
        }

        void InputVector(){
            for (int i = 0; i < Database.size(); i++)
            {
                std::cout << "-------------------" << std::endl;
                std::cout << "Account with id " << Database[i].id << " :" << std::endl;
                Database[i].ShowAccount();  
            }
          
        }
};
#include <iostream>
class BankAccount
{
    public:
        double balance;
        int id;
        std::string owner_name;
        void CreateAccount(int id, std::string owner_name, double balance)
        {
            this->id = id ;
            this->owner_name = owner_name;
            this->balance = balance;
        }

        void AddToBalance(int add)
        {
            this->balance += add;
            std::cout << "Your balance was replanished with " << add << " $" << std::endl;
        }

        void AddToBalance(double add)
        {
            this->balance += add;
            std::cout << "Your balance was replanished with " << add << " $" << std::endl;
        }

        void GetMoney(int getting){
            if (getting > this->balance)
            {
                std::cout << "You can not get more than " << this->balance << " $";
            }
            else
            {
                this->balance -= getting;
                std::cout << "Thanks for using our bank! You now got " << getting << " $" << std::endl;
            }
        }
        void GetMoney(double getting){
            if (getting > this->balance)
            {
                std::cout << "You can not get more than " << this->balance << " $" << std::endl;
            }
            else
            {
                this->balance -= getting;
                std::cout << "Thanks for using our bank! You now got " << getting << " $" << std::endl;
            }
            
        }
        void ShowAccount()
        {
            std::cout << "The owners id: " << this->id << std::endl;
            std::cout << "The owners name: " << this->owner_name << std::endl;
            std::cout << "The owners balance: " << this->balance << std::endl;
        }
};
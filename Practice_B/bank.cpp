#include <iostream>
#include <string>
using namespace std;

class Bank{
    private:
        double balance;
        string number;
        void checkBalance() {
            cout <<"Your balance: " << balance << endl;
        }
public:
    Bank(double balance, string number): balance(balance), number(number) {}

    void deposit(double add){
        balance+=add;
        std::cout<<"Funds replenished: "<<add<<std::endl;
        checkBalance();
    }

    void withdraw(double pin){
        balance-=pin;
        std::cout<<"\nWithdrawn funds: "<<pin<<std::endl;
        checkBalance();
    }

};

int main() {
    Bank Vanek(1000,"8952812");
    Vanek.deposit(5000);
    Vanek.withdraw(2000);
    return 0;
}

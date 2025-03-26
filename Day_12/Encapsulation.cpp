#include<iostream>
using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;
    
        public:
            BankAccount(string acc,double initialBalance){
                accountNumber = acc;
                balance = initialBalance;
            }

            //getter method for balance;
            double getBalance() const{
                return balance;
            }

            //method to deposite money

            void depositeMoney(double amount){
                if (amount > 0)
                {
                    balance = balance + amount;
                    cout<<"Deposited amount : "<<amount<<endl;
                }
                else{
                    cout<<"Amount invalid!"<<endl;
                }
            }

            //method for widthdraw

            void widthdrawAmount(double amount){
                if (amount > 0 && amount <= balance)
                {
                    balance = balance - amount;
                }
                else{
                    cout<<"Invalid amount or insufficient balance"<<endl;
                }
                
            }

            //method for getting account number

            string getAccountNumber(){
                return accountNumber;
            }

};

int main(){
    BankAccount bk("BK94856419652",500.00);
    cout<<"Account number : "<<bk.getAccountNumber();
    bk.depositeMoney(200);

    cout<<"Balance : "<<bk.getBalance()<<endl;

    bk.widthdrawAmount(100);

    cout<<"Balance : "<<bk.getBalance()<<endl;



    return 0;
}

// encapsulation is process of binding the data memebers and member functinos in single unit called class.
// used combine data and show only nessary details.
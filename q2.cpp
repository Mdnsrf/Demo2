#include <iostream>
#include <string>

using namespace std;

class Bank
{
private:
    int accountNo;
    string name;
    double balance;
    string dateOfBirth;
    static int totalaccount;

public:
    Bank()
    {
        accountNo = 0;
        name = "";
        balance = 0.0;
        dateOfBirth = "";
    }
    Bank(int accNo, const string &nm, double bal, const string &dob)
    {
        accountNo = accNo;
        name = nm;
        balance = bal;
        dateOfBirth = dob;
    }
    int getAccountNo() const
    {
        return accountNo;
    }
    void setAccountNo(int accNo)
    {
        accountNo = accNo;
    }
    const string &getName() const
    {
        return name;
    }
    void setName(const string &nm)
    {
        name = nm;
    }
    double getBalance() const
    {
        return balance;
    }

    void setBalance(double bal)
    {
        balance = bal;
    }

    const string &getDateOfBirth() const
    {
        return dateOfBirth;
    }

    void setDateOfBirth(const string &dob)
    {
        dateOfBirth = dob;
    }
    void getInfo() const
    {
        cout << "Account Number: " << accountNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: rs :" << balance << endl;
        cout << "Date of Birth: " << dateOfBirth << endl;
    }
    void setInfo(int accNo, const string &nm, double bal, const string &dob)
    {
        accountNo = accNo;
        name = nm;
        balance = bal;
        dateOfBirth = dob;
    }
    void deposit(int amount){
        this->balance = balance + amount;
    }
    void withdraw(int amount){
        this->balance = balance + amount;

    }
};
int main()
{
    Bank account1(1001, "pushpa", 100000, "03/21/1997");
    Bank account2(1002, "Shrivalli", 30000, "01/08/2002");

    cout << "Account 1 Information:" << endl;
    account1.getInfo();
    cout << endl;

    cout << "Account 2 Information:" << endl;
    account2.getInfo();
    cout << endl;

    double transferAmount = 9000;
    if (account1.getBalance() >= transferAmount)
    {
        account1.setBalance(account1.getBalance() - transferAmount);
        account2.setBalance(account2.getBalance() + transferAmount);
        cout << "Transfer successful!" << endl;
    }
    else
    {
        cout << "Insufficient balance for transfer." << endl;
    }

    cout << "Updated Account 1 Information: " << endl;
    account1.getInfo();
    cout << endl;
    cout << "Updated Account 2 Information: " << endl;
    account2.getInfo();
    cout << endl;
    account2.deposit(6000);
    return 0;
}

#include <iostream>
using namespace std;
class PMFund
{
  protected:
    int FundAmount=1000;
    int addFund(int amt)
    {
        return FundAmount+amt;
    }
};
class Bank : public PMFund
{
  protected:
    string BankName="SBI",IFSCode="SBI001";
    int bank(int amt)
    {
        return addFund(amt);
    }
};
class Customer : public Bank
{
  public:
    string Cust_Name="Sakshi Keshwani",Cust_Id="10Ab02";
    int BalanceAmount=5000;
    void getDetails()
    {
        cout<<" ------------------------------------"<<endl;
        cout<<"|      Welcome to SBI BANK           |"<<endl;
        cout<<" ------------------------------------"<<endl;
        cout<<"       Customer Name  : "<<Cust_Name<<endl;
        cout<<"       Customer ID  : "<<Cust_Id<<endl;
        cout<<"       Current Balance  : "<<BalanceAmount<<endl;
        cout<<"       Bank Name : "<<BankName<<endl;
        cout<<"       IFSC Code : "<<IFSCode<<endl;
    }
    void checkBalance()
    {
        cout<<"       You have received PM Fund  : "<<FundAmount<<endl;
        cout<<" ------------------------------------"<<endl;
        cout<<"       Updated Balance : "<<bank(BalanceAmount)<<endl;
        cout<<" ------------------------------------"<<endl;
    }
};
int main()
{
    Customer obj;
    obj.getDetails();
    obj.checkBalance();
    return 0;
}
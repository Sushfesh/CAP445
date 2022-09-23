// Income tax calculator
// Make income tax as a base class : class member --> taxAmount
// Make Employee as a dereived class inherting income tax : class member --> salary,name,desination
// If salary is more than 5 lakh, apply 10% tax
// Salary is less than 5 lakh, no tax applied
// Calculation of tax is to be done inside base class.
#include<iostream>
using namespace std;
class incomeTax
{
protected:
    float taxAmount;
    bool check(int salary)
    {
        if(salary>500000)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int getTax(int salary)
    {
        taxAmount=(salary-500000)*0.1;
        return taxAmount;
    }
};
class Employee : public incomeTax
{
public:
     int salary=400000;
    string ename="Sakshi Keshwani",desination="SDE-I";
    int key,amt;
    void setDetail()
    {
        cout<<" -------------------------------------------------"<<endl;
        cout<<"|      Welcome to income tax department           |"<<endl;
        cout<<" -------------------------------------------------"<<endl;
        cout<<"      Name : "<<ename<<endl;
        cout<<"      Desination : "<<desination<<endl;
        cout<<"      Primary Salary : "<<salary<<endl;
        cout<<"--------------------------------------------------"<<endl;
        cout<<"      Press 1 for adding other income source"<<endl;
        cout<<"      Press 0 for no other income sources"<<endl;
        cout<<"--------------------------------------------------"<<endl;
        cin>>key;
        if(key==1)
        {
            cout<<"      Enter income salary from other source : ";
            cin>>amt;
            salary+=amt;
        }
    }
    void getDetail()
    {
        cout<<"      Total income : "<<salary<<endl;
        if(check(salary)==true)
        {
            cout<<"      Amount more than 5 lakh : "<<salary-500000<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cout<<"      Income tax amount to be paid : "<<getTax(salary)<<endl;
        }
        else
        {
            cout<<"--------------------------------------------------"<<endl;
            cout<<"      Your income is less than 5 lakh."<<endl;
            cout<<"      No due income tax"<<endl;
        }
    }
};
int main()
{
    Employee obj;
    obj.setDetail();
    obj.getDetail();
}
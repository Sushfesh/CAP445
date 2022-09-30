//Write a program using class,object and methods that computes the tax and tip on a restaurant bill with a Rs.44.50 per meal charge. The tax should be 6.75% of the meal cost. The tip should be 15% of the total after adding the tax. Display the following
//-the meal cost,
//-tax amount
//-tip amount
//-total bill on the screen
#include<iostream>                                 //pre-processor statment
using namespace std;
class Restaurant                                  //Base class
{
protected:                                        //Access Specifier
    float mealCost,amount;                       //Base class memeber
public:
    Restaurant()                                 //Constructor
    {
        mealCost=44.50;
    }
    void setCost(int count)                     //Encapsulation
   {
      amount=mealCost*count;
   }
    float getCost()
   {
       return amount;
   }
};
//Multi-Level Inheritance
class Tax:public Restaurant                   //Child class inherting Base class
{
protected:
    float taxAmount,afterTax;
public:
    Tax()                                    //Default value of tax
    {
        taxAmount=0.0675;
    }
    void calculateTax()                        //Calculating tax
    {
        afterTax=getCost()*taxAmount;
    }
    float getTax()
    {
        return afterTax;
    }
};
class Tip:public Tax                //tip class inherting, tax class //Multi-level inheritance
{
public: 
    float tipAmount,total;
    Tip()
    {
        tipAmount=0.15;
    }
    void calculateTip()
    {
        total=(getCost()+getTax())*tipAmount;
    }
    double getTip()
    {
        return total;
    }
};
int main()
{
    int count;
    Tip obj;                         //object creation
    cout<<" ------------------------------------"<<endl;
    cout<<"|   Welcome to KITCHEN ETTE          |"<<endl;
    cout<<" ------------------------------------"<<endl;
    cout<<"Enter number of meals : ";
    cin>>count;
    obj.setCost(count);                //setting the value
    cout<<"------------------------------------"<<endl;
    cout<<"Number of meals : "<<count<<endl;
    cout<<"Total meal amount : "<<obj.getCost()<<endl;
    obj.calculateTax();                //calculating tax
    cout<<"Tax Amount : "<<obj.getTax()<<endl;
    obj.calculateTip();                //calculating tip
    cout<<"Tip Amount : "<<obj.getTip()<<endl;
    double totalBill=obj.getCost()+obj.getTax()+obj.getTip();             //total bill
    cout<<"------------------------------------"<<endl;
    cout<<"Total Amount : "<<totalBill<<endl;
    cout<<"------------------------------------"<<endl;
}
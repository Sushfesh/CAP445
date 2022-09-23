//Define Product Class with appropriate data memeber and methods. Find out net profit of a product after selling of product.
//You have to ask number of products for sell and you have to check availability of product
#include<iostream>
using namespace std;
class Product
{

    int quantity, cost, purchase,cp,sp,profit,gst,stock;
public:
    Product()
    {
        stock=10;
    }
    void check(int quantity)
    {
        if(quantity>stock)
        {
            cout<<"Insufficient amount of product."<<endl;
            exit(0);
        }
        else
        {
            cout<<"Calculating the net profit - - - - - - - - - - - - - - - - - - - - - >"<<endl;
        }
    }
    void Profit()
    {
        cp=this->quantity*purchase;
        sp=quantity*cost+gst;
        profit= sp-cp;
    }
    void show()
    {
       cout<<"Cost per product : "<<this->cost<<endl;
       cout<<"5% Gst charge : "<<this->gst<<endl;
       cout<<"Selling price : "<<sp<<endl;
       cout<<"Cost price : "<<cp<<endl;
       cout<<"- - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
       cout<<"Profit is : "<<profit<<endl;
       cout<<"- - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
    }
    void getQuantity(int quantity, int cost,int purchase)
    {
        this->quantity=quantity;
        this->cost=cost;
        this->purchase=purchase;
        this->gst=(0.05)*(cost*quantity);
    }
};
int main()
{
    int quantity, cost=100, purchase=60;
    cout<<"Welcome to the shop!!"<<endl;
    cout<<"Enter the quantity of products you want to buy : ";
    cin>>quantity;
    Product obj;
    obj.check(quantity);
    obj.getQuantity(quantity,cost,purchase);
    obj.Profit();
    obj.show();
    cout<<"Thanks for shopping!!!"<<endl;
    cout<<"- - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
    return 0;
}
//Define Product Class with appropriate data memeber and methods. Find out net profit of a product after selling of product.
//You have to ask number of products for sell and you have to check availability of product
//Pure Object Oriented Program
#include<iostream>
using namespace std;
class Product
{

    int quantity,cost,purchase,cp,sp,profit,gst,stock;
public:
    Product()
    {
        stock=2;
    }
    void setquantity(int quantity)
    {
        this->quantity=quantity;
    }
    void setcost(int cost)
    {
        this->cost=cost;
    }
    void setpurchase(int purchase)
    {
        this->purchase=purchase;
    }
    int getquantity()
    {
        return this->quantity;
    }
    int getcost()
    {
        return this->cost;
    }
    int getpurchase()
    {
        return this->purchase;
    }
    void check(int quantity)
    {
        if(getquantity()>stock)
        {
            cout<<"Insufficient amount of product."<<endl;
            exit(0);
        }
    }
    int Profit()
    {
        gst=(0.05)*(getcost()*getquantity());
        cp=this->getquantity()*getpurchase();
        sp=getquantity()*getcost()+gst;
        profit= sp-cp;
        return profit;
    }
    void show()
    {
       cout<<"- - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
       cout<<"Quantity : "<<getquantity()<<endl;
       cout<<"Cost per product : "<<getcost()<<endl;
       cout<<"5% Gst charge : "<<this->gst<<endl;
       cout<<"Selling price : "<<sp<<endl;
       cout<<"Cost price : "<<cp<<endl;
       cout<<"- - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
       cout<<"Profit is : "<<Profit()<<endl;
       cout<<"- - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
    }
};
int main()
{
    int quantity=0, cost=0, purchase=0;
    cout<<"- - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
    cout<<"Welcome to the shop!!"<<endl;
    Product obj;
    obj.setquantity(quantity);
    obj.setcost(cost);
    obj.setpurchase(purchase);
    obj.check(quantity);
    bool flag=true;
    int key;
        while(flag)
        {
            obj.check(quantity);
            cout<<"- - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
            cout<<"Press 1 for WHEAT FLOUR"<<endl;
            cout<<"Press 2 for CORN FLOUR"<<endl;
            cout<<"Press 3 for RICE"<<endl;
            cout<<"Press 4 for DAL"<<endl;
            cout<<"Press 5 for BREAD"<<endl;
            cout<<"Press 6 for EGGS"<<endl;
            cout<<"Press 7 for MILK"<<endl;
            cout<<"Press 8 for COFFEE"<<endl;
            cout<<"Press 9 to EXIST"<<endl;
            cout<<"- - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
            cout<<"Choose : ";
            cin>>key;
            if(key<=0)
            {
                flag=false;
                break;
            }
            switch(key)
            {
                case 1: obj.setquantity((obj.getquantity())+1); obj.setcost(obj.getcost()+100); obj.setpurchase(obj.getpurchase()+70);
                break;
                case 2: obj.setquantity((obj.getquantity())+1); obj.setcost(obj.getcost()+120);  obj.setpurchase(obj.getpurchase()+80);
                break;
                case 3: obj.setquantity((obj.getquantity())+1); obj.setcost(obj.getcost()+200); obj.setpurchase(obj.getpurchase()+140);
                break;
                case 4: obj.setquantity((obj.getquantity())+1); obj.setcost(obj.getcost()+180); obj.setpurchase(obj.getpurchase()+120);
                break;
                case 5: obj.setquantity((obj.getquantity())+1); obj.setcost(obj.getcost()+100); obj.setpurchase(obj.getpurchase()+70);
                break;
                case 6: obj.setquantity((obj.getquantity())+1); obj.setcost(obj.getcost()+40); obj.setpurchase(obj.getpurchase()+20);
                break;
                case 7: obj.setquantity((obj.getquantity())+1); obj.setcost(obj.getcost()+50); obj.setpurchase(obj.getpurchase()+30);
                break;
                case 8: obj.setquantity((obj.getquantity())+1); obj.setcost(obj.getcost()+100); obj.setpurchase(obj.getpurchase()+70);
                break;
                case 9: flag=false;
                break;

            }
        }
    obj.Profit();
    obj.show();
    cout<<"Thanks for shopping!!!"<<endl;
    cout<<"- - - - - -- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
    return 0;
}
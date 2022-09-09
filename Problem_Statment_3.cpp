//"Write a Program for shopping mall,In Shopping mall,there is a mobile shop,in this mobile shop you are getting offer if you will purchase mobile phone with power bank you will get 10% discount , but if you purchase any mobile or power bank you will get only 5% discount. Display this offer to the user screen whenever user is selecting the option.
//Select option:
//1.only Mobile
//2.Only powerbank
//3.mobile with powerbank
//4.nothing"
#include<iostream>                           
using namespace std;                                
int main()
{
   int option;
   cout<<"Select option:"<<endl<<"1. Only Mobile"<<endl<<"2. Only Powerbank"<<endl<<"3. Mobile + Powerbank"<<endl<<"4. Nothing"<<endl;
   cout<<"Choose : ";
   cin>>option;
   int dis;
   int mob_price=40000;
   int pow_price=5000;
   int price=0;
   switch(option)
   {
       case 1:
       price=mob_price;
       cout<<"Price of Mobile : "<<price<<endl;
       dis=(price*(0.05));
       break;
       case 2:
       price=pow_price;
       cout<<"Price of Powerbank : "<<price<<endl;
       dis=(price*(0.05));
       break;
       case 3:
       cout<<"Price of Mobile : "<<mob_price<<endl;
       cout<<"Price of Powerbank : "<<pow_price<<endl;
       price=mob_price+pow_price;
       cout<<"Price of Mobile + Powerbank : "<<price<<endl;
       dis=(price*(0.1));
       break;
       case 4:
       cout<<"Hurry up !! Sale is going on..."<<endl;
       exit(0);
       default:
       cout<<"Press valid key!!";
       exit(0);
   }
   price-=dis;
   cout<<"Discount applied : "<<dis<<endl;
   cout<<"Total Amount to pay : "<<price<<endl;
   cout<<"Thanks for visting !!!"<<endl;
   return 0;
}
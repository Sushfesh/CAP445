//"Suppose you are planning to go to park so you are going to check tickets criteria online. The ticket rates details have been given
//If children below 10 are not allowed to swing 
//If age is between 10 to 15 allowed to swing and getting 10 % discount
//If age is between 15 to 20 allowed to swing and getting 5 % discount
//If age is more than 20 not then not eligible for swing and discount 
//The age of person will run until you enter the age of last family member and then calculate the total charge amount after entering each person’s age. Assume price of ticket is 100 Rs. each person."
#include<iostream>                                 
using namespace std;                                  
int main()
{
   int age,count,charge=0;
   cout<<"WELCOME to LPU Park!!"<<endl;
   cout<<"How many members? : ";
   cin>>count;
   for(int i=1;i<=count;i++)
   {
       cout<<"Enter the age of the "<<i<<" children : ";
       cin>>age;
       int price=100;
       if(age<10 || age>20)
       {
          cout<<"Not allowed to swing"<<endl;
          continue;
       }
       else if(age>10 && age<15)
       {
           cout<<"Allowed to swing"<<endl;
           int dis=(100*(0.1));
           cout<<"Applied discount : "<<dis<<endl;
           price-=dis;
           cout<<"Charge for "<<i<<"st children : "<<price<<endl;
       }
       else if(age>15 && age<20)
       {
          cout<<"Allowed to swing"<<endl;
          int dis=(100*(0.05));
          cout<<"Applied discount : "<<dis<<endl;
          price-=dis;
          cout<<"Charge for "<<i<<"st children : "<<price<<endl;
       }
       charge+=price;
   }
   cout<<endl<<"Total amount to pay : "<<charge<<endl;
   return 0;
}
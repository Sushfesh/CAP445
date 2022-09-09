//Calculate birthday according to age.
#include<iostream>                                     //header file
using namespace std;                                   //standard name
int main()
{
   int date,month,year;
   cout<<"Enter your Birth-date : ";
   cin>>date;
   cout<<"Enter your Birth-Month : ";
   cin>>month;
   cout<<"Enter your Birth-Year : ";
   cin>>year;
   int age=2022-year;
   if(age>0)
   {
       cout<<endl<<"HURRAYY!! you have lived "<<age<<" years..."<<endl;
   }
   else
   {
       cout<<"Enter year less than 2022"<<endl;
   }
   return 0;
}
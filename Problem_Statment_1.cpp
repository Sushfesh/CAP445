//One bank customer has to perform transaction withdraw and deposit operation with some conditions
//Min bal amount you have to maintain is 1,000 ruppee
//You will be not allow to withdrawal amount if your amount is will be more than bal amount
//in this display insufficient balance
//After Deposit, display updated balance
#include<iostream>                                     //header file
using namespace std;                                   //standard name
int main()
{
    int withdraw,deposit,key;
    int bal=8000;
    cout<<"For Deposit,  Press 1 "<<endl;
    cout<<"For Withdraw, Press 2 "<<endl;
    cin>>key;
    if(key==1)
    {
        cout<<"Enter amount to deposit : "<<endl;
        cin>>deposit;
        bal=bal+deposit;
    }
    else if(key==2)
    {
        cout<<"Enter amount to withdraw : "<<endl;
        cin>>withdraw;
        if(bal>(withdraw+1000))           //Min bal amount you have to maintain is 1,000 ruppee
        {
            bal=bal-withdraw;
        }
        else if(bal<withdraw)
        {
            cout<<"Enter amount less than "<<bal<<endl;
        }
    }
    cout<<"Updated balance is : "<<bal<<endl;
   return 0;
}
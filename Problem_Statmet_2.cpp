//Generate electricity bill
//If meter reading(unit) is more than 100, then chargable amount will be 9 Rs/unit.
//If meter reading is less than 100, then chargable amount will be 5 Rs/unit.
//Calculate bill 
//meter reading = 150 -> 50*9 + 100*5 = 450+500 = 950
#include<iostream>                
using namespace std; 
int main()
{
    int meter;
    cout<<"Enter meter reading : ";
    cin>>meter;
    int ans;
    if(meter>100)
    {
        int extra=meter-100; 
        cout<<"Unit more than 100 : "<<extra<<endl;
        cout<<"Pay Rs 9/unit : "<<extra*9<<endl; 
        cout<<"Pay Rs 5/unit : "<<100*5<<endl; 
        ans=extra*9+100*5;
    }
    else
    {
        ans=meter*5;
    }
    cout<<"Final payable bill is : "<<ans<<endl;
    return 0;
}
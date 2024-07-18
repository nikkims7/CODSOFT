#include<iostream>
using namespace std;

int main()
{
    double number1, number2;

    int x;

    cout<<"\t\t\tSIMPLE CALCULATOR\t\t\t"<<endl;

    cout<<"enter a number 1"<<endl;
    cin>>number1;

    cout<<"enter a number 2"<<endl;
    cin>>number2;

    cout<<"press 1 for addition"<<endl;
    cout<<"press 2 for substraction"<<endl;
    cout<<"press 3 for division"<<endl;
    cout<<"press 4 for multiplacation"<<endl;

    cin>>x;

    

    if(x== 1)
    {
        cout<<"The total sum = "<<number1 + number2<<endl;
    }
    else if(x == 2)
    {
        cout<<"The substraction = "<<number1-number2<<endl;

    }
    else if(x == 3)
    {
        cout<<"The division = "<<number1/(double)number2<<endl;
    }
    else if(x==4)
    {
        cout<<"The multiplacation = "<<number1*number2<<endl;
    }
    
    else{
        cout<<"you enter a invalid operation"<<endl;
    }
   


 return 0;

}
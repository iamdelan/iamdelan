#include<iostream>
using namespace std;
int main()
{
    float num1, num2, res;
    int choice;
    do
    {
        cout<<"1.Addition\n";
        cout<<"2.substraction\n";
        cout<<"3.Multiplication\n";
        cout<<"4.Division\n";
        cout<<"5.exit\n\n";
        cout<<"enter your choice(1-5):";
        cin>>choice;
        if(choice>=1&&choice<=4)
        {
           cout<<"\nEnter any two number:";
           cin>>num1>>num2;
        }
        switch(choice)
        {
            case 1:
                res = num1+num2;
                cout<<"\nResults="<<res;
                break;
            case 2:
                res = num1-num2;
                cout<<"\nResult = "<<res;
                break;
            case 3:
                res = num1*num2;
                cout<<"\nResult = "<<res;
                break;
            case 4:
                res = num1/num2;
                cout<<"\nResult = "<<res;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
         cout<<"\n-----------\n";
    }while(choice!=5);
    cout<<endl;
    return 0;
}







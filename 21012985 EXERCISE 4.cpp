#include <iostream>
using namespace std;

int main()
{
    int a;
    int b; //enteger 1
    int c; //enteger 2
    char d;

    do
        {
        cout <<"MENU"<<endl;
        cout<<"eneter your choice"<<endl;
        cout<<"1.Addition"<<endl;
        cout<<"2.Substraction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4.Division: "<<endl;
        cout<<""<<endl;

        cin >> a;

        cout << "Enter enteger1 "<<endl;
        cin >> b;
        cout<<""<<endl;
        cout << "Enter enterger2 "<<endl;
        cout<<""<<endl;
        cin >> c;
        cout<<""<<endl;

        switch (a)
        {
            case 1:
                cout << "sum of enteger1 and enteger2 = " << c + d <<endl;
                cout<<""<<endl;
                break;
            case 2:
                cout << "difference of enteger1 and enteger2 = " << c - d <<endl;
                cout<<""<<endl;
                break;
            case 3:
                std::cout << "product of enteger1 and enterger2 " << b * c <<endl;
                cout<<""<<endl;
                break;
            case 4:
                if (c == 0) {
                    cout << "The second integer is zero, divide by zero"<<endl;
                } else {
                    cout << "product of integer1 and integer2 " << b / c <<endl;
                }
                break;
            default:
                cout << "wrong choice"<<endl;
                break;
        }

        cout << "Press y or Y to continue: " <<endl;
        cin >> d;
    } while (d == 'Y' || d == 'y');

    return 0;
}

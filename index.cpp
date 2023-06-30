#include <iostream>

using namespace std;

int main () {

    cout << "Enter Three Digits Number : " ;
    int i;

    while (true)
    {
        cin >> i;
        if ( i > 99 && i < 1000)
        {
            break;
        }
        else {
            cout << "Thats Not A Three Digit Number , Please Try Again .. " << endl;
                cout <<endl<<endl;

        }
    }

    cout <<endl<<endl;


    int x,y,z;

    x=i/100;
    y=i/10%10;
    z=i%10%100;

    int a,b,c;

    a = x*x*x;
    b = y*y*y;
    c = z*z*z;

    if (a+b+c == i) {

        cout << i << " Is Armstrong Number !!" << endl;
    }
    else {
                cout << i << " Is Not Armstrong Number !!" << endl;

    }
    cout <<endl<<endl;

    cout <<endl<<endl;

}

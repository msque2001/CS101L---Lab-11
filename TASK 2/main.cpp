#include <iostream>
using namespace std;

int exponential(int, int);
    
int main()
{
    //TASK 2 -----------------------------------------------------------------------------------
    cout << "TASK 1\n" << endl;
    int base, exponent;
    cout << "Please enter the base: ", cin >> base, cout << endl;
    cout << "Please enter the exponent: ", cin >> exponent, cout << endl;
    cout << base << " ^ " << exponent << " = " << exponential(base, exponent) << endl;
    



    return 0;
}


int exponential(int y, int e)
{
    if(e == 1)
    {
        return y;
    }

    else
    {
        return y * exponential(y, e - 1);
    }
}
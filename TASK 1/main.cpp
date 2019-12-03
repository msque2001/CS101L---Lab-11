#include <iostream>
using namespace std;

int natural_sum(int);


int main()
{
    //TASK 1 -----------------------------------------------------------------------------------
    cout << "TASK 1\n" << endl;
    int x;
    cout << "Please enter a positive number:\t", cin >> x, cout << endl;
    cout << "Sum = " << natural_sum(x) << endl;

    return 0;

}

int natural_sum(int x)
{
    if(x == 1)
    {
        return 1;
    }

    else
    {
        return x += natural_sum(x - 1);
    }
}

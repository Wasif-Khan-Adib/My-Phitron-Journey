#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double d = 23.45676;
    //cout << d<< endl;

    cout << fixed << setprecision(2) << d << endl;  // doshomid er por koyta value chai seta setprecision diye korte hobe
    return 0;
}
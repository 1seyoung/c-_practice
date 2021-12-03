#include <iostream>
using namespace std;
int main(void)
{
    int num1;
    cin >> num1;
    int num2;
    cin >> num2;

    double result =(double)num1 /(double)num2;
    cout.precision(12);
    cout <<fixed;
    cout << result;

    return 0;
}
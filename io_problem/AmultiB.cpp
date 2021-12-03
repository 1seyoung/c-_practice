#include <iostream>
using namespace std;
int main(void)
{
    int a,b,c;
    cin >> a;
    cin >> b;

    c = b;
    int num[3];
    int i=0;
    while(b!=0){
        num[i] = b%10;
        b /= 10;
        i++;

    }

    cout << a *num[0]<<endl;
    cout << a *num[1]<<endl;
    cout << a *num[2]<<endl;
    cout << a*c<<endl;
    return 0;
}

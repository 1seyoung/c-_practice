//어느 사분면에 속하는지 알아내는 것

#include <iostream>
using namespace std;
int main(void)
{
    int x,y;
    cin >> x;
    cin >> y;
    

    if ((x<0)&&(y<0))
        cout <<'3';
    else if ((x<0)&&(y>0))
    	cout <<"2";
    else if ((x>0)&&(y>0))
    	cout <<"1";
    else 
    	cout <<"4";

    return 0;


}
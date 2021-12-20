#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);   // C, C++ 동기화 해제
    cin.tie(NULL);  // 입력과 출력을 분리


    while(1){
        int a,b;
        cin >>a;
        cin >>b;

        if (a==0 && b==0)
            break;
        else
            cout << a+b<<endl;
    }

}
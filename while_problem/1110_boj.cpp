#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);   // C, C++ 동기화 해제
    cin.tie(NULL);  // 입력과 출력을 분리
    int num,n,a;
    num = 1;
    cin >> n;
    a=n;
    while(true){
        n = (((n%10)+(n/10))%10) +((n%10)*10);
        

        

        if (a== n){
            
            break;

        }
        else
            num ++;

        
    }

    cout<<num<<endl;

}
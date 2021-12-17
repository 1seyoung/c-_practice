#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);   // C, C++ 동기화 해제
    cin.tie(NULL);  // 입력과 출력을 분리
    int n,a,b;
    cin >> n;


    for(int i=0 ;i<n;i++){
        cin >>a;
        cin >>b;

        cout << a+b<<"\n";
    }
    return 0;

}
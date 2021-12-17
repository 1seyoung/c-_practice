#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);   // C, C++ 동기화 해제
    cin.tie(NULL);  // 입력과 출력을 분리
    int n;
    cin >> n;

    if (n <0||n>100)
        return 0;




    for(int i=1 ;i<=n;i++){
        for (int j =0;j<i;j++){
            for (int k=n-i;k>0;k--){
               cout <<" ";
            }
            cout <<"*";
        }
        cout << "\n";
    }
   

}
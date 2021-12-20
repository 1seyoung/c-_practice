#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);   // C, C++ 동기화 해제
    cin.tie(NULL);  // 입력과 출력을 분리
    int num,max;

    

    int arr[10];

    for(int i =0;i<10;i++){
        cin >> arr[i];
    }
    max =arr[0];
    num = 0;


    for(int j=0;j<10;j++){
        if (arr[j]>= max) {
            max = arr[j];
            num = j+1;
        }
        
    }
    cout << max <<"\n"<<num;

}
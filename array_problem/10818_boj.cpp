#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);   // C, C++ 동기화 해제
    cin.tie(NULL);  // 입력과 출력을 분리
    int n,min,max;

    cin>>n;

    int arr[n];

    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    min =arr[0];
    max = arr[0];

    for(int j=0;j<n;j++){
        if (arr[j]<= min) {
            min = arr[j];
        }

    }
    for(int j=0;j<n;j++){
        if (arr[j]>= max) {
            max = arr[j];
        }
        
    }
    cout << min <<" "<<max;

}
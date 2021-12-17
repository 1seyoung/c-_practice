
#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);   // C, C++ 동기화 해제
    cin.tie(NULL);  // 입력과 출력을 분리
    int n,x;

    cin >> n;
    cin >> x;
    int array[n];
    
    for(int i=0;i<n;i++){
    	
    	cin >> array[i];
    	
    }


    for(int j=0;j<n;j++){
    	if (array[j]<x){
    		cout << array[j]<<" ";
    	}
    }
   

}
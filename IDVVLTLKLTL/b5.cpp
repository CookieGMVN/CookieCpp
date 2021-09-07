//b5.cpp
#include <iostream>

using namespace std;
int limit;
int arr[10000];

int main(){
    cin >> limit;
    for (int i=0; i<limit; i++){
        cin >> arr[i];
        if (arr[i] <= 0){
            cout << "Invalid Input!" << endl;
            return 0;
        }
        if (arr[i] > 100){
            cout << "Invalid Input!" << endl;
            return 0;
        }
    }
    for (int i=0; i<=limit; i++){
        if ((arr[i] + 5) % 10 == 0){
            cout << arr[i] << " ";
        }
    }
}

//b4.cpp
#include <iostream>

using namespace std;
int arr[10000], limit, total;

int main()
{
    cin >> limit;
    for (int i=0; i<limit; i++){
        cin >> arr[i];
        if (arr[i] < 0){
            cout << "Invalid Input!" << endl;
            return 0;
        }
        if (arr[i] > 100){
            cout << "Invalid Input!" << endl;
            return 0;
        }
    }
    for (int i=0; i<limit; i++){
        total = total + arr[i];
    }
    cout << total;
}

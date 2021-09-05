#include <iostream>
#include <math.h>

using namespace std;
int input;
int eggs;

int main()
{
    cout << "Nhap so trung!";
    cin >> input;
    if (input < 0 || input > pow(10, 9)){
        cout << "Sai dinh dang nhap vao!" << endl;
        return 0;
    }
    if (input > 0){
        eggs = input * 12;
        cout << eggs;
    }
}

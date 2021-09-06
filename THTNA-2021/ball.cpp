/*ball.cpp. For another infomation, visit main.cpp*/
#include <iostream>
#include <math.h>

using namespace std;
int a, b, c;

int findValue(int a, int b, int c){
    int maxvalue;
    int value;
    //Tìm value lớn nhất
    if (a > maxvalue) maxvalue = a;
    if (b > maxvalue) maxvalue = b;
    if (c > maxvalue) maxvalue = c;
    //Tìm value lớn nhì
    if (a > value && a < maxvalue) value = a;
    if (b > value && b < maxvalue) value = b;
    if (c > value && c < maxvalue) value =c;
    return value;
}

int main()
{
    cin >> a; cin >> b; cin >> c;
    int max = findValue(a, b, c);
    cout << max;
}

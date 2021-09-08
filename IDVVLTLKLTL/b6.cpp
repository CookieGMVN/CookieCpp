//b6.cpp
#include <iostream>
#include <math.h>
 
using namespace std;
 
void scp(int n){
    int sqr = sqrt(n);
    if(sqr*sqr == n){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

int main(){
    int n;
    cin >> n;
    scp(n);
}

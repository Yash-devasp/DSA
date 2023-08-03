#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a;
    cin >> a;

    int binary = 0;
    int i=0;
    while(a != 0){
        int bit = a & 1;
        binary = (pow(10,i++) * bit) + binary;
        a >>= 1;
    }

    cout << "Binary is: " << binary << endl;

    cin >> a;
    a = ~a;
    a = a + 1;
    binary = 0;
    i=0;
    while(a != 0){
        int bit = a & 1;
        binary = (pow(10,i++) * bit) + binary;
        a >>= 1;
    }
    cout << "Binary is: " << binary << endl;

    cin >> a;
    int decimal = 0;
    i=0;
    while(a != 0){
        int digit = a % 10;
        decimal = (pow(2,i++) * digit) + decimal;
        a /=10;
    }
    cout << "Decimal is: " << decimal << endl;
}
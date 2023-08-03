#include<iostream>
using namespace std;

int main(){

    int n;

    cout << "Enter the value N" << endl;
    cin >> n;

    int i = 1;
    int sum = 0;

    while( i <= n){
        if(i % 2 == 0){
            sum += i;
        }
        i++;
    }
    cout << "Sum: " << sum << endl;

    double f = 0.0;
    i = 1;

    while(i <= 10){
        cout << f << " farenheit is equal to " << ((f - 32) * (5.0/9.0)) << endl;
        f += 5;
        i++;
    }

    i = 2;
    bool isPrime = 1;
    while( i < n){
        if(n%i==0){
            isPrime = 0;
            break;
        }
        i++;
    }

    if(isPrime){
        cout << n << " is Prime";
    }else {
        cout << n << " is not Prime";
    }
}
#include<iostream>
using namespace std;

int main(){

    char ch;

    cout << "Enter a character" << endl;
    cin >> ch;

    if(ch >= 97 && ch <= 122){
        cout << "The character is lowercase" <<endl;
    }else if(ch >= 65 && ch <= 90){
        cout << "The character is uppercase"<<endl;
    }else if(ch >= 48 && ch <= 57){
        cout << "The character is numeric" << endl;
    }else{
        cout << "The character is a special character" << endl;
    }
}
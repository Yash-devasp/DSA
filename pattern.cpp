#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    int j;
    while(i <= n){
        j = 1;
        while(j <= n){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    i = 1;
    while(i <= n){
        j = 1;
        while(j <= n){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    i = 1;
    while(i <= n){
        j = 1;
        while(j <= n){
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    i = n;
    while(i >= 1){
        j = n;
        while(j >= 1){
            cout << j << " ";
            j--;
        }
        cout << endl;
        i--;
    }

    i = n;
    int k = 1;
    while(i >= 1){
        j = n;
        while(j >= 1){
            cout << k << " ";
            j--;
            k++;
        }
        cout << endl;
        i--;
    }

    i = 1;
    while(i <= n){
        j = 1;
        while(j <= i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    i = 1;
    while(i <= n){
        j = 1;
        while(j <= i){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    i = 1;
    k = 1;
    while(i <= n){
        j = 1;
        while(j <= i){
            cout << k << " ";
            j++;
            k++;
        }
        cout << endl;
        i++;
    }

    i = 1;
    while(i <= n){
        j = 1;
        k = i;
        while(j <= i){
            cout << k << " ";
            j++;
            k++;
        }
        cout << endl;
        i++;
    }

    i = 1;
    while(i <= n){
        j = 1;
        k = i;
        while(j <= i){
            cout << k << " ";
            j++;
            k--;
        }
        cout << endl;
        i++;
    }

    i = 1;
    char ch = 'a';
    while(i <= n){
        j = 1;
        while(j <= n){
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
        ch++;
    }

    i = 1;
    while(i <= n){
        j = 1;
        ch = 'a';
        while(j <= n){
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }

    i = 1;
    ch = 'a';
    while(i <= n){
        j = 1;
        while(j <= n){
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }

    i = 1;
    
    while(i <= n){
        j = 1;
        ch = 'a' + i - 1;
        while(j <= n){
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }

    i=1;
    while(i <= n){
        j = 1;
        ch = 'a' + i - 1;
        while(j <= i){
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    i=1;
    ch = 'a' + i - 1;
    while(i <= n){
        j = 1;
        while(j <= i){
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }

    i=1;
    while(i <= n){
        j = 1;
        ch = 'a' + n - i;
        while(j <= i){
            cout << ch << " ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }

    i=1;
    while(i <= n){
        j = 1;
        ch = 'a' + i - 1;
        while(j <= n){
            cout << ch;
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }

    i = 1;
    while(i <= n){
        int s = n - i;
        while(s > 0){
            cout << " ";
            s--;
        }
        j=1;
        while(j<=i){
            cout << "*";
            j++;
        }
        i++;
        cout<<endl;
    }

    i = 1;
    while(i <= n){
        j=i;
        while(j<=n){
            cout << "*";
            j++;
        }
        i++;
        cout<<endl;
    }

    i = 1;
    while(i <= n){
        int s = 1;
        while(s < i){
            cout << " ";
            s++;
        }
        j=i;
        while(j<=n){
            cout << "*";
            j++;
        }
        i++;
        cout<<endl;
    }

    i = 1;
    while(i <= n){
        int s = 1;
        while(s < i){
            cout << " ";
            s++;
        }
        j=i;
        while(j<=n){
            cout << i;
            j++;
        }
        i++;
        cout<<endl;
    }

    i = 1;
    while(i <= n){
        int s = n-i;
        while(s >0){
            cout << " ";
            s--;
        }
        j=1;
        while(j<=i){
            cout << i;
            j++;
        }
        i++;
        cout<<endl;
    }

    i = 1;
    k=1;
    while(i <= n){
        int s = n-i;
        while(s >0){
            cout << " ";
            s--;
        }
        j=1;
        while(j<=i){
            cout << k++;
            j++;
        }
        i++;
        cout<<endl;
    }

    i = 1;
    while(i <= n){
        int s = 1;
        while(s < i){
            cout << " ";
            s++;
        }
        j=i;
        while(j<=n){
            cout << j;
            j++;
        }
        i++;
        cout<<endl;
    }

    i = 1;
    while(i <= n){
        int s = n-i;
        while(s >0){
            cout << " ";
            s--;
        }
        j=1;
        while(j<=i){
            cout << j;
            j++;
        }
        k = i-1;
        while(k>=1){
            cout << k;
            k--;
        }
        i++;
        cout<<endl;
    }

    i = 1;
    while(i <= n){
        j=1;
        while(j <= n-i+1){
            cout << j;
            j++;
        }
        int s = 1;
        while(s <= (2*i - 2)){
            cout << "*";
            s++;
        }
        k=n-i+1;
        while(k > 0){
            cout << k;
            k--;
        }
        i++;
        cout << endl;
    }
}
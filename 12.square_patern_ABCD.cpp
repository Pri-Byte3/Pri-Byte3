#include <iostream>
using namespace std; 

int main(){
    int n, i, j;
    char ch;
    cout << "Enter the value of n : ";
    cin >> n;
    for(i=0 ; i<n ; i++){
        ch = 'A';
        for(j=0 ; j<n ; j++){
            cout << ch << " ";
            ch++ ;
        }
        cout << "\n";
    }
    return 0;
}
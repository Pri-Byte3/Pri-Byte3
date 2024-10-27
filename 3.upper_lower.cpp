#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter character : ";
    cin >> ch;

    if(ch >= 'A' && ch<= 'Z'){
        cout << "upper case\n";
    }else{
        cout << "lower case\n";
    }

    return 0;
}
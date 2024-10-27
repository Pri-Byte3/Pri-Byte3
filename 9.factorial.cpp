#include <iostream>
using namespace std; 

int main(){
    int n , fact = 1 ;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i=1 ; i<=n ; i++){
        //cout << i << " ";
        fact *= i;
    }
    
    cout << "Total = " << fact << "\n";
    return 0;
}
 
#include <iostream>
using namespace std; 

int main(){
    int n , sum = 0 ;
    cout << "Enter the value of n : ";
    cin >> n;

    for(int i=1 ; i<=n ; i++){
        if(i%2==1){
            sum += i;
        }
    }
    
    cout << "Total = " << sum << "\n";
    return 0;
}
 
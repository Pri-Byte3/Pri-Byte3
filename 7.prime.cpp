// #include <iostream>
// using namespace std;

// int main(){
//     int n , i;
//     cout << "Enter number : ";
//     cin >> n;
//     for(i=2 ; i*i <= n ; i++){
//         if(n%i == 0 ){
//             cout << "Not a Prime number\n";
//             break;
//         }else{
//             cout << "Prime number\n";
//         }
//     }
    

//     return 0;
// }
#include <iostream>
using namespace std;
int main (){
    int n = 11;
    bool isPrime = true;
    for(int i=2;i*i<=n; i++) {
        if(n % i == 0){ //non prime
            isPrime = false;
            break;
        }
    }    
    if(isPrime == true)  {
        cout << "prime no\n";
    } else {
    cout << "non prime no\n";
    }
    return 0;
}    
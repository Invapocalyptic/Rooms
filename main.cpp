#include <iostream>

using namespace std;

int main(){
    int arrLimit = 100;
    int arr[arrLimit];
    for ( int i = 0; i<100; i++){
        arr[i] = i+1;
    }
    for ( int elem : arr){
        int sum = 0;
        sum += elem;
        cout << sum << endl;
    } 
    
    // for ( int elem : arr){
    //     cout << elem << endl;
    // }
    return 0;
} 
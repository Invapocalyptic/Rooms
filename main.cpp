#include <iostream>

using namespace std;

int isItIn(char search, int arrLimit, char array[arrLimit]){
    
    for ( char letter : arr){
        if ( search == letter){
            return 1;
        }
        
    }
    return 0;
}

int main(){
    int arrLim = 8;
    char arr[arrLim] = {'a','b','c','d','e','f','g','h'};
    char searchLetter;
    cout << "is that an ";
    cin >> searchLetter;
    cout << " in the list";
    isItIn(searchLetter, arrLim, arr)
    if(isItIn == 0){
        cout << "no match";
    }else if(isItIn == 1) { 
        cout << "yes, there is";
    }

    return 0;
} 
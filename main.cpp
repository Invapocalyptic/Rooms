#include <iostream>

using namespace std;

int main(){
    int arrLimit = 8;
    char arr[arrLimit] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

    for(char letter : arr){
        cout << letter << " ";
    }
    cout << endl;

    int start = 0;
    int end = arrLimit-1;
    while (start < end){
        char temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;

    }
    for(char letter : arr){
        cout << letter << " ";
    }

    return 0;
} 
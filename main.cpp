#include <iostream>

using namespace std;
void reverseArray(char array[]){
    int limit = array.length;
    int num = limit;
    char reversedArray[];
    for (char letter : array){
        reversedArray[num] = letter
        num--
    }
    
    for(char letter : reversedArray){
        cout << letter << endl;
    }
}
int main(){
    int arrLimit = 8;
    char arr[arrLimit] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    reverseArray(arr);
    return 0;
} 
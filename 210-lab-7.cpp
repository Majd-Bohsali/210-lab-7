// COMSC-210 | Lab 7 | Majd Bohsali
// IDE used: Visual Studio Code
#include <iostream>
using namespace std;

const int SIZE = 5;
//string* reverseArray(string* arr);
void displayArray(string* arr);

int main() {
    string* arrPtr = new string[SIZE] {"Janet", "Jeff", "Jin", "Joe", "Junio"};
    cout << "Original array: "; 
    displayArray(arrPtr); 
    cout << "Reversed array: "; 
    displayArray(arrPtr);
    delete [] arrPtr; 
    return 0; 
}

//string* reverseArray(string* arr) { 
//
//}

// displayArray(string* arr) outputs content of dynamic double array to console 
// arguments: string* arr
// returns: None
void displayArray(string* arr) { 
    for(int i = 0; i < SIZE; i++) { 
        cout << arr[i] << " ";
    }
    cout << endl; 
}

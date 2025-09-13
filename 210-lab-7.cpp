// COMSC-210 | Lab 7 | Majd Bohsali
// IDE used: Visual Studio Code
#include <iostream>
using namespace std;

const int SIZE = 5;
string* reverseArray(string* arr);
void displayArray(string* arr);

int main() {
    string* arrPtr = new string[SIZE] {"Janet", "Jeff", "Jin", "Joe", "Junio"};
    cout << "Original array: "; 
    displayArray(arrPtr); 
    arrPtr = reverseArray(arrPtr);
    cout << "Reversed array: "; 
    displayArray(arrPtr);
    delete [] arrPtr; 
    return 0; 
}

// reverseArray(string* arr) reverses content of dynamic array
// arguments: string* arr
// returns: pointer to the reversed array 
string* reverseArray(string* arr) { 
    string* revArray = new string[SIZE]; 
    for (int i = 0; i < SIZE; i++) { 
        revArray[i] = arr[SIZE - 1 - i];
    }
    return revArray;
}

// displayArray(string* arr) outputs content of dynamic double array to console 
// arguments: string* arr
// returns: None
void displayArray(string* arr) { 
    for(int i = 0; i < SIZE; i++) { 
        cout << arr[i] << " ";
    }
    cout << endl; 
}

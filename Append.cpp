#include <iostream>
using namespace std;

int main() {
    int size = 5; //intialize array size
    int length = 5; // length of elements
    int* arr = new int[size]; //dynamic array

    // intialize array values 
    for (int i=0; i < length; i++) {
        arr[i] = i + 1;
    }
    // print array
    cout << "print array: ";
    for (int i = 0; i < length; i++) {
        cout << arr [i] << " ";

    }
     int newelement = 6;
     size++;
     int* newArr = new int[size];

     for (int i = 0; i < length; i++) {
        newArr[i] = arr[i];

     }

     newArr[length] = newelement;
     length++;

     cout << "new array: ";
     for (int i=0; i <length; i++) {
        cout << newArr[i] << " ";

     }
     // delete old array
     delete[] arr;

     // delete new array

     delete[] newArr;

     return 0;



}
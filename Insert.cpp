#include <iostream>
using namespace std;

int main () {
    int size = 5;
    int length = 5;
    int* arr = new int[size];

    
    for (int i = 0; i < length; i++) {
        arr[i] = i + 1;
    }

    
    cout << "Previous array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    

    int indexToInsert = 2;
    int newElement = 10;

    
    int* newArr = new int[++size];


    for (int i = 0, j = 0; i < length; i++, j++) {
        if (i == indexToInsert) {
            newArr[j++] = newElement;  
        }
        newArr[j] = arr[i];  
    }

    
    cout << "New array: ";
    for (int i = 0; i < size; i++) {
        cout << newArr[i] << " ";
    }
    

    
    delete[] arr;
    delete[] newArr;

    return 0;
}

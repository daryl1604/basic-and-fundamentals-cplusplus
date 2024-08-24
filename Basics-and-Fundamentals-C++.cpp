// Daryl Vince De Castro  C2A

#include <iostream>

using namespace std;

int main() {
    const int maxSize = 10;
    int array1[maxSize], array2[maxSize], mergedArray[2 * maxSize];
    int size1, size2;

    cout << "Enter the number of elements for the first array (up to 10): ";
    cin >> size1;
    cout << "Enter elements for the first array:\n";
    for (int i = 0; i < size1; i++) {
        cin >> array1[i];
    }

    cout << "Enter the number of elements for the second array (up to 10): ";
    cin >> size2;
    cout << "Enter elements for the second array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> array2[i];
    }

    for (int i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = array2[i];
    }

    int mergedSize = size1 + size2;
    for (int i = 0; i < mergedSize - 1; i++) {
        for (int j = 0; j < mergedSize - 1 - i; j++) {
            if (mergedArray[j] < mergedArray[j + 1]) {
                int temp = mergedArray[j];
                mergedArray[j] = mergedArray[j + 1];
                mergedArray[j + 1] = temp;
            }
        }
    }

    cout << "Merged array in descending order:\n";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
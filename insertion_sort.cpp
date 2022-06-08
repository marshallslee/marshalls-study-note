#include <iostream>

using namespace std;

int main(void) {
    int arr[10] = {9, 0, 8, 1, 7, 2, 6, 3, 5, 4};

    int key, j;
    for(int i=1; i<10; i++) {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }

    for(int k=0; k<10; k++) {
        cout << *(arr + k) << " ";
    }

    cout << endl;
    return 0;
}
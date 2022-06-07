#include <iostream>

using namespace std;


int main(void) {
    int arr[10] = {9, 0, 1, 8, 2, 7, 6, 3, 5, 4};
    for(int i=0; i<10; i++) {
        for(int j=0; j<10-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int k=0; k<10; k++) {
        cout << *(arr + k) << " ";
    }
    cout << endl;
    return 0;
}
#include <iostream>

using namespace std;

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    // 각 숫자를 적절한 위치에 삽입하는 정렬
    int arr[10] = {5, 3, 7, 1, 2, 9, 10, 8, 4, 6};
    // 3, 5, 7, 4
    for (int i = 0; i < 9; i++) {
        for (int j = i; j >= 0; j--) {
            while(arr[j] > arr[j+1] && j >= 0) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
}
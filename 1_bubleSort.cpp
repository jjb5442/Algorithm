#include <iostream>

using namespace std;

// 옆에 있는 값과 비교하여 더 작은 값을 반복적으로 앞으로 보내는 정렬

void swap(int* a, int* b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int arr[10] = {5, 3, 7, 1, 2, 9, 10, 8, 4, 6};
    int size = 10;

    for (int i = 10; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if(arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
}
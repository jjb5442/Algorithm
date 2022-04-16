#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void quickSort(int* arr, int left, int right) {
    if (left >= right) return;
    int pivot = left;
    int l = left + 1, r = right;

    while (l <= r) {
        if (arr[l] < arr[pivot] && l <= right) l++;
        if (arr[r] > arr[pivot] && l > left) r--; 
        if (l > r) {
            swap(arr[pivot], arr[r]);
        }
        else
            swap(arr[l], arr[r]);
    }

    quickSort(arr, left, r - 1);
    quickSort(arr, r + 1, right);
}

int main() {
    // 특정한 값을 기준으로 큰 숫자와 작은 숫자를 교환하여 정렬
    int arr[10] = {5, 3, 4, 1, 2, 9, 10, 8, 7, 6};
    // 1, 2, 4, 3, 5
    // 
    quickSort(arr, 0, 9);

    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
}
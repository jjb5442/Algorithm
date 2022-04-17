#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << endl;
}

void merge(int* arr, int left, int mid, int right) {
    int* sorted = new int (right - left + 1);
    int l = left, r = mid + 1;
    int i = 0;
    while (l <= mid && r <= right) {
        if (arr[l] <= arr[r]) {
            sorted[i] = arr[l];
            l++;
        }
        else {
            sorted[i] = arr[r];
            r++;
        }
        i++;
    }

    if (l > mid) {
        while (r <= right) {
            sorted[i] = arr[r];
            i++; r++;
        }
    }
    else {
        while (l <= mid) {
            sorted[i] = arr[l];
            i++; l++;
        }
    }

    for (int j = 0; j <= right - left; j++) {
        arr[left+j] = sorted[j];
    }
    delete[] sorted;
}

void mergeSort(int* arr, int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main() {
    // 배열을 정확히 반으로 나눈 뒤 정렬
    int arr[10] = {5, 3, 4, 1, 2, 9, 10, 8, 7, 6};

    mergeSort(arr, 0, 9);

    printArray(arr, 10);
}
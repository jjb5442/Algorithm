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

int main() {
    // 배열을 정확히 반으로 나눈 뒤 정렬
    int size = 10;
    int arr[size] = {5, 3, 4, 1, 2, 7, 6, 8, 9, 10};
    
    for (int i = 1; i < size; i++) {
        int child = i;
        while (child != 0) {
            int root = (child - 1) / 2;
            if (arr[root] < arr[child])
                swap(arr[root], arr[child]);
            child = root;
        }
    }

    for (int i = size - 1; i > 0; i--) {
        int root = 0;
        swap(arr[root], arr[i]);
        while (root < i) {
            int child = root * 2 + 1;
            if (child < i - 1 && arr[child] < arr[child+1])
                child++;
            if (child < i && arr[root] < arr[child])
                swap(arr[root], arr[child]);
            root = child;
        }
    }
    
    printArray(arr, size);
}
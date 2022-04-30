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
    int size = 20;
    int arr[size] = {1, 3, 5, 2, 1,
                    5, 2, 3, 4, 4,
                    5, 3, 1, 2, 2,
                    3, 5, 4, 1, 1};
    int sort[5] = { 0 };
    int count = 0;
    for (int i = 0; i < size; i++) {
        sort[arr[i] - 1]++;
    }

    for (int i = 0; i < size; i++) {
        if (sort[count] == 0) 
            count++;
        
        arr[i] = count + 1;
        sort[count]--;
    }   
    printArray(arr, size);
}
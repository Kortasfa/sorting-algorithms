#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>
#include <config.h>

using namespace std;

size_t partition(vector<int> &array, size_t left, size_t right, int pivot) {
    while (true) {
        while (array[left] < pivot) {
            left += 1;
        }
        while (array[right] > pivot) {
            right -= 1;
        }
        if (left >= right) {
            return right + 1;
        }
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;
        left += 1;
        right -= 1;
    }
}

void quickSort(vector<int> &array, size_t left, size_t right) {
    if (left < right) {
        const int pivot = array[(left + right) / 2];
        size_t splitIndex = partition(array, left, right, pivot);
        quickSort(array, left, splitIndex - 1);
        quickSort(array, splitIndex, right);
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    const char *file1_path = TEST1_TXT_PATH;
    int number;
    vector<int> arrayToSort;

    ifstream file1(file1_path);

    if (!file1.is_open()) {
        cerr << "Не удалось открыть файл!" << endl;
        return 1;
    }

    while (file1 >> number) {
        arrayToSort.push_back(number);
    }
    size_t left = 0;
    size_t right = arrayToSort.size() - 1;
    quickSort(arrayToSort, left, right);
    for (int i: arrayToSort) {
        cout << i << " ";
    }
    file1.close();

    return 0;
}

#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>
#include <config.h>

using namespace std;

int bubbleSort(vector<int> &array) {
    for (size_t limit = array.size() - 1; limit > 0; limit -= 1) {
        for (size_t item = 0; item < limit; item++) {
            if (array[item] > array[item + 1]) {
                int temp = array[item];
                array[item] = array[item + 1];
                array[item + 1] = temp;
            }
        }
    }
    for (size_t i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }
    return 0;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    const char *file1_path = TEST1_TXT_PATH;
    const char *file2_path = TEST2_TXT_PATH;
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

    bubbleSort(arrayToSort);

    file1.close();

    return 0;
}

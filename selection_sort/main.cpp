#include <iostream>
#include <fstream>
#include <vector>
#include <windows.h>
#include <config.h>

using namespace std;

int selectionSort(vector<int> &array) {
    for (size_t limit = 0; limit < array.size(); limit += 1) {
        size_t minPos = limit;
        for (size_t path = limit + 1; path < array.size(); path += 1) {
            if (array[minPos] > array[path]) {
                minPos = path;
            }
        }
        int temp = array[minPos];
        array[minPos] = array[limit];
        array[limit] = temp;
    }
    for (int i: array) {
        cout << i << " ";
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

    selectionSort(arrayToSort);

    file1.close();

    return 0;
}

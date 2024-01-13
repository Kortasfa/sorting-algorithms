#include <iostream>
#include <fstream>
#include <windows.h>
#include <config.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    // Путь к файлу test1.txt
    const char* file1_path = TEST1_TXT_PATH;

    // Путь к файлу test2.txt
    const char* file2_path = TEST2_TXT_PATH;

    // Попробуйте открыть файл test1.txt для чтения
    std::ifstream file1(file1_path);
    if (file1.is_open()) {
        std::cout << "Файл " << file1_path << " доступен для чтения." << std::endl;
        file1.close();
    } else {
        std::cerr << "Ошибка: Файл " << file1_path << " недоступен." << std::endl;
    }

    // Попробуйте открыть файл test2.txt для чтения
    std::ifstream file2(file2_path);
    if (file2.is_open()) {
        std::cout << "Файл " << file2_path << " доступен для чтения." << std::endl;
        file2.close();
    } else {
        std::cerr << "Ошибка: Файл " << file2_path << " недоступен." << std::endl;
    }

    return 0;
}

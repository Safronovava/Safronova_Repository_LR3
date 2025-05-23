#include <iostream>

using namespace std;

//  байты в мегабайты
double MB(long long bytes) {
    //разрабатывается Сафроновой В.А.
}

//  байты в гигабайты
double GB(long long bytes) {
    //разрабатывается Сафроновой В.А.
}

void EnterData(long long &res) {
    cin >> res;
}

int main() {
    int choice;
    long long bytes;

    do {
        // Вывод меню
        cout << "Меню:\n";
        cout << "1. Ввести объем информации в байтах (B)\n";
        cout << "2. Выразить объем в мегабайтах (MB)\n";
        cout << "3. Выразить объем в гигабайтах (GB)\n";
        cout << "4. Выйти\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите объем информации в байтах: ";
                EnterData(bytes);
                break;
            case 2:
                if (bytes > 0) {
                    cout << "Объем в мегабайтах: " << MB(bytes) << " MB\n";
                } else {
                    cout << "Сначала введите объем информации.\n";
                }
                break;
            case 3:
                if (bytes > 0) {
                    cout << "Объем в гигабайтах: " << GB(bytes) << " GB\n";
                } else {
                    cout << "Сначала введите объем информации.\n";
                }
                break;
            case 4:
                cout << "Выход из программы...\n";
                break;
            default:
                cout << "Неверный выбор. Пожалуйста, выберите пункт из меню.\n";
        }
    } while (choice != 4); 

    return 0;
}


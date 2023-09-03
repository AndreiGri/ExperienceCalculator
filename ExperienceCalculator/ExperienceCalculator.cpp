#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменяем кодировку консоли:
    system("chcp 1251 > nul");

    int level1 = 1000;
    int level2 = 2500;
    int level3 = 5000;
    int points = 0;

    cout << "Введите кол-во очков: ";
    cin >> points;
    cout << "-------Проверяем-------" << endl;

    if (points >= level3) {
        cout << "Ваш уровень: 3" << endl;
    }
    else {
        if (points >= level2) {
            cout << "Ваш уровень: 2" << endl;
        }
        else {
            if (points >= level1) {
                cout << "Ваш уровень: 1" << endl;
            }
            else {
                if (points < 0) {
                    cout << "Не корректно введено значение!" << endl;
                }
                else {
                    if (points < level1) {
                        cout << "Вы всё ещё на нулевом уровне!" << endl;
                    }
                }
            }
        }
    }

    // Задержка окна консоли:
    system("pause > nul");
    return 0;
}
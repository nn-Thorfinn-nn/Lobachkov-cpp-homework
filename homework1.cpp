#include <iostream> //подключение библиотеки с вводом-выводом (cin, cout)
#include <string> //для удобства
using namespace std;
int main() //начало выполнения
{
    string userName; 
    cout << "Введите ваше имя:"; //Запрос имени пользователя
    getline(cin, userName); //считывание строки с именем
    cout << "Здравствуйте, " << userName << endl; //вывод приветственного сообщения
    return 0; //завершение программы
}

#include <iostream> //подключение библиотеки с вводом-выводом (cin, cout)
#include <string> //для удобства
using namespace std; 
int main() //начало выполнения
{ 
      string userName; 
    cin >> userName; //ввод имени
    cout << "Здравствуйте, " + userName + "!"; //вывод приветственного сообщения
    return 0; //завершение программы 
}

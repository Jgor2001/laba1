#include <iostream>  //используется для вывода информации в консоль.
#include <fstream>   //используется для работы с файлами и получения информации о них.
#include <chrono>    //используется для задержек в работе программы
#include <thread>    //используется для работы с потоками и синхронизации между ними
#include <QString>   //внутренняя библиотека Qt используется для работы со строками в коде
#include <QFileInfo> //внутренняя библиотека Qt используется для получения информации о файле, такой как размер и существование.

using namespace std;

int main()
{
    const QString filename = "C:/Qt/test.txt"; // путь к файлу, за которым будем следить
    QFileInfo file_info(filename); // создает объект QFileInfo, который содержит информацию о файле, заданном в filename
    bool exists = file_info.exists(); // проверяет, существует ли файл, заданный в filename. Результат проверки сохраняется в переменной exists, которая будет true, если файл существует, и false, если файл не существует.
    size_t size = 0; // размер файла
    if (exists)
    { // если файл существует
        size = file_info.size(); //  задает переменную size, которая будет хранить размер файла.
    }
    cout << "fail " << filename.toStdString() << " failov naideno " ;
      if (exists)
          cout << "1 fail "<< endl;
      else
          cout << "0 fail "<< endl;

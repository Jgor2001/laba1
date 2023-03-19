#include <iostream>
#include <fstream>
#include <thread>
#include <QString>
#include <QFileInfo>

using namespace std;

int main()
{
    const QString filename = "C:/Qt/test.txt";
    QFileInfo file_info(filename);
    bool exists = file_info.exists();
    size_t size = NULL; // размер файла
    if (exists)
    { // если файл существует
        size = file_info.size(); //  задает переменную size, которая будет хранить размер файла.
    }
    cout << "fail " << filename.toStdString() << " failov naideno " ;
      if (exists)
          cout << "1 fail "<< endl;
      else
          cout << "0 fail "<< endl;

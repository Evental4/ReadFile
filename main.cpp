#include <iostream>
#include <fstream>
using namespace std;

int main()
{
     setlocale (LC_ALL , "Russian");

    ifstream file("�������.txt");

    string str;
    getline(file,str);
    cout <<str<< endl;

    return 0;
}

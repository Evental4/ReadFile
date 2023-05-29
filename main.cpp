#include <iostream>
#include <fstream>
using namespace std;

int main()
{
     setlocale (LC_ALL , "Russian");

    string text_queestion;
    string right_answer;
    string adress_pic_answer1;
    string text_answer1;
    string adress_pic_answer2;
    string text_answer2;
    string adress_pic_answer3;
    string text_answer3;
    string str;

    ifstream file("вопросы.txt");

    while(file.good())
{
    getline(file,str);
    int pos2 = -1;
    int pos1 = pos2+1;

    pos2 =str.find(",",pos1);
    text_queestion= str.substr(pos1, pos2-pos1);

    pos1 =pos2+1;
    pos2 =str.find(",",pos1);
    right_answer =str.substr(pos1, pos2-pos1);

    pos1 =pos2+1;
    pos2 =str.find(",",pos1);
    adress_pic_answer1=str.substr(pos1, pos2-pos1);

    pos1 =pos2+1;
    pos2 =str.find(",",pos1);
    text_answer1= str.substr(pos1, pos2-pos1);

    pos1 =pos2+1;
    pos2 =str.find(",",pos1);
    adress_pic_answer2 =str.substr(pos1, pos2-pos1);

    pos1 =pos2+1;
    pos2 =str.find(",",pos1);
    text_answer2=str.substr(pos1, pos2-pos1);

    pos1 =pos2+1;
    pos2 =str.find(",",pos1);
    adress_pic_answer3 =str.substr(pos1, pos2-pos1);

    pos1 =pos2+1;
    pos2 =str.find(",",pos1);
    text_answer3=str.substr(pos1, pos2-pos1);




    cout <<str<< endl;
    cout <<text_queestion<< endl;
    cout <<right_answer<< endl;
    cout <<adress_pic_answer1<< endl;
    cout <<text_answer1<< endl;
    cout <<adress_pic_answer2<< endl;
    cout <<text_answer2<< endl;
    cout <<adress_pic_answer3<< endl;
    cout <<text_answer3<< endl;
}

    return 0;
}

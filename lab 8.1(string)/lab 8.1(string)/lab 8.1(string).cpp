// lab 8.1(string).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Квецко Вікторія 
//Варіант 32

#include <iostream>
#include <string>

using namespace std;

int CountIncludes(const string, const string);
string Change(string, const string, const string);

int main()
{
    string str;

    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << endl;

    string letters = "BASIC";

    cout << "String contained " << CountIncludes(str, letters)
        << " letters of word: " << letters << endl << endl;

    string dest = Change(str, "BASIC", "Delphi");

    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}

int CountIncludes(const string str, const string letters)
{
    int count = 0;

    for (size_t pos = 0; (pos = str.find_first_of(letters, pos)) != -1; count++, pos++);

    return count;
}

string Change(string str, const string fromPart, const string toPart)
{
    string copy = str;

    size_t pos = 0;
    size_t lenFromPart = size(fromPart);

    while ((pos = copy.find(fromPart, pos)) != -1)
        copy.replace(pos, lenFromPart, toPart);

    return copy;
}
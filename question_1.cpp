// Develop a program that prints all alphabets from 'a' to 'z' by skipping 3 alphabets using do while loop

#include <iostream>
using namespace std;
int main()
{
    char ch = 'a';
    do
    {
        cout << ch << " ";
        ch += 4;
    } while (ch <= 'z');
    return 0;
}

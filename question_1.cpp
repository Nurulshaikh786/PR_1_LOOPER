// Develop a program that prints all alphabets from 'a' to 'z' by skipping 3 alphabets using do while loop

#include <iostream>
using namespace std;
int main()
{
    //declare ch='a'
    char ch = 'a';
    //start do while loop
    do
    {
        //execute this code
        cout << ch << " ";
        ch += 4;
    } while (ch <= 'z');
    //while ch is smaller then 'z'
    return 0;
}

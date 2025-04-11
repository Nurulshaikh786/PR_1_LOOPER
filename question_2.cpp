// Develop a program to count the total numbers of digit in a number

#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "Enter a number : ";
    cin >> num;
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    cout << "Enterd Number contain " << count << " digits";
    return 0;
}

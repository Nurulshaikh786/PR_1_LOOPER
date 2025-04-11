// Develop a program to find number's first and last digit sum

#include <iostream>
using namespace std;

int main()
{
    int num, last_dig, first_dig, sum;

    cout << "Enter a number : ";
    cin >> num;

    last_dig = num % 10;

    while (num != 0)
    {

        first_dig = num % 10;
        num = num / 10;
    }

    sum = first_dig + last_dig;

    cout << "Sum of first and last digit of entered number is : " << sum;
}
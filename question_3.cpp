// Develop a program to find number's first and last digit sum

#include <iostream>
using namespace std;
int main()
{
    //declare num ,lst-dig,first-dig,sum
    int num, last_dig, first_dig, sum;
    // take input number
    cout << "Enter a number : ";
    cin >> num;
    //last-digit=reminder of num when divided by 10;
    last_dig = num % 10;
    //while num is not equal to 0
    while (num != 0)
    {
        //execute this code
        first_dig = num % 10;
        num = num / 10;
    }
    //declare sum= first-dig+last-dig
    sum = first_dig + last_dig;
    //give output to user sum
    cout << "Sum of first and last digit of entered number is : " << sum;
    return 0;
}

// Develop a program to count the total numbers of digit in a number

#include <iostream>
using namespace std;
int main()
{
    //declare num , count=0
    int num, count = 0;
    //take user input num
    cout << "Enter a number : ";
    cin >> num;
    //while num is not equal t0 zero
    while (num != 0)
    {
        //execute this code
        num = num / 10;
        count++;
    }
    //print value store in count
    cout << "Enterd Number contain " << count << " digits";
    return 0;
}

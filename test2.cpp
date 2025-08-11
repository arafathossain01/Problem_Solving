/*Sum of Nth number*/
#include <iostream>
using namespace std;

int NthNum(int n)
{
    if (n == 0)
        return 0;

    else
    {
        int temp = n + NthNum(n - 1);
        return temp;
    }
}

int main()
{

    int num;
    cout << "Enter the Nth number: ";
    cin >> num;

    int result = NthNum(num);
    cout << "The sum of first " << num << " number is: " << result;

    return 0;
}
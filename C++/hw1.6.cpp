#include <iostream>
using namespace std;
int main()
{
    int x;
    cout«"Введите число: ";
    cin»x;
    for (int i=1;i<=10;i++)
    {
        cout«x«'*'«i«'='«i*x«endl;
    }
    return 0;
}
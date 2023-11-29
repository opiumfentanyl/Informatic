#include <iostream>
using namespace std;
int main()
{
    int x;
    cout«"Введите число: ";
    cin»x;
    int a = 1;
    for (int i=1;i<=x;i++)
    {
        a*=i;
    }
    cout«"Факториал : "«a«endl;
    return 0;
}
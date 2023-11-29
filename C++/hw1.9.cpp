#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num;
    cout«"Введите год для проверки: ";
    cin»num;
    if (num%4==0){
        cout«"Год високосный.";
        return 0;
        }else{
        cout«"Год не високосный";
        return 0;
    }
}
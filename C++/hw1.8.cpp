#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num;
    cout«"Введите число для проверки: ";
    cin»num;
    for(int i=2;i<=sqrt(num)+1;i++){
        if (num%2==0){
            cout«"Число не простое.";
            return 0;
            }else{
            cout«"Число простое.";
            return 0;
        }
    }
}
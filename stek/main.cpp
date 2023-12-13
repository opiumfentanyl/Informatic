#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    std::cout << "Введите количество элементов в очереди: ";
    std::cin >> n;
    std::queue<int> q;
    std::cout << "Введите элементы: ";
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        q.push(element);
    }

    int numElementsToPush;
    std::cout << "Введите количество элементов, которые надо добавить в конец: ";
    std::cin >> numElementsToPush;
    std::cout << "Введите эти элементы: ";
    for (int i = 0; i < numElementsToPush; i++) {
        int element;
        std::cin >> element;
        q.push(element);
    }

    int numElementsToPop;
    std::cout << "Введите кол-во эл-ов, которые надо удалить из начала: ";
    std::cin >> numElementsToPop;
    for (int i = 0; i < numElementsToPop; i++) {
        q.pop();
    }

    std::cout << "Конечная очередь: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;

    return 0;
}

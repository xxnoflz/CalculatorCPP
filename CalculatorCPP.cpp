#include <iostream>

void pause() {
    std::cout << '\n' << "Press <Enter> to continue...";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
} // PAUSE

float Calculate(float first, float second, char oper) {
    switch (oper) {
    case'+': return first + second;
    case'-': return first - second;
    case'*': return first * second;
    case '/': return first / second;
    default: return 0;
    }
}

int main() {
    float first{};
    float second{};
    char oper{};
    std::cin >> first >> oper >> second;
    std::cout << " = " << Calculate(first, second, oper) << '\n';
    pause();
    return 0;
}
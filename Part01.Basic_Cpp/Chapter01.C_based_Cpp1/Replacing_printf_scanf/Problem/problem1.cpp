// 사용자로부터 총 5 개의 정수를 입력 받아서, 그 합을 출력하는 프로그램을 작성해 보자.

#include <iostream>

int main(void){
    int val1, val2, val3, val4, val5;
    int result = 0;

    std::cout << "Enter first integer:  ";
    std::cin >> val1;

    std::cout << "Enter second integer: ";
    std::cin >> val2;

    std::cout << "Enter third integer:  ";
    std::cin >> val3;

    std::cout << "Enter fourth integer: ";
    std::cin >> val4;

    std::cout << "Enter fifth integer:  ";
    std::cin >> val5;

    result = val1 + val2 + val3 + val4 + val5;

    std::cout << "Sum: " << result << "\n";
    return 0;
}
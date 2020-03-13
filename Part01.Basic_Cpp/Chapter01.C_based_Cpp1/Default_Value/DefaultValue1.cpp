#include <iostream>

int Adder(int num1=1, int num2=2){ // Adder 함수의 디폴트 값으로 1과 2가 설정되었다.
    return num1 + num2;
}

int main(void){
    std::cout << Adder() << std::endl;
    std::cout << Adder(5) << std::endl; // 인자를 하나만 전달하고 있다. 이 인자는 첫 번째 매개변수로 전달된다. 따라서 num2에는 2가 전달된 것으로 간주된다.
    std::cout << Adder(3, 5) << std::endl; // 이러한 경우 매개변수의 디폴트 값은 의미를 갖지 않는다.
    return 0;
}
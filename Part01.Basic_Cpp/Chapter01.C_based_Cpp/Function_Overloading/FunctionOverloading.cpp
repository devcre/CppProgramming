// 함수호출 시 전달되는 인자를 통해서 호출하고자 하는 함수의 구분이 가능하다.
// 함수오버로딩: 매개변수의 선언형태가 다를때, 동일한 이름의 함수정의를 허용하는 것.
// 함수의 오버로딩이 가능하려면 매개변수의 '자료형' 혹은 '개수'가 달라야 한다.
// 단, 함수의 반환형은 호출되는 함수를 구분하는 기준이 될 수 없다.

#include <iostream>

void MyFunc(void){
    std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c){
    std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b){
    std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void){
    MyFunc();
    MyFunc('A');
    MyFunc(12, 13);
    return 0;
}
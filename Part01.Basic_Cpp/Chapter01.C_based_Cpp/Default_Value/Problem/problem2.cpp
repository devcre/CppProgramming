// 다음과 같은 형태의 함수 오버로딩은 문제가 있다. 어떠한 문제가 있는지 설명해보자.

// int SimpleFunc(int a=10){
//     return a+1;
// }

// int SimpleFunc(void){
//     return 10;
// }

// -답변-
// 첫번째 SimpleFunc함수는 인자가 아무도 없을때 디폴트 값을 넣는 함수로서 호출되는데
// 두번째 함수도 인자가 아무도 없을때 호출되므로 두 함수를 구분할 수 없으므로 컴파일 에러가 날것이다.

#include <iostream>

int SimpleFunc(int a=10){
    return a+1;
}

int SimpleFunc(void){
    return 10;
}

int main(void){
    std::cout << SimpleFunc() << std::endl;
    return 0;
}

// 에러 메세지
// problem2.cpp:26:29: error: call of overloaded 'SimpleFunc()' is ambiguous

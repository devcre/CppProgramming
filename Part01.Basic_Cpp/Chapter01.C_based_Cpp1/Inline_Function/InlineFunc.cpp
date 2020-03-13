// 매크로 함수는 정의하기가 복잡하니, 일반 함수처럼 정의가 가능하면 좋겠다. -> 인라인 함수

#include <iostream>

inline int SQUARE(int x){ // 인라인 함수의 정의방법
    return x * x;
}

int main(void){
    std::cout << SQUARE(5) << std::endl; // SQUARE함수는 인라인 함수이니 몸체부분이 호출문을 대체하게 된다.
    std::cout << SQUARE(12) << std::endl;
    return 0;
}
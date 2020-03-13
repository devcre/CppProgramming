// using을 이용한 이름공간의 명시

#include <iostream>

namespace Hybrid{
    void HybFunc(void){
        std::cout << "So simple function!" << std::endl;
        std::cout << "In namespace Hybrid!" << std::endl;
    }
}

int main(void){
    // 키워드 using을 이용해서 '이름공간 Hybrid에 정의된 HybFyunc를 호출할 때에는, 이름공간을 지정하지 않고 호출하겠다!'는 것을 명시하고 있다.
    using Hybrid::HybFunc;
    HybFunc();
    return 0;
}

// 이 때, HybFunc는 함수의 이름도 될 수 있고, 변수의 이름도 될 수 있다.
// 이러한 경우 지역변수의 선언과 마찬가지로 선언된 이후부터 효력을 발휘하며, 선언된 지역을 벗어나면, 선언의 효력을 잃게 된다.
// 따라서 프로그램 전체영역에 효력을 미치게 하려면 전역변수와 마찬가지로 함수 밖에 선언을 해야 한다.
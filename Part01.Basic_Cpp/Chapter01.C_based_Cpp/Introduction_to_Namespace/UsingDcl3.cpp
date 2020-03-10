// 일일이 using 선언을 하는 것이 귀찮다면, 그리고 꼭 그렇게 해야만 하는 상황이 아니라면,
// 다음의 선언을 통해서 '이름공간 std에 선언된 모든 것에 대해 이름공간 지정의 생략'을 명령할 수 있다.

// using namespace std;

#include <iostream>
using namespace std;

int main(void){
    int num = 20;
    cout << "Hello World!" << endl;
    cout << "Hello " << "World!" << endl;
    cout << num << ' ' << 'A';
    cout << ' ' << 3.14 << endl;
    return 0;
}

// 프로그래밍하기에 조금 편한 것은 사실이지만, 이렇게 선언을 해버리면, 그만큼 이름충돌이 발생할 확률은 상대적으로 높아진다.
// 따라서, 무조건 편한 것만을 선호하기 보다는 상황을 판단해서 적절히 혼용하는 지혜가 필요하다.